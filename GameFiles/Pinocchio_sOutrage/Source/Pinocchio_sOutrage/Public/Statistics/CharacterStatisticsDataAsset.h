// Made by Alexandre RICHARD. GitHub link : https://github.com/Alexandre94fr/

#pragma once

#include "Character/GameCharacterEnum.h"
#include "Capacity/Capacity.h"

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CharacterStatisticsDataAsset.generated.h"


/**
 * 
 */
UCLASS()
class PINOCCHIO_SOUTRAGE_API UCharacterStatisticsDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

#pragma region Basic informations

	UPROPERTY(EditDefaultsOnly, Category = "Basic informations")
	FName Name;

	// TODO : Remove when this property is copy paste into Character class 
	//UPROPERTY(EditDefaultsOnly, Category = "Basic informations", meta = (ClampMin = 0))
	//float CurrentHealthPoint;

	UPROPERTY(EditDefaultsOnly, Category = "Basic informations", meta = (ClampMin = 0, ClampMax = 150))
	float MaxHealthPoint	= 50;

	UPROPERTY(EditDefaultsOnly, Category = "Basic informations", meta = (ClampMin = 0, ClampMax = 2, Units = "m/s"))
	float MovementSpeed		= 1;

	UPROPERTY(EditDefaultsOnly, Category = "Basic informations", meta = (ClampMin = 0, ClampMax = 100, Units = "m"))
	int LockingEnemyRange	= 10;
#pragma endregion

#pragma region Experience informations

	// TODO : Remove when this property is copy paste into Character class
	//UPROPERTY(EditDefaultsOnly, Category = "Experience informations", meta = (ClampMin = 0))
	//int CurrentExperiencePoints;

	UPROPERTY(EditDefaultsOnly, Category = "Experience informations", meta = (ClampMin = 0))
	int ExperiencePointsRequiredForNextLevel	= 100;

	// TODO : Remove when this property is copy paste into Character class
	//UPROPERTY(EditDefaultsOnly, Category = "Experience informations", meta = (ClampMin = 0))
	//int CurrentLevel;

	UPROPERTY(EditDefaultsOnly, Category = "Experience informations", meta = (ClampMin = 0))
	int MaxLevel								= 5;

	// TODO : Remove when this property is copy paste into Character class
	//UPROPERTY(EditDefaultsOnly, Category = "Experience informations", meta = (ClampMin = 0))
	//int CurrentSkillPoints;
#pragma endregion

#pragma region Capacity informations

	UPROPERTY(EditDefaultsOnly, Category = "Capacity informations")
	TArray<TSubclassOf<ACapacity>> BasicCapacities;

	UPROPERTY(EditDefaultsOnly, Category = "Capacity informations")
	TArray<TSubclassOf<ACapacity>> SpecialCapacities;
#pragma endregion
};