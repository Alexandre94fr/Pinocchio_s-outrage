// Made by Alexandre RICHARD. GitHub link : https://github.com/Alexandre94fr/


#pragma once

#include "IGameCharacterInterface.h"
#include "Statistics/CharacterStatisticsDataAsset.h"
#include "Character/GameCharacterManager.h"

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameCharacter.generated.h"

UCLASS(Abstract)
class PINOCCHIO_SOUTRAGE_API AGameCharacter : public ACharacter, public IGameCharacterInterface
{
	GENERATED_BODY()

protected:
	
	UPROPERTY(EditAnywhere, Category = "Debugging")
	bool DoesDevelopperEnabledDebugMode = true;

	UPROPERTY(EditAnywhere, Category = "Statistics")
	TObjectPtr<UCharacterStatisticsDataAsset> CharacterStatistics;

	// Reading world variables
	TObjectPtr<AGameCharacterManager> GameCharacterManagerInstance;
	TArray<TObjectPtr<AGameCharacter>>* PlayerCharacters = nullptr;
	TArray<TObjectPtr<AGameCharacter>>* EnemyCharacters = nullptr;

	bool IsAbleToLockNewEnemy = false;

	TObjectPtr<AGameCharacter> TargettedGameCharacter = this;
	FVector NormalizedDirectionToTarget = FVector(0, 0, 0);

public:	

	// Sets default values for this character's properties
	AGameCharacter();

	// Called every frame
	virtual void Tick(float p_deltaTime) override;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	// Inherited by IGameCharacterInterface

	// Debugging
	virtual bool DoesVariablesCorrectlySetted() const;

	virtual bool IsDebugModeEnable() const override;

	// Actions
	virtual void Interact() override;

	virtual void Move(const FVector2D p_normalizedDirection) override;

	virtual void ChangeTargetedEnemy() override;
	virtual void TargetEnemy() override;

	virtual void UseBasicCapacity1() override;
	virtual void UseBasicCapacity2() override;
	virtual void UseBasicCapacity3() override;

	virtual void UseSpecialCapacity1() override;
	virtual void UseSpecialCapacity2() override;
	virtual void UseSpecialCapacity3() override;

	virtual void Pause() override;

	// Others (world reading)
	virtual TObjectPtr<AGameCharacter> GetClosestEnemyGameCharacter();
	virtual FVector GetNormalizedDirectionToTarget(TObjectPtr<AGameCharacter> p_gameCharacter);
	virtual void UpdateOrientation(FVector p_normalizedDirectionToTarget);
};