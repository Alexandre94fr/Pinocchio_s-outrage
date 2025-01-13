// Made by Alexandre RICHARD. GitHub link : https://github.com/Alexandre94fr/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameCharacter.generated.h"

UENUM(BlueprintType)
enum class ECharactersEnum : uint8
{
	Pinocchio,
	Pawn,
	Clown
};

UCLASS()
class PINOCCHIO_SOUTRAGE_API AGameCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGameCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float p_deltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* p_playerInputComponent) override;

};