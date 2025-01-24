// Made by Alexandre RICHARD. GitHub link : https://github.com/Alexandre94fr/


#include "GameModes/InLevelGameMode.h"

#include "Character/GameCharacterManager.h"
#include "ExternalTools/MessageDebugger.h"

AInLevelGameMode::AInLevelGameMode()
{
	PlayerCharacterType = EGameCharactersEnum::Pinocchio;
	PlayerCharacterPosition = FVector(-750, 0, 100);
	PlayerCharacterRotation = FQuat::MakeFromEuler(FVector(0, 0, 0)).Rotator();
}

void AInLevelGameMode::HandleStartingNewPlayer_Implementation(APlayerController* p_playerController)
{
	Super::HandleStartingNewPlayer_Implementation(p_playerController);

	// Security
	if (AGameCharacterManager::Instance == nullptr)
	{
		MessageDebugger::ErrorOnScreen(-1, FString::Printf(TEXT("The 'Instance' variable insind of the %s class is nullptr"), *this->GetClass()->GetName()));
		return;
	}

	// Creating the player character
	AGameCharacterManager::Instance->InstantiateGameCharacter(PlayerCharacterType,
		PlayerCharacterPosition, PlayerCharacterRotation,
		true, p_playerController
	);
}