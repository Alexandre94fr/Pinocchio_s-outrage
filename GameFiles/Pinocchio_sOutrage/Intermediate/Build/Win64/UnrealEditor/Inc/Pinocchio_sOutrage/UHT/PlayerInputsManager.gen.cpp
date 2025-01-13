// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pinocchio_sOutrage/Public/PlayerInputs/PlayerInputsManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInputsManager() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_APlayerInputsManager();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_APlayerInputsManager_NoRegister();
PINOCCHIO_SOUTRAGE_API UEnum* Z_Construct_UEnum_Pinocchio_sOutrage_EPlayerActionType();
PINOCCHIO_SOUTRAGE_API UFunction* Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnInteraction__DelegateSignature();
PINOCCHIO_SOUTRAGE_API UFunction* Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnMovement__DelegateSignature();
PINOCCHIO_SOUTRAGE_API UFunction* Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnPause__DelegateSignature();
PINOCCHIO_SOUTRAGE_API UFunction* Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingBasicCapacity1__DelegateSignature();
PINOCCHIO_SOUTRAGE_API UFunction* Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingBasicCapacity2__DelegateSignature();
PINOCCHIO_SOUTRAGE_API UFunction* Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingBasicCapacity3__DelegateSignature();
PINOCCHIO_SOUTRAGE_API UFunction* Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingSpecialCapacity1__DelegateSignature();
PINOCCHIO_SOUTRAGE_API UFunction* Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingSpecialCapacity2__DelegateSignature();
PINOCCHIO_SOUTRAGE_API UFunction* Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingSpecialCapacity3__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Pinocchio_sOutrage();
// End Cross Module References

