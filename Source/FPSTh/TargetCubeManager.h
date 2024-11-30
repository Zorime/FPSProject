// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TargetCube.h"
#include "GameFramework/Actor.h"
#include "TargetCubeManager.generated.h"

UCLASS()
class FPSTH_API ATargetCubeManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATargetCubeManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	TArray<ATargetCube*> CubeArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RandmCount = 5;

	TArray<int32> SpawnRandNums(int nums, int min, int max);
};
