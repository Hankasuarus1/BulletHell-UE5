// Copyright Epic Games, Inc. All Rights Reserved.

#include "BulletHellGameMode.h"
#include "BulletHellCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABulletHellGameMode::ABulletHellGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
