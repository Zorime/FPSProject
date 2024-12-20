// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "MyPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class FPSTH_API AMyPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	float MyScore;


	UFUNCTION()
	void AddScore(float Value);
	
};
