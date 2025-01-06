// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CapacityStatisticsDataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class PINOCCHIO_SOUTRAGE_API UCapacityStatisticsDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

#pragma region Basic informations

	UPROPERTY(EditDefaultsOnly, Category = "Basic informations")
	FName Name;

	UPROPERTY(EditDefaultsOnly, Category = "Basic informations", DisplayName = "NumberOfSkillPointsRequiredToUnlock (Skill Point)", meta = (ClampMin = 0, ClampMax = 10))
	int NumberOfSkillPointsRequiredToUnlock;

	UPROPERTY(EditDefaultsOnly, Category = "Basic informations", DisplayName = "LaunchCapacityKey (Key)")
	bool LaunchCapacityKey; // Key
#pragma endregion

#pragma region Attack informations

	UPROPERTY(EditDefaultsOnly, Category = "Attack informations", DisplayName = "Damage (Health Point)", meta = (ClampMin = 0, ClampMax = 50))
	float Damage;

	UPROPERTY(EditDefaultsOnly, Category = "Attack informations", meta = (ClampMin = 0, ClampMax = 25, Units = "m"))
	float Reach;

	UPROPERTY(EditDefaultsOnly, Category = "Attack informations", meta = (ClampMin = 0, ClampMax = 5, Units = "s"))
	float ArmingTime;

	UPROPERTY(EditDefaultsOnly, Category = "Attack informations", meta = (ClampMin = 0, ClampMax = 1, Units = "s"))
	float InvulnerabilityTime;

	UPROPERTY(EditDefaultsOnly, Category = "Attack informations", meta = (ClampMin = 0, ClampMax = 10, Units = "s"))
	float AttackTimeLenght;

	UPROPERTY(EditDefaultsOnly, Category = "Attack informations", meta = (ClampMin = 0, ClampMax = 5, Units = "s"))
	float StunningTime;

	UPROPERTY(EditDefaultsOnly, Category = "Attack informations", meta = (ClampMin = 0, ClampMax = 2, Units = "s"))
	float SelfStunningTimeWhenSucceed;

	UPROPERTY(EditDefaultsOnly, Category = "Attack informations", meta = (ClampMin = 0, ClampMax = 2, Units = "s"))
	float SelfStunningTimeWhenFailed;

	UPROPERTY(EditDefaultsOnly, Category = "Attack informations", meta = (ClampMin = 0, ClampMax = 15, Units = "s"))
	float CooldownTime;

	UPROPERTY(EditDefaultsOnly, Category = "Attack informations", meta = (ClampMin = 0, ClampMax = 5, Units = "m"))
	float Knockback;
#pragma endregion

#pragma region Capacity effects

	UPROPERTY(EditDefaultsOnly, Category = "Capacity effects")
	bool CapacityEffect; // Function								

	UPROPERTY(EditDefaultsOnly, Category = "Capacity effects")
	bool SecondaryCapacityEffectWhenSucceed; // Function		

	UPROPERTY(EditDefaultsOnly, Category = "Capacity effects")
	bool SecondCapacityEffectWhenFailed; // Function
#pragma endregion
};