// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheTransvestigatorGameMode.h"
#include "TheTransvestigatorCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheTransvestigatorGameMode::ATheTransvestigatorGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
