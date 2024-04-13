// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpawnMachinegunBeltComponent.generated.h"


class ABaseSpawnableActor;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LD55_IDEA1_API USpawnMachinegunBeltComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	USpawnMachinegunBeltComponent();

	/** List of buildings that can be theoretically spawned */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = SummonBeltConfig)
	TArray<TSubclassOf<ABaseSpawnableActor>> SummonableBuildings;

	/** Number of elements in spawn belt */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = SummonBeltConfig)
	int32 SpawnBeltLength = 1;

	/** Get class of actor to spawn */
	TSubclassOf<ABaseSpawnableActor> GetActorToSpawn();

protected:
	virtual void BeginPlay() override;

	// Actual elements that are available to spawn at current moment
	TArray<TSubclassOf<ABaseSpawnableActor>> SpawnBeltData;
};
