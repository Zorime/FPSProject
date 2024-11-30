// Fill out your copyright notice in the Description page of Project Settings.


#include "TargetCubeManager.h"
#include "Kismet/GameplayStatics.h"
#include "Math/RandomStream.h"
// Sets default values
ATargetCubeManager::ATargetCubeManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATargetCubeManager::BeginPlay()
{
	Super::BeginPlay();
	TArray<AActor*> TempArray;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetCube::StaticClass(), TempArray);

	/*for (AActor* temp : TempArray)
	{
		UKismetSystemLibrary::PrintString(GetWorld(), temp->GetName());
	}*/

	for (AActor* temp : TempArray)
	{
		CubeArray.Add(Cast<ATargetCube>(temp));
	}

	TArray<int32> indexRandArray = SpawnRandNums(RandmCount, 0, CubeArray.Num() - 1);

	for (int32 index : indexRandArray)
	{
		//GEngine->AddOnScreenDebugMessage(-1,10.0f,FColor::Yellow,FString::Printf(TEXT("%d"),index),false);
		CubeArray[index]->SetImportanceTrue();
	}
}

// Called every frame
void ATargetCubeManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

TArray<int32> ATargetCubeManager::SpawnRandNums(int nums, int min, int max)
{
	//存储返回
	TArray<int32> temp;
	//查重
	TSet<int32> set;

	//随机数产生
	FRandomStream random;

	random.Initialize(FDateTime::Now().GetSecond());

	int count = 0;
	if (nums >= max) nums = max;
	while (count < nums)
	{
		int32 tempRand = random.RandRange(min, max);
		if (set.Contains(tempRand))
		{
			continue;
		}
		else
		{
			set.Add(tempRand);
			temp.Add(tempRand);
			++count;
		}
	}
	return temp;
}

