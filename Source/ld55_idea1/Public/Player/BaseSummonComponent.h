// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseSummonComponent.generated.h"


class ABaseSpawnableActor;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LD55_IDEA1_API UBaseSummonComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UBaseSummonComponent();

	AActor* SpawnStaticActor(TSubclassOf<ABaseSpawnableActor> spawnableActor, FVector const& spawnLocation) const;
	AActor* SpawnStaticActor(TSubclassOf<AActor> spawnableActor, FVector const& spawnLocation) const;

protected:
	virtual void BeginPlay() override;
};
