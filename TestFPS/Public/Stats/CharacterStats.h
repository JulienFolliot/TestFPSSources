// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterStats.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class TESTFPS_API UCharacterStats : public UObject
{
	GENERATED_BODY()

public: 
	UCharacterStats();

	// health
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "BaseStats")
	TMap<FString, int> BaseStats;

	void setStatValue(FString name, int value);
};
