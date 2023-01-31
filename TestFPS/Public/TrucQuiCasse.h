// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/IHealth.h"
#include "TrucQuiCasse.generated.h"

UCLASS()
class TESTFPS_API ATrucQuiCasse : public AActor, public IHealth
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ATrucQuiCasse();

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* VisualMesh;

	virtual void ApplyDamage(int damageValue, AActor* causer) override;
	virtual bool IsDead() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:	
	bool isDead = false;

};
