// Copyright Epic Games, Inc. All Rights Reserved.

#include "GamejamPlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "GamejamCharacter.h"
#include "Engine/World.h"

AGamejamPlayerController::AGamejamPlayerController()
{
	bShowMouseCursor = true;
	// DefaultMouseCursor = EMouseCursor::Crosshairs;
}

