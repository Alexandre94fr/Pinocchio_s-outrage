// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pinocchio_sOutrage/Public/Statistics/CapacityStatisticsDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapacityStatisticsDataAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_UCapacityStatisticsDataAsset();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_UCapacityStatisticsDataAsset_NoRegister();
PINOCCHIO_SOUTRAGE_API UEnum* Z_Construct_UEnum_Pinocchio_sOutrage_EPlayerActionType();
UPackage* Z_Construct_UPackage__Script_Pinocchio_sOutrage();
// End Cross Module References

// Begin Class UCapacityStatisticsDataAsset
void UCapacityStatisticsDataAsset::StaticRegisterNativesUCapacityStatisticsDataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCapacityStatisticsDataAsset);
UClass* Z_Construct_UClass_UCapacityStatisticsDataAsset_NoRegister()
{
	return UCapacityStatisticsDataAsset::StaticClass();
}
struct Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Statistics/CapacityStatisticsDataAsset.h" },
		{ "ModuleRelativePath", "Public/Statistics/CapacityStatisticsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Basic informations" },
		{ "ModuleRelativePath", "Public/Statistics/CapacityStatisticsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfSkillPointsRequiredToUnlock_MetaData[] = {
		{ "Category", "Basic informations" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Statistics/CapacityStatisticsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapacityType_MetaData[] = {
		{ "Category", "Basic informations" },
		{ "ModuleRelativePath", "Public/Statistics/CapacityStatisticsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Attack informations" },
		{ "ClampMax", "50" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Damage (Health Point)" },
		{ "ModuleRelativePath", "Public/Statistics/CapacityStatisticsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reach_MetaData[] = {
		{ "Category", "Attack informations" },
		{ "ClampMax", "25" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Statistics/CapacityStatisticsDataAsset.h" },
		{ "Units", "m" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmingTime_MetaData[] = {
		{ "Category", "Attack informations" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Statistics/CapacityStatisticsDataAsset.h" },
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvulnerabilityTime_MetaData[] = {
		{ "Category", "Attack informations" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Statistics/CapacityStatisticsDataAsset.h" },
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTimeLenght_MetaData[] = {
		{ "Category", "Attack informations" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Statistics/CapacityStatisticsDataAsset.h" },
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StunningTime_MetaData[] = {
		{ "Category", "Attack informations" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Statistics/CapacityStatisticsDataAsset.h" },
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfStunningTimeWhenSucceed_MetaData[] = {
		{ "Category", "Attack informations" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Statistics/CapacityStatisticsDataAsset.h" },
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfStunningTimeWhenFailed_MetaData[] = {
		{ "Category", "Attack informations" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Statistics/CapacityStatisticsDataAsset.h" },
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTime_MetaData[] = {
		{ "Category", "Attack informations" },
		{ "ClampMax", "15" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Statistics/CapacityStatisticsDataAsset.h" },
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Knockback_MetaData[] = {
		{ "Category", "Attack informations" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Statistics/CapacityStatisticsDataAsset.h" },
		{ "Units", "m" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapacityEffect_MetaData[] = {
		{ "Category", "Capacity effects" },
		{ "ModuleRelativePath", "Public/Statistics/CapacityStatisticsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryCapacityEffectWhenSucceed_MetaData[] = {
		{ "Category", "Capacity effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function\x09\x09\x09\x09\x09\x09\x09\x09\n" },
#endif
		{ "ModuleRelativePath", "Public/Statistics/CapacityStatisticsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondCapacityEffectWhenFailed_MetaData[] = {
		{ "Category", "Capacity effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function\x09\x09\n" },
#endif
		{ "ModuleRelativePath", "Public/Statistics/CapacityStatisticsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfSkillPointsRequiredToUnlock;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CapacityType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CapacityType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Reach;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmingTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InvulnerabilityTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTimeLenght;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StunningTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SelfStunningTimeWhenSucceed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SelfStunningTimeWhenFailed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Knockback;
	static void NewProp_CapacityEffect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CapacityEffect;
	static void NewProp_SecondaryCapacityEffectWhenSucceed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SecondaryCapacityEffectWhenSucceed;
	static void NewProp_SecondCapacityEffectWhenFailed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SecondCapacityEffectWhenFailed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCapacityStatisticsDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCapacityStatisticsDataAsset, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_NumberOfSkillPointsRequiredToUnlock = { "NumberOfSkillPointsRequiredToUnlock", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCapacityStatisticsDataAsset, NumberOfSkillPointsRequiredToUnlock), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfSkillPointsRequiredToUnlock_MetaData), NewProp_NumberOfSkillPointsRequiredToUnlock_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_CapacityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_CapacityType = { "CapacityType", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCapacityStatisticsDataAsset, CapacityType), Z_Construct_UEnum_Pinocchio_sOutrage_EPlayerActionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapacityType_MetaData), NewProp_CapacityType_MetaData) }; // 1346979213
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCapacityStatisticsDataAsset, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_Reach = { "Reach", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCapacityStatisticsDataAsset, Reach), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reach_MetaData), NewProp_Reach_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_ArmingTime = { "ArmingTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCapacityStatisticsDataAsset, ArmingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmingTime_MetaData), NewProp_ArmingTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_InvulnerabilityTime = { "InvulnerabilityTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCapacityStatisticsDataAsset, InvulnerabilityTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvulnerabilityTime_MetaData), NewProp_InvulnerabilityTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_AttackTimeLenght = { "AttackTimeLenght", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCapacityStatisticsDataAsset, AttackTimeLenght), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTimeLenght_MetaData), NewProp_AttackTimeLenght_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_StunningTime = { "StunningTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCapacityStatisticsDataAsset, StunningTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StunningTime_MetaData), NewProp_StunningTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_SelfStunningTimeWhenSucceed = { "SelfStunningTimeWhenSucceed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCapacityStatisticsDataAsset, SelfStunningTimeWhenSucceed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfStunningTimeWhenSucceed_MetaData), NewProp_SelfStunningTimeWhenSucceed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_SelfStunningTimeWhenFailed = { "SelfStunningTimeWhenFailed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCapacityStatisticsDataAsset, SelfStunningTimeWhenFailed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfStunningTimeWhenFailed_MetaData), NewProp_SelfStunningTimeWhenFailed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_CooldownTime = { "CooldownTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCapacityStatisticsDataAsset, CooldownTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownTime_MetaData), NewProp_CooldownTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_Knockback = { "Knockback", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCapacityStatisticsDataAsset, Knockback), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Knockback_MetaData), NewProp_Knockback_MetaData) };
void Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_CapacityEffect_SetBit(void* Obj)
{
	((UCapacityStatisticsDataAsset*)Obj)->CapacityEffect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_CapacityEffect = { "CapacityEffect", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCapacityStatisticsDataAsset), &Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_CapacityEffect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapacityEffect_MetaData), NewProp_CapacityEffect_MetaData) };
void Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_SecondaryCapacityEffectWhenSucceed_SetBit(void* Obj)
{
	((UCapacityStatisticsDataAsset*)Obj)->SecondaryCapacityEffectWhenSucceed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_SecondaryCapacityEffectWhenSucceed = { "SecondaryCapacityEffectWhenSucceed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCapacityStatisticsDataAsset), &Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_SecondaryCapacityEffectWhenSucceed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryCapacityEffectWhenSucceed_MetaData), NewProp_SecondaryCapacityEffectWhenSucceed_MetaData) };
void Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_SecondCapacityEffectWhenFailed_SetBit(void* Obj)
{
	((UCapacityStatisticsDataAsset*)Obj)->SecondCapacityEffectWhenFailed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_SecondCapacityEffectWhenFailed = { "SecondCapacityEffectWhenFailed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCapacityStatisticsDataAsset), &Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_SecondCapacityEffectWhenFailed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondCapacityEffectWhenFailed_MetaData), NewProp_SecondCapacityEffectWhenFailed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_NumberOfSkillPointsRequiredToUnlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_CapacityType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_CapacityType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_Reach,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_ArmingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_InvulnerabilityTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_AttackTimeLenght,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_StunningTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_SelfStunningTimeWhenSucceed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_SelfStunningTimeWhenFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_CooldownTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_Knockback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_CapacityEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_SecondaryCapacityEffectWhenSucceed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::NewProp_SecondCapacityEffectWhenFailed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::ClassParams = {
	&UCapacityStatisticsDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCapacityStatisticsDataAsset()
{
	if (!Z_Registration_Info_UClass_UCapacityStatisticsDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCapacityStatisticsDataAsset.OuterSingleton, Z_Construct_UClass_UCapacityStatisticsDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCapacityStatisticsDataAsset.OuterSingleton;
}
template<> PINOCCHIO_SOUTRAGE_API UClass* StaticClass<UCapacityStatisticsDataAsset>()
{
	return UCapacityStatisticsDataAsset::StaticClass();
}
UCapacityStatisticsDataAsset::UCapacityStatisticsDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCapacityStatisticsDataAsset);
UCapacityStatisticsDataAsset::~UCapacityStatisticsDataAsset() {}
// End Class UCapacityStatisticsDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Statistics_CapacityStatisticsDataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCapacityStatisticsDataAsset, UCapacityStatisticsDataAsset::StaticClass, TEXT("UCapacityStatisticsDataAsset"), &Z_Registration_Info_UClass_UCapacityStatisticsDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCapacityStatisticsDataAsset), 3918576605U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Statistics_CapacityStatisticsDataAsset_h_1502664973(TEXT("/Script/Pinocchio_sOutrage"),
	Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Statistics_CapacityStatisticsDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Statistics_CapacityStatisticsDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
