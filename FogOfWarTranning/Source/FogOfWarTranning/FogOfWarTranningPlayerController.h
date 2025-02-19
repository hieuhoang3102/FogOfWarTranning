// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "FogOfWarTranningPlayerController.generated.h"

/** Forward declaration to improve compiling times */
class UNiagaraSystem;
class UInputMappingContext;
class UInputAction;

USTRUCT(BlueprintType, Blueprintable)
struct FDataFog
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly)
	float X;
	UPROPERTY(BlueprintReadOnly)
	float Y;
	UPROPERTY(BlueprintReadOnly)
	bool Z;
};

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS()
class AFogOfWarTranningPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AFogOfWarTranningPlayerController();

	/** Time Threshold to know if it was a short press */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	float ShortPressThreshold;

	/** FX Class that we will spawn when clicking */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UNiagaraSystem* FXCursor;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;
	
	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* SetDestinationClickAction;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* SetDestinationTouchAction;

	UPROPERTY(EditAnywhere, Category="Collision")
	TEnumAsByte<ECollisionChannel> TraceChannelProperty = ECC_Pawn;
	const int32 Max = 128;
	TArray<TArray<bool>> FOW;
	float CellSize = 20.0f;

	UPROPERTY(BlueprintReadOnly)
	TArray<FDataFog> FowData;
	
	UFUNCTION(BlueprintCallable, Category = "FogOfWar")
	void UpdateFogOfWar();

	UFUNCTION(BlueprintCallable, Category = "FogOfWar")
	void DrawFow();
protected:
	/** True if the controlled character should navigate to the mouse cursor. */
	uint32 bMoveToMouseCursor : 1;

	virtual void SetupInputComponent() override;
	
	// To add mapping context
	virtual void BeginPlay();

	/** Input handlers for SetDestination action. */
	void OnInputStarted();
	void OnSetDestinationTriggered();
	void OnSetDestinationReleased();
	void OnTouchTriggered();
	void OnTouchReleased();

public:
	virtual void Tick(float DeltaTime) override;
	
private:
	FVector CachedDestination;
	FVector NewPosition, OldPosition;
	bool bIsTouch; // Is it a touch device
	float FollowTime; // For how long it has been pressed
	TArray<FVector> VisibleCells; // Danh sách các ô không bị bôi đen khi có đường tiep tuyến đi qua

};


