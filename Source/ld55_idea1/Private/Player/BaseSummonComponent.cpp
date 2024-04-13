// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/BaseSummonComponent.h"

#include "BaseSpawnableActor.h"

DEFINE_LOG_CATEGORY_STATIC(LogBaseSummonComponent, All, All);

UBaseSummonComponent::UBaseSummonComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}


void UBaseSummonComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

AActor* UBaseSummonComponent::SpawnStaticActor(TSubclassOf<ABaseSpawnableActor> spawnableActor, FVector const& spawnLocation) const
{
	if (!GetWorld())
		return nullptr;

	FRotator const& spawnRotation = FRotator::ZeroRotator;
	FActorSpawnParameters spawnParameters{};
	spawnParameters.Owner = this->GetOwner();
	spawnParameters.Instigator = Cast<APawn>(this->GetOwner());

	return GetWorld()->SpawnActor(spawnableActor, &spawnLocation, &spawnRotation, spawnParameters);
}
