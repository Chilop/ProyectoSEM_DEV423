// Copyright Epic Games, Inc. All Rights Reserved.

#include "DEV423_zap520GameMode.h"
#include "DEV423_zap520Character.h"
#include "UObject/ConstructorHelpers.h"

ADEV423_zap520GameMode::ADEV423_zap520GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
