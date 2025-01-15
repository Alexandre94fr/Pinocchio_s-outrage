// Made by Alexandre RICHARD. GitHub link : https://github.com/Alexandre94fr/

#include "PlayerInputs/PlayerInputsManager.h"

#include "ExternalTools/MessageDebugger.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Character.h"
#include <Character/GameCharacter.h>

#include "EnhancedInputComponent.h"
#include <EnhancedInputSubsystems.h>


void APlayerInputsManager::BeginPlay()
{
	Super::BeginPlay();

	// Verifying that the context and the controller of the player exists
	if (IMC_Default && GetLocalPlayer())
	{
		// Get the EnhancedInputLocalPlayerSubsystem Récupérez le sous-système d'input amélioré
		if (UEnhancedInputLocalPlayerSubsystem* enhancedInputLocalPlayerSubsystem = GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			// Adding the mapping context, 0 is the priority order
			enhancedInputLocalPlayerSubsystem->AddMappingContext(IMC_Default, 0);

			MessageDebugger::CustomMessageOnScreen(-1, "InputMappingContext added successfully!", FColor::Green);
		}
		else
		{
			MessageDebugger::ErrorOnScreen(-1, "EnhancedInputLocalPlayerSubsystem not found!");
		}
	}
	else
	{
		MessageDebugger::ErrorOnScreen(-1, "InputMappingContext or LocalPlayer missing!");
	}
}

void APlayerInputsManager::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (UEnhancedInputComponent* enhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		if (IsDebuggingOn()) 
			MessageDebugger::CustomMessageOnScreen(-1, "Successfully getting enhaved input component.", FColor::Green);

		// Linking action to local methods
		enhancedInputComponent->BindAction(IA_Interact, ETriggerEvent::Started, this, &APlayerInputsManager::Interact);

		enhancedInputComponent->BindAction(IA_Move, ETriggerEvent::Triggered, this, &APlayerInputsManager::Move);

		enhancedInputComponent->BindAction(IA_Pause, ETriggerEvent::Started, this, &APlayerInputsManager::Pause);

		enhancedInputComponent->BindAction(IA_UseBasicCapacity1, ETriggerEvent::Started, this, &APlayerInputsManager::UsingBasicCapacity1);
		enhancedInputComponent->BindAction(IA_UseBasicCapacity2, ETriggerEvent::Started, this, &APlayerInputsManager::UsingBasicCapacity2);
		enhancedInputComponent->BindAction(IA_UseBasicCapacity3, ETriggerEvent::Started, this, &APlayerInputsManager::UsingBasicCapacity3);

		enhancedInputComponent->BindAction(IA_UseSpecialCapacity1, ETriggerEvent::Started, this, &APlayerInputsManager::UsingSpecialCapacity1);
		enhancedInputComponent->BindAction(IA_UseSpecialCapacity2, ETriggerEvent::Started, this, &APlayerInputsManager::UsingSpecialCapacity2);
		enhancedInputComponent->BindAction(IA_UseSpecialCapacity3, ETriggerEvent::Started, this, &APlayerInputsManager::UsingSpecialCapacity3);
	}
}

bool APlayerInputsManager::IsDebuggingOn()
{
	// NOTE : If we don't use the 'IsDebuggingInputsOn' directly
	//	      it's because we don't know if we will use or not another variable like that.
	//        So this method will avoid having to change manually every 'if (IsDebuggingInputsOn)'.

	if (IsDebuggingInputsOn)
		return true;

	return false;
}

// NOTE : Each of the following methods are called when the player triggers the right event, 
//		  that means you should put in those methods things you want to do no matter what the ones who will subscribe to it (SFX, Sounds, etc...)

void APlayerInputsManager::Interact()
{
	if (IsDebuggingOn())
		MessageDebugger::MessageOnScreen(-1, "Interact");

	TriggerAction(EPlayerActionType::Interact);
}

void APlayerInputsManager::Move(const FInputActionValue& p_inputActionValue)
{
	FVector2D normalizedDirection = p_inputActionValue.Get<FVector2D>();

	if (IsDebuggingOn()) 
	{
		GEngine->RemoveOnScreenDebugMessage(1);

		MessageDebugger::MessageOnScreen(1, 
			FString::Printf(TEXT("Mouvement direction : %.2f x, %.2f y"), normalizedDirection.X, normalizedDirection.Y)
		);
	}

	TriggerAction(EPlayerActionType::Move);
}

void APlayerInputsManager::Pause()
{
	if (IsDebuggingOn())
		MessageDebugger::MessageOnScreen(-1, "Pause");

	TriggerAction(EPlayerActionType::Pause);
}

void APlayerInputsManager::UsingBasicCapacity1()
{
	if (IsDebuggingOn())
		MessageDebugger::MessageOnScreen(-1, "UsingBasicCapacity1");

	TriggerAction(EPlayerActionType::BasicCapacity1);
}

void APlayerInputsManager::UsingBasicCapacity2()
{
	if (IsDebuggingOn())
		MessageDebugger::MessageOnScreen(-1, "UsingBasicCapacity2");

	TriggerAction(EPlayerActionType::BasicCapacity2);
}

void APlayerInputsManager::UsingBasicCapacity3()
{
	if (IsDebuggingOn())
		MessageDebugger::MessageOnScreen(-1, "UsingBasicCapacity3");

	TriggerAction(EPlayerActionType::BasicCapacity3);
}

void APlayerInputsManager::UsingSpecialCapacity1()
{
	if (IsDebuggingOn())
		MessageDebugger::MessageOnScreen(-1, "UsingSpecialCapacity1");

	TriggerAction(EPlayerActionType::SpecialCapacity1);
}

void APlayerInputsManager::UsingSpecialCapacity2()
{
	if (IsDebuggingOn())
		MessageDebugger::MessageOnScreen(-1, "UsingSpecialCapacity2");

	TriggerAction(EPlayerActionType::SpecialCapacity2);
}

void APlayerInputsManager::UsingSpecialCapacity3()
{
	if (IsDebuggingOn())
		MessageDebugger::MessageOnScreen(-1, "UsingSpecialCapacity3");

	TriggerAction(EPlayerActionType::SpecialCapacity3);
}

void APlayerInputsManager::TriggerAction(EPlayerActionType p_playerActionType)
{
	// Get the character currently controlled by the player 
	// (Possible upgrades to do : Cash this into a variable, witch is updated every new game start) 

	if (APawn* controlledPawn = GetPawn())
	{
		if (AGameCharacter* controlledGameCharacter = Cast<AGameCharacter>(controlledPawn))
		{
			// EXEMPLE CODE
			//if (IGameCharacterInterface* GameCharacter = Cast<IGameCharacterInterface>(controlledCharacter))
			//{
			//	GameCharacter->Execute_UseAbility(GameCharacter, p_playerActionType);
			//}
		}
	}
}