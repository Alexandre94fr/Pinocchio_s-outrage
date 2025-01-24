// Made by Alexandre RICHARD. GitHub link : https://github.com/Alexandre94fr/

#pragma once

#include "Character/GameCharacterEnum.h"

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "InLevelGameMode.generated.h"


/**
 * 
 */
UCLASS()
class PINOCCHIO_SOUTRAGE_API AInLevelGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere, Category = "Player character spawn")
	EGameCharactersEnum PlayerCharacterType;

	UPROPERTY(EditAnywhere, Category = "Player character spawn")
	FVector PlayerCharacterPosition;

	UPROPERTY(EditAnywhere, Category = "Player character spawn")
	FRotator PlayerCharacterRotation;
	
public:

	AInLevelGameMode();

	virtual void HandleStartingNewPlayer_Implementation(APlayerController* p_playerController) override;
};