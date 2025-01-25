// Made by Alexandre RICHARD. GitHub link : https://github.com/Alexandre94fr/


#pragma once

#include "InputActionValue.h"

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerInputsManager.generated.h"

class UInputAction;
class UEnhancedPlayerInput;
class UInputMappingContext;
class IGameCharacterInterface;

#pragma region Declaring input dynamic multicast delegates

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInteraction);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMovement, FVector2f, p_normalizedDirection);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTargetEnemy);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUsingBasicCapacity1);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUsingBasicCapacity2);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUsingBasicCapacity3);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUsingSpecialCapacity1);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUsingSpecialCapacity2);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUsingSpecialCapacity3);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPause);
#pragma endregion

UENUM(BlueprintType)
enum class EPlayerActionType : uint8
{
    Interact,
    Move,
    TargetEnemy,

    BasicCapacity1,
    BasicCapacity2,
    BasicCapacity3,
    SpecialCapacity1,
    SpecialCapacity2,
    SpecialCapacity3,

    Pause
};

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
    FOnTargetEnemy OnTargetEnemy;

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

    UPROPERTY(BlueprintAssignable, Category = "InputEvents")
    FOnPause OnPauseEvent;
    #pragma endregion

protected:

    #pragma region - External references - Input action, Input mapping context -

    #pragma region Input action

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ExternalReferences")
    TObjectPtr<UInputAction> IA_Interact;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ExternalReferences")
    TObjectPtr<UInputAction> IA_Move;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ExternalReferences")
    TObjectPtr<UInputAction> IA_TargetEnemy;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ExternalReferences")
    TObjectPtr<UInputAction> IA_UseBasicCapacity1;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ExternalReferences")
    TObjectPtr<UInputAction> IA_UseBasicCapacity2;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ExternalReferences")
    TObjectPtr<UInputAction> IA_UseBasicCapacity3;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ExternalReferences")
    TObjectPtr<UInputAction> IA_UseSpecialCapacity1;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ExternalReferences")
    TObjectPtr<UInputAction> IA_UseSpecialCapacity2;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ExternalReferences")
    TObjectPtr<UInputAction> IA_UseSpecialCapacity3;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ExternalReferences")
    TObjectPtr<UInputAction> IA_Pause;
    #pragma endregion
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ExternalReferences")
    TObjectPtr<UInputMappingContext> IMC_Default;
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

    void ChangeTargetedEnemy();
    void TargetEnemy();

    void UsingBasicCapacity1();
    void UsingBasicCapacity2();
    void UsingBasicCapacity3();

    void UsingSpecialCapacity1();
    void UsingSpecialCapacity2();
    void UsingSpecialCapacity3();

    void Pause();

private:

    bool IsDebuggingOn() const;
    bool GetControlledIGameCharacter(TScriptInterface<IGameCharacterInterface>& p_iGameCharacter);
#pragma endregion
};