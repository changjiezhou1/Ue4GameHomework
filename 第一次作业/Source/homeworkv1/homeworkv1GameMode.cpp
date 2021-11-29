// Copyright Epic Games, Inc. All Rights Reserved.

#include "homeworkv1GameMode.h"
#include "homeworkv1HUD.h"
#include "homeworkv1Character.h"
#include "UObject/ConstructorHelpers.h"

Ahomeworkv1GameMode::Ahomeworkv1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
	score = 0;

	// use our custom HUD class
	HUDClass = Ahomeworkv1HUD::StaticClass();
}