// Begin Delegate FOnInteraction
struct Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnInteraction__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnInteraction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage, nullptr, "OnInteraction__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnInteraction__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnInteraction__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnInteraction__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnInteraction__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInteraction_DelegateWrapper(const FMulticastScriptDelegate& OnInteraction)
{
	OnInteraction.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnInteraction

// Begin Delegate FOnMovement
struct Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnMovement__DelegateSignature_Statics
{
	struct _Script_Pinocchio_sOutrage_eventOnMovement_Parms
	{
		FVector2f p_normalizedDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_p_normalizedDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnMovement__DelegateSignature_Statics::NewProp_p_normalizedDirection = { "p_normalizedDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Pinocchio_sOutrage_eventOnMovement_Parms, p_normalizedDirection), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnMovement__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnMovement__DelegateSignature_Statics::NewProp_p_normalizedDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnMovement__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnMovement__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage, nullptr, "OnMovement__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnMovement__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnMovement__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnMovement__DelegateSignature_Statics::_Script_Pinocchio_sOutrage_eventOnMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnMovement__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnMovement__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnMovement__DelegateSignature_Statics::_Script_Pinocchio_sOutrage_eventOnMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnMovement__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnMovement__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMovement_DelegateWrapper(const FMulticastScriptDelegate& OnMovement, FVector2f p_normalizedDirection)
{
	struct _Script_Pinocchio_sOutrage_eventOnMovement_Parms
	{
		FVector2f p_normalizedDirection;
	};
	_Script_Pinocchio_sOutrage_eventOnMovement_Parms Parms;
	Parms.p_normalizedDirection=p_normalizedDirection;
	OnMovement.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMovement

// Begin Delegate FOnPause
struct Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnPause__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnPause__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage, nullptr, "OnPause__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnPause__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnPause__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnPause__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnPause__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPause_DelegateWrapper(const FMulticastScriptDelegate& OnPause)
{
	OnPause.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnPause

// Begin Delegate FOnUsingBasicCapacity1
struct Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingBasicCapacity1__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingBasicCapacity1__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage, nullptr, "OnUsingBasicCapacity1__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingBasicCapacity1__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingBasicCapacity1__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingBasicCapacity1__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingBasicCapacity1__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUsingBasicCapacity1_DelegateWrapper(const FMulticastScriptDelegate& OnUsingBasicCapacity1)
{
	OnUsingBasicCapacity1.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnUsingBasicCapacity1

// Begin Delegate FOnUsingBasicCapacity2
struct Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingBasicCapacity2__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingBasicCapacity2__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage, nullptr, "OnUsingBasicCapacity2__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingBasicCapacity2__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingBasicCapacity2__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingBasicCapacity2__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingBasicCapacity2__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUsingBasicCapacity2_DelegateWrapper(const FMulticastScriptDelegate& OnUsingBasicCapacity2)
{
	OnUsingBasicCapacity2.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnUsingBasicCapacity2

// Begin Delegate FOnUsingBasicCapacity3
struct Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingBasicCapacity3__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingBasicCapacity3__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage, nullptr, "OnUsingBasicCapacity3__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingBasicCapacity3__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingBasicCapacity3__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingBasicCapacity3__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingBasicCapacity3__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUsingBasicCapacity3_DelegateWrapper(const FMulticastScriptDelegate& OnUsingBasicCapacity3)
{
	OnUsingBasicCapacity3.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnUsingBasicCapacity3

// Begin Delegate FOnUsingSpecialCapacity1
struct Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingSpecialCapacity1__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingSpecialCapacity1__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage, nullptr, "OnUsingSpecialCapacity1__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingSpecialCapacity1__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingSpecialCapacity1__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingSpecialCapacity1__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingSpecialCapacity1__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUsingSpecialCapacity1_DelegateWrapper(const FMulticastScriptDelegate& OnUsingSpecialCapacity1)
{
	OnUsingSpecialCapacity1.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnUsingSpecialCapacity1

// Begin Delegate FOnUsingSpecialCapacity2
struct Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingSpecialCapacity2__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingSpecialCapacity2__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage, nullptr, "OnUsingSpecialCapacity2__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingSpecialCapacity2__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingSpecialCapacity2__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingSpecialCapacity2__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingSpecialCapacity2__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUsingSpecialCapacity2_DelegateWrapper(const FMulticastScriptDelegate& OnUsingSpecialCapacity2)
{
	OnUsingSpecialCapacity2.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnUsingSpecialCapacity2

// Begin Delegate FOnUsingSpecialCapacity3
struct Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingSpecialCapacity3__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingSpecialCapacity3__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage, nullptr, "OnUsingSpecialCapacity3__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingSpecialCapacity3__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingSpecialCapacity3__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingSpecialCapacity3__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingSpecialCapacity3__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUsingSpecialCapacity3_DelegateWrapper(const FMulticastScriptDelegate& OnUsingSpecialCapacity3)
{
	OnUsingSpecialCapacity3.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnUsingSpecialCapacity3

// Begin Enum EPlayerActionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerActionType;
static UEnum* EPlayerActionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlayerActionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlayerActionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Pinocchio_sOutrage_EPlayerActionType, (UObject*)Z_Construct_UPackage__Script_Pinocchio_sOutrage(), TEXT("EPlayerActionType"));
	}
	return Z_Registration_Info_UEnum_EPlayerActionType.OuterSingleton;
}
template<> PINOCCHIO_SOUTRAGE_API UEnum* StaticEnum<EPlayerActionType>()
{
	return EPlayerActionType_StaticEnum();
}
struct Z_Construct_UEnum_Pinocchio_sOutrage_EPlayerActionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BasicCapacity1.Name", "EPlayerActionType::BasicCapacity1" },
		{ "BasicCapacity2.Name", "EPlayerActionType::BasicCapacity2" },
		{ "BasicCapacity3.Name", "EPlayerActionType::BasicCapacity3" },
		{ "BlueprintType", "true" },
		{ "Interact.Name", "EPlayerActionType::Interact" },
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
		{ "Move.Name", "EPlayerActionType::Move" },
		{ "Pause.Name", "EPlayerActionType::Pause" },
		{ "SpecialCapacity1.Name", "EPlayerActionType::SpecialCapacity1" },
		{ "SpecialCapacity2.Name", "EPlayerActionType::SpecialCapacity2" },
		{ "SpecialCapacity3.Name", "EPlayerActionType::SpecialCapacity3" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlayerActionType::Interact", (int64)EPlayerActionType::Interact },
		{ "EPlayerActionType::Move", (int64)EPlayerActionType::Move },
		{ "EPlayerActionType::BasicCapacity1", (int64)EPlayerActionType::BasicCapacity1 },
		{ "EPlayerActionType::BasicCapacity2", (int64)EPlayerActionType::BasicCapacity2 },
		{ "EPlayerActionType::BasicCapacity3", (int64)EPlayerActionType::BasicCapacity3 },
		{ "EPlayerActionType::SpecialCapacity1", (int64)EPlayerActionType::SpecialCapacity1 },
		{ "EPlayerActionType::SpecialCapacity2", (int64)EPlayerActionType::SpecialCapacity2 },
		{ "EPlayerActionType::SpecialCapacity3", (int64)EPlayerActionType::SpecialCapacity3 },
		{ "EPlayerActionType::Pause", (int64)EPlayerActionType::Pause },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Pinocchio_sOutrage_EPlayerActionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage,
	nullptr,
	"EPlayerActionType",
	"EPlayerActionType",
	Z_Construct_UEnum_Pinocchio_sOutrage_EPlayerActionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Pinocchio_sOutrage_EPlayerActionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Pinocchio_sOutrage_EPlayerActionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Pinocchio_sOutrage_EPlayerActionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Pinocchio_sOutrage_EPlayerActionType()
{
	if (!Z_Registration_Info_UEnum_EPlayerActionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerActionType.InnerSingleton, Z_Construct_UEnum_Pinocchio_sOutrage_EPlayerActionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlayerActionType.InnerSingleton;
}
// End Enum EPlayerActionType

// Begin Class APlayerInputsManager
void APlayerInputsManager::StaticRegisterNativesAPlayerInputsManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerInputsManager);
UClass* Z_Construct_UClass_APlayerInputsManager_NoRegister()
{
	return APlayerInputsManager::StaticClass();
}
struct Z_Construct_UClass_APlayerInputsManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerInputs/PlayerInputsManager.h" },
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsDebuggingInputsOn_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInteractionEvent_MetaData[] = {
		{ "Category", "InputEvents" },
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMovementEvent_MetaData[] = {
		{ "Category", "InputEvents" },
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPauseEvent_MetaData[] = {
		{ "Category", "InputEvents" },
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUsingBasicCapacity1Event_MetaData[] = {
		{ "Category", "InputEvents" },
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUsingBasicCapacity2Event_MetaData[] = {
		{ "Category", "InputEvents" },
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUsingBasicCapacity3Event_MetaData[] = {
		{ "Category", "InputEvents" },
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUsingSpecialCapacity1Event_MetaData[] = {
		{ "Category", "InputEvents" },
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUsingSpecialCapacity2Event_MetaData[] = {
		{ "Category", "InputEvents" },
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUsingSpecialCapacity3Event_MetaData[] = {
		{ "Category", "InputEvents" },
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Interact_MetaData[] = {
		{ "Category", "ExternalReferences" },
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Move_MetaData[] = {
		{ "Category", "ExternalReferences" },
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Pause_MetaData[] = {
		{ "Category", "ExternalReferences" },
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_UseBasicCapacity1_MetaData[] = {
		{ "Category", "ExternalReferences" },
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_UseBasicCapacity2_MetaData[] = {
		{ "Category", "ExternalReferences" },
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_UseBasicCapacity3_MetaData[] = {
		{ "Category", "ExternalReferences" },
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_UseSpecialCapacity1_MetaData[] = {
		{ "Category", "ExternalReferences" },
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_UseSpecialCapacity2_MetaData[] = {
		{ "Category", "ExternalReferences" },
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_UseSpecialCapacity3_MetaData[] = {
		{ "Category", "ExternalReferences" },
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMC_Default_MetaData[] = {
		{ "Category", "ExternalReferences" },
		{ "ModuleRelativePath", "Public/PlayerInputs/PlayerInputsManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsDebuggingInputsOn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDebuggingInputsOn;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractionEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMovementEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPauseEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUsingBasicCapacity1Event;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUsingBasicCapacity2Event;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUsingBasicCapacity3Event;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUsingSpecialCapacity1Event;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUsingSpecialCapacity2Event;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUsingSpecialCapacity3Event;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Interact;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Move;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Pause;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_UseBasicCapacity1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_UseBasicCapacity2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_UseBasicCapacity3;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_UseSpecialCapacity1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_UseSpecialCapacity2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_UseSpecialCapacity3;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IMC_Default;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerInputsManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_IsDebuggingInputsOn_SetBit(void* Obj)
{
	((APlayerInputsManager*)Obj)->IsDebuggingInputsOn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_IsDebuggingInputsOn = { "IsDebuggingInputsOn", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerInputsManager), &Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_IsDebuggingInputsOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsDebuggingInputsOn_MetaData), NewProp_IsDebuggingInputsOn_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_OnInteractionEvent = { "OnInteractionEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsManager, OnInteractionEvent), Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnInteraction__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInteractionEvent_MetaData), NewProp_OnInteractionEvent_MetaData) }; // 1921757718
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_OnMovementEvent = { "OnMovementEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsManager, OnMovementEvent), Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnMovement__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMovementEvent_MetaData), NewProp_OnMovementEvent_MetaData) }; // 2860084764
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_OnPauseEvent = { "OnPauseEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsManager, OnPauseEvent), Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnPause__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPauseEvent_MetaData), NewProp_OnPauseEvent_MetaData) }; // 3298266588
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_OnUsingBasicCapacity1Event = { "OnUsingBasicCapacity1Event", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsManager, OnUsingBasicCapacity1Event), Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingBasicCapacity1__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUsingBasicCapacity1Event_MetaData), NewProp_OnUsingBasicCapacity1Event_MetaData) }; // 427123609
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_OnUsingBasicCapacity2Event = { "OnUsingBasicCapacity2Event", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsManager, OnUsingBasicCapacity2Event), Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingBasicCapacity2__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUsingBasicCapacity2Event_MetaData), NewProp_OnUsingBasicCapacity2Event_MetaData) }; // 179433902
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_OnUsingBasicCapacity3Event = { "OnUsingBasicCapacity3Event", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsManager, OnUsingBasicCapacity3Event), Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingBasicCapacity3__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUsingBasicCapacity3Event_MetaData), NewProp_OnUsingBasicCapacity3Event_MetaData) }; // 1864924772
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_OnUsingSpecialCapacity1Event = { "OnUsingSpecialCapacity1Event", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsManager, OnUsingSpecialCapacity1Event), Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingSpecialCapacity1__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUsingSpecialCapacity1Event_MetaData), NewProp_OnUsingSpecialCapacity1Event_MetaData) }; // 3637779841
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_OnUsingSpecialCapacity2Event = { "OnUsingSpecialCapacity2Event", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsManager, OnUsingSpecialCapacity2Event), Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingSpecialCapacity2__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUsingSpecialCapacity2Event_MetaData), NewProp_OnUsingSpecialCapacity2Event_MetaData) }; // 3223311305
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_OnUsingSpecialCapacity3Event = { "OnUsingSpecialCapacity3Event", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsManager, OnUsingSpecialCapacity3Event), Z_Construct_UDelegateFunction_Pinocchio_sOutrage_OnUsingSpecialCapacity3__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUsingSpecialCapacity3Event_MetaData), NewProp_OnUsingSpecialCapacity3Event_MetaData) }; // 4138314322
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_IA_Interact = { "IA_Interact", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsManager, IA_Interact), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Interact_MetaData), NewProp_IA_Interact_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_IA_Move = { "IA_Move", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsManager, IA_Move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Move_MetaData), NewProp_IA_Move_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_IA_Pause = { "IA_Pause", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsManager, IA_Pause), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Pause_MetaData), NewProp_IA_Pause_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_IA_UseBasicCapacity1 = { "IA_UseBasicCapacity1", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsManager, IA_UseBasicCapacity1), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_UseBasicCapacity1_MetaData), NewProp_IA_UseBasicCapacity1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_IA_UseBasicCapacity2 = { "IA_UseBasicCapacity2", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsManager, IA_UseBasicCapacity2), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_UseBasicCapacity2_MetaData), NewProp_IA_UseBasicCapacity2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_IA_UseBasicCapacity3 = { "IA_UseBasicCapacity3", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsManager, IA_UseBasicCapacity3), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_UseBasicCapacity3_MetaData), NewProp_IA_UseBasicCapacity3_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_IA_UseSpecialCapacity1 = { "IA_UseSpecialCapacity1", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsManager, IA_UseSpecialCapacity1), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_UseSpecialCapacity1_MetaData), NewProp_IA_UseSpecialCapacity1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_IA_UseSpecialCapacity2 = { "IA_UseSpecialCapacity2", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsManager, IA_UseSpecialCapacity2), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_UseSpecialCapacity2_MetaData), NewProp_IA_UseSpecialCapacity2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_IA_UseSpecialCapacity3 = { "IA_UseSpecialCapacity3", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsManager, IA_UseSpecialCapacity3), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_UseSpecialCapacity3_MetaData), NewProp_IA_UseSpecialCapacity3_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_IMC_Default = { "IMC_Default", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInputsManager, IMC_Default), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMC_Default_MetaData), NewProp_IMC_Default_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerInputsManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_IsDebuggingInputsOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_OnInteractionEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_OnMovementEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_OnPauseEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_OnUsingBasicCapacity1Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_OnUsingBasicCapacity2Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_OnUsingBasicCapacity3Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_OnUsingSpecialCapacity1Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_OnUsingSpecialCapacity2Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_OnUsingSpecialCapacity3Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_IA_Interact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_IA_Move,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_IA_Pause,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_IA_UseBasicCapacity1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_IA_UseBasicCapacity2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_IA_UseBasicCapacity3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_IA_UseSpecialCapacity1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_IA_UseSpecialCapacity2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_IA_UseSpecialCapacity3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInputsManager_Statics::NewProp_IMC_Default,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerInputsManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerInputsManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerInputsManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerInputsManager_Statics::ClassParams = {
	&APlayerInputsManager::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlayerInputsManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerInputsManager_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerInputsManager_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerInputsManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerInputsManager()
{
	if (!Z_Registration_Info_UClass_APlayerInputsManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerInputsManager.OuterSingleton, Z_Construct_UClass_APlayerInputsManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerInputsManager.OuterSingleton;
}
template<> PINOCCHIO_SOUTRAGE_API UClass* StaticClass<APlayerInputsManager>()
{
	return APlayerInputsManager::StaticClass();
}
APlayerInputsManager::APlayerInputsManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerInputsManager);
APlayerInputsManager::~APlayerInputsManager() {}
// End Class APlayerInputsManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_PlayerInputs_PlayerInputsManager_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlayerActionType_StaticEnum, TEXT("EPlayerActionType"), &Z_Registration_Info_UEnum_EPlayerActionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1346979213U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerInputsManager, APlayerInputsManager::StaticClass, TEXT("APlayerInputsManager"), &Z_Registration_Info_UClass_APlayerInputsManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerInputsManager), 4195986563U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_PlayerInputs_PlayerInputsManager_h_2652135910(TEXT("/Script/Pinocchio_sOutrage"),
	Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_PlayerInputs_PlayerInputsManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_PlayerInputs_PlayerInputsManager_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_PlayerInputs_PlayerInputsManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_PlayerInputs_PlayerInputsManager_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
