// Made by Alexandre RICHARD. GitHub link : https://github.com/Alexandre94fr/

#include "PlayerInputs/PlayerInputsManager.h"

#include "ExternalTools/MessageDebugger.h"

#include "GameFramework/Pawn.h"
#include "GameFramework/Character.h"
#include "Character/IGameCharacterInterface.h"
#include "Character/GameCharacter.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Character/GameCharacterManager.h"


void APlayerInputsManager::BeginPlay()
{
	Super::BeginPlay();

	// Verifying that the context and the controller of the player exists
	if (IMC_Default && GetLocalPlayer())
	{
		// Get the EnhancedInputLocalPlayerSubsystem
		if (TObjectPtr<UEnhancedInputLocalPlayerSubsystem> enhancedInputLocalPlayerSubsystem = GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
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

		enhancedInputComponent->BindAction(IA_TargetEnemy, ETriggerEvent::Started, this, &APlayerInputsManager::ChangeTargetedEnemy);
		enhancedInputComponent->BindAction(IA_TargetEnemy, ETriggerEvent::Triggered, this, &APlayerInputsManager::TargetEnemy);

		enhancedInputComponent->BindAction(IA_UseBasicCapacity1, ETriggerEvent::Started, this, &APlayerInputsManager::UsingBasicCapacity1);
		enhancedInputComponent->BindAction(IA_UseBasicCapacity2, ETriggerEvent::Started, this, &APlayerInputsManager::UsingBasicCapacity2);
		enhancedInputComponent->BindAction(IA_UseBasicCapacity3, ETriggerEvent::Started, this, &APlayerInputsManager::UsingBasicCapacity3);

		enhancedInputComponent->BindAction(IA_UseSpecialCapacity1, ETriggerEvent::Started, this, &APlayerInputsManager::UsingSpecialCapacity1);
		enhancedInputComponent->BindAction(IA_UseSpecialCapacity2, ETriggerEvent::Started, this, &APlayerInputsManager::UsingSpecialCapacity2);
		enhancedInputComponent->BindAction(IA_UseSpecialCapacity3, ETriggerEvent::Started, this, &APlayerInputsManager::UsingSpecialCapacity3);

		enhancedInputComponent->BindAction(IA_Pause, ETriggerEvent::Started, this, &APlayerInputsManager::Pause);
	}
}

bool APlayerInputsManager::IsDebuggingOn() const
{
	// NOTE : If we don't use the 'IsDebuggingInputsOn' directly
	//	      it's because we don't know if we will use or not another variable like that.
	//        So this method will avoid having to change manually every 'if (IsDebuggingInputsOn)'.

	if (IsDebuggingInputsOn)
		return true;

	return false;
}

#pragma region Action methods

// NOTE : Each of the following methods are called when the player triggers the right event, 
//		  that means you should put in those methods things you want to do no matter what the ones who will subscribe to it (SFX, Sounds, etc...)

void APlayerInputsManager::Interact()
{
	if (IsDebuggingOn())
		MessageDebugger::MessageOnScreen(-1, "Interact");

	// Get the character currently controlled by the player 
	// (Possible upgrades to do : Cash this into a variable, witch is updated every new game start) 

	TScriptInterface<IGameCharacterInterface> controlledIGameCharacter = nullptr;

	if (GetControlledIGameCharacter(controlledIGameCharacter))
	{
		controlledIGameCharacter->Interact();
	}
	
	if (AGameCharacterManager::Instance == nullptr)
	{
		MessageDebugger::ErrorOnScreen(-1, TEXT("AGameCharacterManager::Instance == nullptr"));
		return;
	}

	AGameCharacterManager::Instance->InstantiateGameCharacter(EGameCharactersEnum::Pawn);
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

	TScriptInterface<IGameCharacterInterface> controlledIGameCharacter = nullptr;

	if (GetControlledIGameCharacter(controlledIGameCharacter))
	{
		controlledIGameCharacter->Move(normalizedDirection);
	}
}

void APlayerInputsManager::ChangeTargetedEnemy()
{
	// Debugging
	if (IsDebuggingOn())
		MessageDebugger::MessageOnScreen(-1, "ChangeTargetedEnemy");

	// Calling GameCharacter's method
	TScriptInterface<IGameCharacterInterface> controlledIGameCharacter = nullptr;

	if (GetControlledIGameCharacter(controlledIGameCharacter))
	{
		controlledIGameCharacter->ChangeTargetedEnemy();
	}
}

void APlayerInputsManager::TargetEnemy()
{
	if (IsDebuggingOn())
	{
		GEngine->RemoveOnScreenDebugMessage(3);

		MessageDebugger::MessageOnScreen(3, "TargetEnemy");
	}
	
	TScriptInterface<IGameCharacterInterface> controlledIGameCharacter = nullptr;

	if (GetControlledIGameCharacter(controlledIGameCharacter))
	{
		controlledIGameCharacter->TargetEnemy();
	}
}

void APlayerInputsManager::UsingBasicCapacity1()
{
	if (IsDebuggingOn())
		MessageDebugger::MessageOnScreen(-1, "UsingBasicCapacity1");

	TScriptInterface<IGameCharacterInterface> controlledIGameCharacter = nullptr;

	if (GetControlledIGameCharacter(controlledIGameCharacter))
	{
		controlledIGameCharacter->UseBasicCapacity1();
	}
}

void APlayerInputsManager::UsingBasicCapacity2()
{
	if (IsDebuggingOn())
		MessageDebugger::MessageOnScreen(-1, "UsingBasicCapacity2");

	TScriptInterface<IGameCharacterInterface> controlledIGameCharacter = nullptr;

	if (GetControlledIGameCharacter(controlledIGameCharacter))
	{
		controlledIGameCharacter->UseBasicCapacity2();
	}
}

void APlayerInputsManager::UsingBasicCapacity3()
{
	if (IsDebuggingOn())
		MessageDebugger::MessageOnScreen(-1, "UsingBasicCapacity3");

	TScriptInterface<IGameCharacterInterface> controlledIGameCharacter = nullptr;

	if (GetControlledIGameCharacter(controlledIGameCharacter))
	{
		controlledIGameCharacter->UseBasicCapacity3();
	}
}

void APlayerInputsManager::UsingSpecialCapacity1()
{
	if (IsDebuggingOn())
		MessageDebugger::MessageOnScreen(-1, "UsingSpecialCapacity1");

	TScriptInterface<IGameCharacterInterface> controlledIGameCharacter = nullptr;

	if (GetControlledIGameCharacter(controlledIGameCharacter))
	{
		controlledIGameCharacter->UseSpecialCapacity1();
	}
}

void APlayerInputsManager::UsingSpecialCapacity2()
{
	if (IsDebuggingOn())
		MessageDebugger::MessageOnScreen(-1, "UsingSpecialCapacity2");

	TScriptInterface<IGameCharacterInterface> controlledIGameCharacter = nullptr;

	if (GetControlledIGameCharacter(controlledIGameCharacter))
	{
		controlledIGameCharacter->UseSpecialCapacity2();
	}
}

void APlayerInputsManager::UsingSpecialCapacity3()
{
	if (IsDebuggingOn())
		MessageDebugger::MessageOnScreen(-1, "UsingSpecialCapacity3");

	TScriptInterface<IGameCharacterInterface> controlledIGameCharacter = nullptr;

	if (GetControlledIGameCharacter(controlledIGameCharacter))
	{
		controlledIGameCharacter->UseSpecialCapacity3();
	}
}

void APlayerInputsManager::Pause()
{
	if (IsDebuggingOn())
		MessageDebugger::MessageOnScreen(-1, "Pause");

	TScriptInterface<IGameCharacterInterface> controlledIGameCharacter = nullptr;

	if (GetControlledIGameCharacter(controlledIGameCharacter))
	{
		controlledIGameCharacter->Pause();
	}
}
#pragma endregion

bool APlayerInputsManager::GetControlledIGameCharacter(TScriptInterface<IGameCharacterInterface>& p_iGameCharacter)
{
	if (TObjectPtr<APawn> controlledPawn = GetPawn())
	{
		if (controlledPawn->Implements<UGameCharacterInterface>())
		{
			p_iGameCharacter.SetInterface(Cast<IGameCharacterInterface>(controlledPawn));
			p_iGameCharacter.SetObject(controlledPawn);

			return true;
		}
	}

	return false;
}