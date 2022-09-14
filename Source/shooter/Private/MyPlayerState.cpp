// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerState.h"

AMyPlayerState::AMyPlayerState()
{
	DeathCount = 0;
}

void AMyPlayerState::AddDeathCount(float DeathCountDelta)
{
	DeathCount += DeathCountDelta;
}