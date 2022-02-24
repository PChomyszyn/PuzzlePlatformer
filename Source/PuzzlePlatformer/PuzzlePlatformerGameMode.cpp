// Copyright Epic Games, Inc. All Rights Reserved.

#include "PuzzlePlatformerGameMode.h"
#include "PuzzlePlatformerCharacter.h"
#include "UObject/ConstructorHelpers.h"

APuzzlePlatformerGameMode::APuzzlePlatformerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
