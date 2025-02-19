// Copyright Epic Games, Inc. All Rights Reserved.

#include "FogOfWarTranningPlayerController.h"
#include "GameFramework/Pawn.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "FogOfWarTranningCharacter.h"
#include "Engine/World.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "Engine/StaticMeshActor.h"
#include "Kismet/KismetSystemLibrary.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

AFogOfWarTranningPlayerController::AFogOfWarTranningPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;
	CachedDestination = FVector::ZeroVector;
	FollowTime = 0.f;

	// Cấp phát bộ nhớ cho FOW
	FOW.SetNum(Max);
	for (int x = 0; x < Max; x++)
	{
		FOW[x].SetNum(Max);
		for (int y = 0; y < Max; y++)
		{
			FOW[x][y] = true;
			FowData.Add(FDataFog(x,y, true));
		}
	}
}

void AFogOfWarTranningPlayerController::BeginPlay()
{
	Super::BeginPlay();
}

void AFogOfWarTranningPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	OldPosition = NewPosition;
	NewPosition = GetPawn()->GetActorLocation();
	
	if ((NewPosition - OldPosition).Size() > 5.0f)
	{
		UpdateFogOfWar();
	}
}

void AFogOfWarTranningPlayerController::UpdateFogOfWar()
{
    UWorld* World = GetWorld();
    if (!World) return;

    const FVector PlayerLocation = GetPawn()->GetActorLocation();
    float MinRadius = 500.0f;
    float MinRadiusSquared = MinRadius * MinRadius;

    // Lưu trữ các ô tầm nhìn và vật cản
    TArray<FVector> LocalVisibleCells;
    TArray<FVector> ObstructedCells;

    // Kiểm tra các vật thể che khuất (với phạm vi kiểm tra lớn hơn để tối ưu)
    TArray<FHitResult> HitResults;
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(GetPawn());

    // Kiểm tra vật thể trong phạm vi tầm nhìn
    GetWorld()->SweepMultiByChannel(HitResults, PlayerLocation, PlayerLocation, FQuat::Identity, ECC_Visibility, FCollisionShape::MakeSphere(MinRadius));

    // Xử lý từng vật thể che khuất
    for (const auto& Hit : HitResults)
    {
        AStaticMeshActor* Obstacle = Cast<AStaticMeshActor>(Hit.GetActor());
        if (!IsValid(Obstacle)) continue;

        FVector ObstacleLocation = Obstacle->GetActorLocation();
        float ObstacleRadius = 50.0f;

        FVector ToObstacle = ObstacleLocation - PlayerLocation;
        float Distance = ToObstacle.Size();

        if (Distance <= ObstacleRadius || Distance > MinRadius) continue;

        // Tính toán tiếp tuyến chỉ một lần cho mỗi vật cản
        float Angle = FMath::Asin(ObstacleRadius / Distance);
        FVector Tangent1 = ToObstacle.RotateAngleAxis(FMath::RadiansToDegrees(Angle), FVector(0, 0, 1)).GetSafeNormal();
        FVector Tangent2 = ToObstacle.RotateAngleAxis(-FMath::RadiansToDegrees(Angle), FVector(0, 0, 1)).GetSafeNormal();

        FVector EndPoint1 = PlayerLocation + Tangent1 * 500.0f;
        FVector EndPoint2 = PlayerLocation + Tangent2 * 500.0f;

        // Vẽ debug line tiếp tuyến
        // DrawDebugLine(World, PlayerLocation, EndPoint1, FColor::Green, false, 1.0f);
        // DrawDebugLine(World, PlayerLocation, EndPoint2, FColor::Green, false, 1.0f);

        // Lưu danh sách các ô bị vật cản che khuất
        for (int x = 0; x < Max; x++)
        {
            for (int y = 0; y < Max; y++)
            {
                FVector CellWorldPosition(x * CellSize, y * CellSize, 20.0f);
                float DistanceSquared = FVector::DistSquared(PlayerLocation, CellWorldPosition);

                if (DistanceSquared > MinRadiusSquared) continue;

                // Kiểm tra vật cản
                FHitResult LineHit;
                if (GetWorld()->LineTraceSingleByChannel(LineHit, PlayerLocation, CellWorldPosition, ECC_Visibility, QueryParams))
                {
                    if (IsValid(LineHit.GetActor()) && LineHit.GetActor() == Obstacle)
                    {
                        ObstructedCells.Add(CellWorldPosition);
                        continue;
                    }
                }
                // Nếu ô nằm trên tiếp tuyến, vẫn sáng
                // if (FMath::PointDistToLine(CellWorldPosition, Tangent1, PlayerLocation) < CellSize ||
                //     FMath::PointDistToLine(CellWorldPosition, Tangent2, PlayerLocation) < CellSize)
                // {
                //     LocalVisibleCells.Add(CellWorldPosition);
                // }
            }
        }
    }

    // Cập nhật vùng sương mù và chỉ tính toán những ô thay đổi
	//FowData.Empty(); // Xóa dữ liệu cũ trước khi cập nhật mới
    for (int x = 0; x < Max; x++)
    {
        for (int y = 0; y < Max; y++)
        {
            FVector CellWorldPosition(x * CellSize, y * CellSize, 20.0f);
            float DistanceSquared = FVector::DistSquared(PlayerLocation, CellWorldPosition);

            // Nếu ô ngoài tầm nhìn, bôi đen lại
            if (DistanceSquared > MinRadiusSquared)
            {
                FOW[x][y] = true; // Ô ngoài phạm vi luôn tối
            	FowData[x * Max + y].Z = true;
                continue;
            }
            else
            {
            	bool bObstructed = ObstructedCells.Contains(CellWorldPosition);
            	FOW[x][y] = bObstructed;
            	FowData[x * Max + y].Z = bObstructed;
            }
            // Kiểm tra ô có bị che khuất không
            // bool bObstructed = ObstructedCells.Contains(CellWorldPosition);
            // bool bOnTangent = LocalVisibleCells.Contains(CellWorldPosition);


        	
        	// // Nếu ô bị che khuất (FOW[x][y] == true), thêm vào FowData
        	// if (FOW[x][y])
        	// {
        	// 	FowData.Add(FDataFog{x * CellSize, y * CellSize, true});
        	// }
        	// // Nếu ô nằm trong danh sách ô tầm nhìn, thêm vào FowData với trạng thái sáng
        	// if (LocalVisibleCells.Contains(CellWorldPosition))
        	// {
        	// 	FowData.Add(FDataFog{x * CellSize, y * CellSize, false}); // Ô thuộc tầm nhìn
        	// }
        	// // FOW[x][y] = bObstructed && !bOnTangent;
        }
    }
}

