// Fill out your copyright notice in the Description page of Project Settings.


#include "Stats/CharacterStats.h"

UCharacterStats::UCharacterStats() {

}

void UCharacterStats::SetStatValue(FString name, int value) {
	BaseStats.Emplace(name, value);
}


int UCharacterStats::GetStatValue(FString name)
{
	if (!BaseStats.IsEmpty() && BaseStats.Contains(name)) {
		int total = BaseStats[name];
		float multiplier = 0.0f;
		return FMath::RoundHalfFromZero(total + (total * multiplier));
	}
	else
		return 0;
}