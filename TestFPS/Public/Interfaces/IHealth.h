#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IHealth.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UHealth : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class TESTFPS_API IHealth
{
	GENERATED_BODY()

		// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void ApplyDamage(int damageValue, AActor* owner) = 0;
	virtual bool IsDead() = 0;
};