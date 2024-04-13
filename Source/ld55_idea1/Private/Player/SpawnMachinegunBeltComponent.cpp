// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/SpawnMachinegunBeltComponent.h"
#include "BaseSpawnableActor.h"

DEFINE_LOG_CATEGORY_STATIC(LogSpawnBelt, All, All);

USpawnMachinegunBeltComponent::USpawnMachinegunBeltComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}


TSubclassOf<ABaseSpawnableActor> USpawnMachinegunBeltComponent::GetActorToSpawn()
{
	if (SpawnBeltData.Num() <= 0)
	{
		return nullptr;
	}

	return SpawnBeltData[0];
}

void USpawnMachinegunBeltComponent::BeginPlay()
{
	Super::BeginPlay();

	check(SpawnBeltLength > 0);
	check(SummonableBuildings.Num() > 0);

	SpawnBeltData.Reserve(SpawnBeltLength);
	for (int i = 0; i < SpawnBeltLength; ++i)
	{
		SpawnBeltData.Push(SummonableBuildings[FMath::RandRange(0, SummonableBuildings.Num() - 1)]);
		UE_LOG(LogSpawnBelt, Display, TEXT("Added element to spawn belt, it is %s"), *SpawnBeltData[i]->GetClass()->GetName());
	}
}
