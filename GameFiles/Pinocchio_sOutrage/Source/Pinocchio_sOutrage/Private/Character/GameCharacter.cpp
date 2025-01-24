// Made by Alexandre RICHARD. GitHub link : https://github.com/Alexandre94fr/


#include "Character/GameCharacter.h"

#include "ExternalTools/MessageDebugger.h"

#include <Kismet/GameplayStatics.h>

// Sets default values
AGameCharacter::AGameCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AGameCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	GameCharacterManagerInstance = AGameCharacterManager::Instance;

	PlayerCharacters = &GameCharacterManagerInstance->PlayerCharacters;
	EnemyCharacters = &GameCharacterManagerInstance->EnemyCharacters;

	DoesVariablesCorrectlySetted();
}


// Called every frame
void AGameCharacter::Tick(float p_deltaTime)
{
	Super::Tick(p_deltaTime);

	UpdateOrientation(NormalizedDirectionToTarget);
}

#pragma region -= Debugging methods =-

bool AGameCharacter::DoesVariablesCorrectlySetted() const
{
	if (!CharacterStatistics)
	{
		MessageDebugger::ErrorOnScreen(-1, 
			FString::Printf(TEXT("%s's CharacterStatistics pointer is null. That can cause a crash, please give it a value. (Settable insind the Blueprint class) \nTHE GAME IS PAUSED."),
				*this->GetName())
		);
		
		UGameplayStatics::SetGamePaused(GetWorld(), true);

		return false;
	}

	return true;
}

bool AGameCharacter::IsDebugModeEnable() const
{
	if (!DoesDevelopperEnabledDebugMode)
		return false;

	// Other conditions here :

	return true;
}
#pragma endregion

#pragma region -= Action methods =-

void AGameCharacter::Interact()
{
	if (IsDebugModeEnable())
		MessageDebugger::MessageOnScreen(-1, FString::Printf(TEXT("Interact from %s class"), *this->GetClass()->GetName()));
}

void AGameCharacter::Move(const FVector2D p_normalizedDirection)
{
	// Debugging
	if (IsDebugModeEnable())
	{
		GEngine->RemoveOnScreenDebugMessage(2);

		MessageDebugger::MessageOnScreen(2,
			FString::Printf(TEXT("Mouvement direction : %.2f x, %.2f y from %s class"),
				p_normalizedDirection.X,
				p_normalizedDirection.Y,
				*this->GetClass()->GetName()
			)
		);
	}

	// Moving
	AddMovementInput(FVector(p_normalizedDirection.X, p_normalizedDirection.Y, 0), CharacterStatistics->MovementSpeed);
}

void AGameCharacter::ChangeTargetedEnemy()
{
	if (IsDebugModeEnable())
		MessageDebugger::MessageOnScreen(-1, FString::Printf(TEXT("ChangeTargetedEnemy from %s class"), *this->GetClass()->GetName()));

	IsAbleToLockNewEnemy = true;
}

void AGameCharacter::TargetEnemy()
{
	// Debugging
	if (IsDebugModeEnable())
	{
		GEngine->RemoveOnScreenDebugMessage(4);

		MessageDebugger::MessageOnScreen(4,
			FString::Printf(TEXT("TargetEnemy from %s class"),
				*this->GetClass()->GetName()
			)
		);
	}

	if (IsAbleToLockNewEnemy)
	{
		TargettedGameCharacter = GetClosestEnemyGameCharacter();

		IsAbleToLockNewEnemy = false;
	}
	
	NormalizedDirectionToTarget = GetNormalizedDirectionToTarget(TargettedGameCharacter);
}

void AGameCharacter::UseBasicCapacity1()
{
	if (IsDebugModeEnable())
		MessageDebugger::MessageOnScreen(-1, FString::Printf(TEXT("UseBasicCapacity1 from %s class"), *this->GetClass()->GetName()));
}

void AGameCharacter::UseBasicCapacity2()
{
	if (IsDebugModeEnable())
		MessageDebugger::MessageOnScreen(-1, FString::Printf(TEXT("UseBasicCapacity2 from %s class"), *this->GetClass()->GetName()));
}

void AGameCharacter::UseBasicCapacity3()
{
	if (IsDebugModeEnable())
		MessageDebugger::MessageOnScreen(-1, FString::Printf(TEXT("UseBasicCapacity3 from %s class"), *this->GetClass()->GetName()));
}

void AGameCharacter::UseSpecialCapacity1()
{
	if (IsDebugModeEnable())
		MessageDebugger::MessageOnScreen(-1, FString::Printf(TEXT("UseSpecialCapacity1 from %s class"), *this->GetClass()->GetName()));
}

