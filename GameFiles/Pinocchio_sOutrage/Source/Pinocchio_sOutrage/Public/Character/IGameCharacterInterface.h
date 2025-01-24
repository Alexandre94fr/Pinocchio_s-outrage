// Made by Alexandre RICHARD. GitHub link : https://github.com/Alexandre94fr/


#pragma once

#include "CoreMinimal.h"
#include "IGameCharacterInterface.generated.h"

/// <summary>
/// Interface for playable game character </summary>
UINTERFACE(BlueprintType)
class PINOCCHIO_SOUTRAGE_API UGameCharacterInterface : public UInterface
{
	GENERATED_BODY()
};

class PINOCCHIO_SOUTRAGE_API IGameCharacterInterface
{
	GENERATED_IINTERFACE_BODY()

public:

	// Debugging
	virtual bool IsDebugModeEnable() const = 0;

	// Actions
	virtual void Interact() = 0;

	virtual void Move(const FVector2D p_normalizedDirection) = 0;

	virtual void ChangeTargetedEnemy() = 0;
	virtual void TargetEnemy() = 0;

	virtual void UseBasicCapacity1() = 0;
	virtual void UseBasicCapacity2() = 0;
	virtual void UseBasicCapacity3() = 0;

	virtual void UseSpecialCapacity1() = 0;
	virtual void UseSpecialCapacity2() = 0;
	virtual void UseSpecialCapacity3() = 0;

	virtual void Pause() = 0;
};