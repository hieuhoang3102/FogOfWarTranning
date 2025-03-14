// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Grid.h"
#include "GridManager.generated.h"


UCLASS()
class FOGOFWARTRANNING_API AGridManager : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AGridManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Floor Grid")
	int Row = 30;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Floor Grid")
	int Col = 35;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Floor Grid")
	TSubclassOf<AGrid> GridSpawn;

	UFUNCTION(BlueprintCallable)
	void SpawnGrid();
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
