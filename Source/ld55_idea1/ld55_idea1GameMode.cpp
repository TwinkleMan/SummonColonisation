// Copyright Epic Games, Inc. All Rights Reserved.

#include "ld55_idea1GameMode.h"
#include "ld55_idea1PlayerController.h"
#include "ld55_idea1Character.h"
#include "UObject/ConstructorHelpers.h"

Ald55_idea1GameMode::Ald55_idea1GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = Ald55_idea1PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}