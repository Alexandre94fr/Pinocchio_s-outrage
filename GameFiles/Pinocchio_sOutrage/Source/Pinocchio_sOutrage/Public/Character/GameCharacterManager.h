// Made by Alexandre RICHARD. GitHub link : https://github.com/Alexandre94fr/


#pragma once

#include "Character/GameCharacterEnum.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameCharacterManager.generated.h"

class AGameCharacter;

UCLASS(Blueprintable)
class PINOCCHIO_SOUTRAGE_API AGameCharacterManager : public AActor
{
	GENERATED_BODY()
	
public:

	static TObjectPtr<AGameCharacterManager> Instance;


	UPROPERTY(EditAnywhere, Category = "Character instantiation")
	FName CharactersInstantiatedFolderPath;

	UPROPERTY(EditAnywhere, Category = "Character instantiation")
	TMap<EGameCharactersEnum, TSubclassOf<AGameCharacter>> GameCharactersEnumToClassDictionnary;


	UPROPERTY(VisibleAnywhere, Category = "Instantiated characters")
	TArray<TObjectPtr<AGameCharacter>> InstantiatedCharacters;

	UPROPERTY(VisibleAnywhere, Category = "Instantiated characters")
	TArray<TObjectPtr<AGameCharacter>> PlayerCharacters; // In case of multiplayer we do a list

	UPROPERTY(VisibleAnywhere, Category = "Instantiated characters")
	TArray<TObjectPtr<AGameCharacter>> EnemyCharacters;

public:	

	// Sets default values for this actor's properties
	AGameCharacterManager();

	// Called every frame
	virtual void Tick(float p_deltaTime) override;


	void InstantiateGameCharacter(EGameCharactersEnum p_gameCharacterType,
		FVector p_position = FVector(0, 0, 100), FRotator p_rotation = FQuat::MakeFromEuler(FVector(0, 0, 180)).Rotator(),
		bool p_isNewPlayerCharacter = false, TObjectPtr<APlayerController> p_playerController = nullptr
	);

protected:

	// Called before begin play, used for setting Instance variable
	virtual void PostInitializeComponents() override;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void BeginDestroy() override;

private:

	bool IsDictionnaryCorrectlySetted() const;

};