// Fill out your copyright notice in the Description page of Project Settings.


#include "TargetCube.h"

// Sets default values
ATargetCube::ATargetCube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CubeVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualRepresentation"));
	CubeVisual->SetupAttachment(RootComponent);

	
	//DynamicRedMaterial = UMaterialInstanceDynamic::Create(CubeVisual->GetMaterial(0), this);
	//DynamicRedMaterial->SetVectorParameterValue("Color", FLinearColor::Red);

}

// Called when the game starts or when spawned
void ATargetCube::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATargetCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float ATargetCube::GetScore()
{
	float ans = 0;
	if (!bFirstHit)
	{
		bFirstHit = true;
		CubeVisual->SetRelativeScale3D(FVector(ScaleMultiplier * CubeVisual->GetRelativeScale3D()));
		if (bImportance)
			ans = 2 * AddScore;
		else
			ans = AddScore;
	}
	else
	{
		if (bImportance)
			ans = 2 * AddScore;
		else
			ans = AddScore;
		Destroy();
	}
	return ans;
}
void ATargetCube::SetImportanceTrue()
{
	bImportance = true;
	//TODO:¸Ä±ä²ÄÖÊ
	if (CubeVisual->GetMaterial(0) != nullptr)
	{
		DynamicRedMaterial = UMaterialInstanceDynamic::Create(CubeVisual->GetMaterial(0), this);
		DynamicRedMaterial->SetVectorParameterValue("Base Color", FLinearColor::Red);
		CubeVisual->SetMaterial(0, DynamicRedMaterial);
	}
	
}

