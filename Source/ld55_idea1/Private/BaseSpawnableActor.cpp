// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseSpawnableActor.h"

ABaseSpawnableActor::ABaseSpawnableActor()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ABaseSpawnableActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseSpawnableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
