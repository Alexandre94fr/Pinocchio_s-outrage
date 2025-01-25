// Made by Alexandre RICHARD. GitHub link : https://github.com/Alexandre94fr/

#pragma once

#include "CharacterStatisticsDataAsset.h"

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
	TMap<EGameCharactersEnum, int> EnemyCharactersSpawned;

	// Default constructor
	FGameLevel()
	{
		NumberOfExperienceGaveWhenFinished = 0;
		EnemyCharactersSpawned.Add(EGameCharactersEnum::Pawn, 1);
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