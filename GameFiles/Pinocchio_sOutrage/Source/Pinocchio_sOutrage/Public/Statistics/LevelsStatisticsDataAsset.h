// Made by Alexandre RICHARD. GitHub link : https://github.com/Alexandre94fr/

#pragma once

#include <Character/GameCharacter.h>

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LevelsStatisticsDataAsset.generated.h"

USTRUCT(BlueprintType)
struct FGameLevel
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditDefaultsOnly, Category = "Level informations")
	int NumberOfExperienceGaveWhenFinished;

	UPROPERTY(EditDefaultsOnly, Category = "Level informations")
	TMap<ECharactersEnum, int> EnemyCharactersSpawned;

	// Default constructor
	FGameLevel()
	{
		EnemyCharactersSpawned.Add(ECharactersEnum::Pawn, 1);
	}
};

/**
 * 
 */
UCLASS()
class PINOCCHIO_SOUTRAGE_API ULevelsStatisticsDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameLevel> LevelsStatistics;
};