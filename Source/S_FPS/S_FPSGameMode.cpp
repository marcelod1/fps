// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "S_FPSGameMode.h"
#include "S_FPSHUD.h"
#include "S_FPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AS_FPSGameMode::AS_FPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AS_FPSHUD::StaticClass();
}
