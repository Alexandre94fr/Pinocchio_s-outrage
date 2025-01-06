// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

class UInputAction;
class UEnhancedPlayerInput;
class UInputMappingContext;

#include "InputActionValue.h"

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerInputsManager.generated.h"

#pragma region Declaring input dynamic multicast delegates

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInteraction);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMovement, FVector2f, p_normalizedDirection);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPause);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUsingBasicCapacity1);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUsingBasicCapacity2);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUsingBasicCapacity3);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUsingSpecialCapacity1);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUsingSpecialCapacity2);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUsingSpecialCapacity3);
#pragma endregion

/**
 * 
 */
UCLASS()
class PINOCCHIO_SOUTRAGE_API APlayerInputsManager : public APlayerController
{
	GENERATED_BODY()

    #pragma region -= Variables =-

public:

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Debugging")
    bool IsDebuggingInputsOn = true;

    #pragma region - Creating input event variables -

	UPROPERTY(BlueprintAssignable, Category = "InputEvents")
	FOnInteraction OnInteractionEvent;

    UPROPERTY(BlueprintAssignable, Category = "InputEvents")
    FOnMovement OnMovementEvent;

    UPROPERTY(BlueprintAssignable, Category = "InputEvents")
    FOnPause OnPauseEvent;

    UPROPERTY(BlueprintAssignable, Category = "InputEvents")
    FOnUsingBasicCapacity1 OnUsingBasicCapacity1Event;

    UPROPERTY(BlueprintAssignable, Category = "InputEvents")
    FOnUsingBasicCapacity2 OnUsingBasicCapacity2Event;

    UPROPERTY(BlueprintAssignable, Category = "InputEvents")
    FOnUsingBasicCapacity3 OnUsingBasicCapacity3Event;

    UPROPERTY(BlueprintAssignable, Category = "InputEvents")
    FOnUsingSpecialCapacity1 OnUsingSpecialCapacity1Event;

    UPROPERTY(BlueprintAssignable, Category = "InputEvents")
    FOnUsingSpecialCapacity2 OnUsingSpecialCapacity2Event;

    UPROPERTY(BlueprintAssignable, Category = "InputEvents")
    FOnUsingSpecialCapacity3 OnUsingSpecialCapacity3Event;
    #pragma endregion

protected:

    #pragma region - External references - Input action, Input mapping context -

    #pragma region Input action

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ExternalReferences")
    UInputAction* IA_Interact;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ExternalReferences")
    UInputAction* IA_Move;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ExternalReferences")
    UInputAction* IA_Pause;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ExternalReferences")
    UInputAction* IA_UseBasicCapacity1;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ExternalReferences")
    UInputAction* IA_UseBasicCapacity2;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ExternalReferences")
    UInputAction* IA_UseBasicCapacity3;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ExternalReferences")
    UInputAction* IA_UseSpecialCapacity1;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ExternalReferences")
    UInputAction* IA_UseSpecialCapacity2;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ExternalReferences")
    UInputAction* IA_UseSpecialCapacity3;
    #pragma endregion

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ExternalReferences")
    UInputMappingContext* IMC_Default;
    #pragma endregion

#pragma endregion

    #pragma region -= Methods =-

public:

    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override;

protected:

    // Method called by the Input Actions
    void Interact();

    void Move(const FInputActionValue& p_inputActionValue);

    void Pause();

    void UsingBasicCapacity1();
    void UsingBasicCapacity2();
    void UsingBasicCapacity3();

    void UsingSpecialCapacity1();
    void UsingSpecialCapacity2();
    void UsingSpecialCapacity3();

private:

    bool IsDebuggingOn();
#pragma endregion
};