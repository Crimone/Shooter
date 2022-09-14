// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "shooterGameMode.generated.h"

UCLASS(minimalapi)
class AshooterGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AshooterGameMode();

	void RestartDeadPlayers();

private:
	TArray<class ASpawnVolume*> SpawnVolumes;

};



