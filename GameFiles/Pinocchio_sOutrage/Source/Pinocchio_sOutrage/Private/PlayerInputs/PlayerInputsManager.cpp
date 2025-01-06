// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerInputs/PlayerInputsManager.h"

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

			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("InputMappingContext added successfully!"));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("EnhancedInputLocalPlayerSubsystem not found!"));
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("InputMappingContext or LocalPlayer missing!"));
	}
}

void APlayerInputsManager::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (UEnhancedInputComponent* enhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		if (IsDebuggingOn()) 
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Successfully getting enhaved input component."));

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
	if (GEngine && IsDebuggingInputsOn)
		return true;

	return false;
}

// NOTE : Each of the following methods are called when the player triggers the right event, 
//		  that means you should put in those methods things you want to do no matter what the ones who will subscribe to it (SFX, Sounds, etc...)

void APlayerInputsManager::Interact()
{
	if (IsDebuggingOn())
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White, TEXT("Interact"));
}

void APlayerInputsManager::Move(const FInputActionValue& p_inputActionValue)
{
	FVector2D normalizedDirection = p_inputActionValue.Get<FVector2D>();

	if (IsDebuggingOn()) 
	{
		GEngine->RemoveOnScreenDebugMessage(1);

		GEngine->AddOnScreenDebugMessage(1, 5.0f, FColor::White,
			FString::Printf(TEXT("Mouvement direction : %f x, %f y"), normalizedDirection.X, normalizedDirection.Y));
	}
}

void APlayerInputsManager::Pause()
{
	if (IsDebuggingOn())
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White, TEXT("Pause"));
}

void APlayerInputsManager::UsingBasicCapacity1()
{
	if (IsDebuggingOn())
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White, TEXT("UsingBasicCapacity1"));
}

void APlayerInputsManager::UsingBasicCapacity2()
{
	if (IsDebuggingOn())
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White, TEXT("UsingBasicCapacity2"));
}

void APlayerInputsManager::UsingBasicCapacity3()
{
	if (IsDebuggingOn())
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White, TEXT("UsingBasicCapacity3"));
}

void APlayerInputsManager::UsingSpecialCapacity1()
{
	if (IsDebuggingOn())
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White, TEXT("UsingSpecialCapacity1"));
}

void APlayerInputsManager::UsingSpecialCapacity2()
{
	if (IsDebuggingOn())
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White, TEXT("UsingSpecialCapacity2"));
}

void APlayerInputsManager::UsingSpecialCapacity3()
{
	if (IsDebuggingOn())
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White, TEXT("UsingSpecialCapacity3"));
}