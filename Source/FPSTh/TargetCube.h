// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TargetCube.generated.h"

UCLASS()
class FPSTH_API ATargetCube : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	bool bFirstHit = false;

	UPROPERTY(VisibleAnywhere)
	bool bImportance = false;

	UPROPERTY(VisibleDefaultsOnly)
	UStaticMeshComponent* CubeVisual;
	
public:	
	// Sets default values for this actor's properties
	ATargetCube();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Value")
	float AddScore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Value")
	float ScaleMultiplier = 1.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Value")
	UMaterialInstanceDynamic* DynamicRedMaterial;

	UFUNCTION()
	float GetScore();

	UFUNCTION()
	void SetImportanceTrue();

	UFUNCTION()
	UStaticMeshComponent* GetMeshComponent() { return CubeVisual; }


};
