// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "homeworkv1GameMode.generated.h"

UCLASS(minimalapi)
class Ahomeworkv1GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	Ahomeworkv1GameMode();
	UPROPERTY(EditAnywhere)
		int score;


};



