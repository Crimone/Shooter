// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "MyPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_API AMyPlayerState : public APlayerState
{
	GENERATED_BODY()

public:

	AMyPlayerState();

	float DeathCount;

	UFUNCTION(BlueprintCallable, Category = "PlayerState")
		void AddDeathCount(float DeathCountDelta);

	UFUNCTION(BlueprintCallable, Category = "PlayerState")
		FORCEINLINE float GetDeathCount() const { return DeathCount; }

};
