// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MyCanvas.h"
#include "GameFramework/Character.h"
#include "FogOfWarTranningCharacter.generated.h"

// USTRUCT(BlueprintType, Blueprintable)
// struct FMiniEle2
// {
// 	GENERATED_BODY()
// 	float CenterX, CenterY, A1, B1, C1, A2, B2, C2, A3, B3, C3;
// 	int Sign1, Sign2;
// };

UCLASS(Blueprintable)
class AFogOfWarTranningCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AFogOfWarTranningCharacter();

	virtual void BeginPlay() override;
	
	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	// const int Max = 100;
	// bool FoW[100][100];
	// bool Change[100][100];
	//
	// UPROPERTY(EditAnywhere)
	// float FixedSize;
	//
	// UPROPERTY()
	// AMyCanvas* MyCanvass;
	//
	// UPROPERTY(BlueprintReadOnly, EditAnywhere)
	// UTexture2D* WhiteTexture;
	//
	// UPROPERTY(BlueprintReadOnly, EditAnywhere)
	// UTexture2D* BlackTexture;
	//
	// FVector NewPosition, OldPosition;
private:
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
};

