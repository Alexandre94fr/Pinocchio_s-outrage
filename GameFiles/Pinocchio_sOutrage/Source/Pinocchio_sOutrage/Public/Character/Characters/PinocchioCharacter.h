// Made by Alexandre RICHARD. GitHub link : https://github.com/Alexandre94fr/


#pragma once

#include "CoreMinimal.h"
#include "Character/GameCharacter.h"
#include "PinocchioCharacter.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class PINOCCHIO_SOUTRAGE_API APinocchioCharacter : public AGameCharacter
{
	GENERATED_BODY()

public:

	// Inherited by IGameCharacterInterface from AGameCharacter
	//void Interact() override;
	//
	//void Move(const FVector2D p_normalizedDirection) override;
	//
	//void TargetEnemy() override;
	//
	//void UseBasicCapacity1() override;
	//void UseBasicCapacity2() override;
	//void UseBasicCapacity3() override;
	//
	//void UseSpecialCapacity1() override;
	//void UseSpecialCapacity2() override;
	//void UseSpecialCapacity3() override;
	//
	//void Pause() override;

private:

	virtual void Tick(float p_deltaTime) override;

};