// Copyright Epic Games, Inc. All Rights Reserved.

#include "ld55_idea1Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Materials/Material.h"
#include "Engine/World.h"

#include "Player/BaseSummonComponent.h"
#include "Player/SpawnMachinegunBeltComponent.h"

DEFINE_LOG_CATEGORY_STATIC(LogCharacter, All, All)

Ald55_idea1Character::Ald55_idea1Character()
{
	// Set size for player capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
	CameraBoom->TargetArmLength = 800.f;
	CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	TopDownCameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Activate ticking in order to update the cursor every frame.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	// Configure summoning component
	SummonComponent = CreateDefaultSubobject<UBaseSummonComponent>("BaseSummonComponent");
	SpawnBeltComponent = CreateDefaultSubobject<USpawnMachinegunBeltComponent>("SpawnBeltComponent");
}

void Ald55_idea1Character::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
}

void Ald55_idea1Character::SpawnSomething()
{
	FVector WorldLocation{};
	FVector WorldDirection{};

	const float DistanceAboveGround = 50.0f;

	if (!GetLocalViewingPlayerController()->DeprojectMousePositionToWorld(WorldLocation, WorldDirection))
		return;

	const FVector PlaneOrigin(0.0f, 0.0f, DistanceAboveGround);

	const FVector ActorWorldLocation = FMath::LinePlaneIntersection(
		WorldLocation,
		WorldLocation + WorldDirection,
		PlaneOrigin,
		FVector::UpVector
	);

	AActor* spawnedActor = SummonComponent->SpawnStaticActor(SpawnBeltComponent->GetActorToSpawn(), ActorWorldLocation);
	if (!spawnedActor)
		return;

	SpawnedActors.Push(spawnedActor);
	UE_LOG(LogCharacter, Display, TEXT("Spawned actor: %s"), *spawnedActor->GetName());
}
