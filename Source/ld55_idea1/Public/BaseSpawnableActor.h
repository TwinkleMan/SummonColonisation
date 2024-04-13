// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseSpawnableActor.generated.h"

UCLASS()
class LD55_IDEA1_API ABaseSpawnableActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ABaseSpawnableActor();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
