// Fill out your copyright notice in the Description page of Project Settings.


#include "Stats/CharacterStats.h"

UCharacterStats::UCharacterStats() {

}

void UCharacterStats::setStatValue(FString name, int value) {
	BaseStats.Emplace(name, value);
}