// Copyright Epic Games, Inc. All Rights Reserved.

#include "GamejamGameMode.h"
#include "GamejamPlayerController.h"
#include "GamejamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGamejamGameMode::AGamejamGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGamejamPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}