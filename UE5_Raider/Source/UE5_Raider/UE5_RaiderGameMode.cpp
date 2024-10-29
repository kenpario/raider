// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_RaiderGameMode.h"
#include "UE5_RaiderCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5_RaiderGameMode::AUE5_RaiderGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