void AFogOfWarTranningPlayerController::DrawFow()
{
	//Vẽ debug cho các ô bị che khuất 
	for (int x = 0; x < Max; x++)
	{
	    for (int y = 0; y < Max; y++)
	    {
	        // Nếu ô này không thể nhìn thấy, tức là sương mù
	        if (FOW[x][y] == true)
	        {
	        	FowData[x * Max + y].Z = true;
	            FVector CellWorldPosition(x * CellSize, y * CellSize, 20.0f);
	            DrawDebugBox(this->GetWorld(), CellWorldPosition, FVector(CellSize, CellSize, 10.0f), FColor::Black, false, 1.0f, 0, 20.0f);
	        }
	    }
	}
}

void AFogOfWarTranningPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
	}

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Started, this, &AFogOfWarTranningPlayerController::OnInputStarted);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Triggered, this, &AFogOfWarTranningPlayerController::OnSetDestinationTriggered);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Completed, this, &AFogOfWarTranningPlayerController::OnSetDestinationReleased);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Canceled, this, &AFogOfWarTranningPlayerController::OnSetDestinationReleased);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component!"), *GetNameSafe(this));
	}
}

void AFogOfWarTranningPlayerController::OnInputStarted()
{
	StopMovement();
}

void AFogOfWarTranningPlayerController::OnSetDestinationTriggered()
{
	FollowTime += GetWorld()->GetDeltaSeconds();

	FHitResult Hit;
	bool bHitSuccessful = GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, true, Hit);

	if (bHitSuccessful)
	{
		CachedDestination = Hit.Location;
	}

	APawn* ControlledPawn = GetPawn();
	if (ControlledPawn)
	{
		FVector WorldDirection = (CachedDestination - ControlledPawn->GetActorLocation()).GetSafeNormal();
		ControlledPawn->AddMovementInput(WorldDirection, 1.0, false);
	}
}

void AFogOfWarTranningPlayerController::OnSetDestinationReleased()
{
	if (FollowTime <= ShortPressThreshold)
	{
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, CachedDestination);
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, FXCursor, CachedDestination, FRotator::ZeroRotator, FVector(1.f), true);
	}

	FollowTime = 0.f;
}