void AGameCharacter::UseSpecialCapacity2()
{
	if (IsDebugModeEnable())
		MessageDebugger::MessageOnScreen(-1, FString::Printf(TEXT("UseSpecialCapacity2 from %s class"), *this->GetClass()->GetName()));
}

void AGameCharacter::UseSpecialCapacity3()
{
	if (IsDebugModeEnable())
		MessageDebugger::MessageOnScreen(-1, FString::Printf(TEXT("UseSpecialCapacity3 from %s class"), *this->GetClass()->GetName()));
}

void AGameCharacter::Pause()
{
	if (IsDebugModeEnable())
		MessageDebugger::MessageOnScreen(-1, FString::Printf(TEXT("Pause from %s class"), *this->GetClass()->GetName()));
}
#pragma endregion

#pragma region -= World reading methods =-

/// <returns> Return the closest character from this character and that is visible (in vision of the character).
/// <para> That means it can returns nullptr, so make sure to check the value before using it. </para> </returns>
TObjectPtr<AGameCharacter> AGameCharacter::GetClosestEnemyGameCharacter()
{
	// Result
	TObjectPtr<AGameCharacter> closestCharacter = nullptr;

	FVector actualGameCharacterLocation = GetActorLocation();

	float minimalDistance = 999999; // TODO : Replace this with a value in the CharacterDataAsset nammed TragetingEnemyRange (you will need to create one first)

	// Getting the correct list of Characters to check
	TArray<TObjectPtr<AGameCharacter>>* charactersToCheck = nullptr;

	TObjectPtr<AGameCharacter> otherGameCharacter;
	FVector otherGameCharacterLocation;

	if (IsPlayerControlled())
	{
		charactersToCheck = EnemyCharacters;
	}
	else 
	{
		charactersToCheck = PlayerCharacters;
	}

	if (charactersToCheck->Num() <= 0)
	{
		if (IsDebugModeEnable())
			MessageDebugger::MessageOnScreen(-1, TEXT("The list 'charactersToCheck' does not contains any character."), 0.01f);

		return nullptr;
	}

	for (int i = 0; i < charactersToCheck->Num(); i++)
	{
		// Caching other game character
		otherGameCharacter = (*charactersToCheck)[i];

		if (otherGameCharacter == this)
			continue;

		// Compute distance
		otherGameCharacterLocation = otherGameCharacter->GetActorLocation();

		float currentDistance = FVector::Distance(otherGameCharacterLocation, GetActorLocation());

		if (currentDistance > minimalDistance)
			continue;

		// Check if there is an obstacle between the two characters
		FHitResult hitResult;
		FCollisionQueryParams collisionQueryParams;
		collisionQueryParams.AddIgnoredActor(this); // Ignore self in the trace

		// Raycasting between current game character and other game character
		if (GetWorld()->LineTraceSingleByChannel(hitResult, actualGameCharacterLocation, otherGameCharacterLocation, ECollisionChannel::ECC_MAX, collisionQueryParams))
		{
			// Check if the collided object is the other game character
			if (hitResult.GetActor() == otherGameCharacter)
			{
				minimalDistance = currentDistance;
				closestCharacter = otherGameCharacter;
			}
		}

		if (IsDebugModeEnable())
			DrawDebugLine(GetWorld(), actualGameCharacterLocation, otherGameCharacterLocation, FColor::Blue, false, 0.1f);
	}

	if (IsDebugModeEnable() && closestCharacter != nullptr)
		MessageDebugger::CustomMessageOnScreen(-1, FString::Printf(TEXT("The closest character is %s"), *closestCharacter->GetClass()->GetName()), FColor::Green, 0.01f);

	return closestCharacter;
}

FVector AGameCharacter::GetNormalizedDirectionToTarget(TObjectPtr<AGameCharacter> p_gameCharacter)
{
	// If 'p_gameCharacter' we return the last NormalizedDirectionToTarget values
	if (!p_gameCharacter)
		return NormalizedDirectionToTarget;

	// Compute the raw direction between the target and us, and normalized it
	FVector normalizedDirectionToTarget = (p_gameCharacter->GetActorLocation() - GetActorLocation()).GetSafeNormal();

	if (IsDebugModeEnable())
	{
		GEngine->RemoveOnScreenDebugMessage(5);

		MessageDebugger::MessageOnScreen(5, FString::Printf(TEXT("Direction between '%s', and '%s' : %s"),
			*this->GetName(),
			*p_gameCharacter->GetName(),
			*normalizedDirectionToTarget.ToString()
		));
	}

	return normalizedDirectionToTarget;
}

void AGameCharacter::UpdateOrientation(FVector p_normalizedDirectionToTarget)
{
	// Convert the FVector p_normalizedDirectionToTarget into a FRotator to change us rotation
	SetActorRotation(p_normalizedDirectionToTarget.Rotation());
}
#pragma endregion