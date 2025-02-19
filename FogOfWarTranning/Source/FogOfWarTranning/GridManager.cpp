// Fill out your copyright notice in the Description page of Project Settings.


#include "GridManager.h"


void AGridManager::SpawnGrid()
{
	FVector RootLocation = GetActorLocation();
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			FVector SpawnLocation = RootLocation + FVector(j * 150, i * 150, 50);
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			AGrid* Grid = GetWorld()->SpawnActor<AGrid>(GridSpawn, SpawnLocation, FRotator::ZeroRotator, SpawnParams);
		}
	}
}

// Sets default values
AGridManager::AGridManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AGridManager::BeginPlay()
{
	Super::BeginPlay();
	//SpawnGrid();
}

// Called every frame
void AGridManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

