// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MyCanvas.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "FogOfWarTranningPlayerController.generated.h"

/** Forward declaration to improve compiling times */
class UNiagaraSystem;
class UInputMappingContext;
class UInputAction;

USTRUCT(BlueprintType, Blueprintable)
struct FMiniEle
{
	GENERATED_BODY()
	float Center_X, Center_Y, A1, B1, C1, A2, B2, C2, A3, B3, C3,SignOfCenter,SignOfChar;
	int Sign1, Sign2;
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

	UFUNCTION(BlueprintCallable)
	void DrawFogOfWar();

	const int Max = 100;
	bool FoW[100][100];
	bool Change[100][100];
	
	UPROPERTY(EditAnywhere)
	float FixedSize;
	
	UPROPERTY(EditAnywhere, Category="Collision")
	TEnumAsByte<ECollisionChannel> TraceChannelProperty = ECC_Pawn;
	
	UPROPERTY()
	AMyCanvas* MyCanvass;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	UTexture2D* WhiteTexture;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	UTexture2D* BlackTexture;
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
	FVector CachedDestination, NewPosition, OldPosition;

	bool bIsTouch; // Is it a touch device
	float FollowTime; // For how long it has been pressed
};


