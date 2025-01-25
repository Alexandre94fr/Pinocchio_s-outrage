// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pinocchio_sOutrage/Public/Statistics/LevelsStatisticsDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelsStatisticsDataAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_ULevelsStatisticsDataAsset();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_ULevelsStatisticsDataAsset_NoRegister();
PINOCCHIO_SOUTRAGE_API UEnum* Z_Construct_UEnum_Pinocchio_sOutrage_EGameCharactersEnum();
PINOCCHIO_SOUTRAGE_API UScriptStruct* Z_Construct_UScriptStruct_FGameLevel();
UPackage* Z_Construct_UPackage__Script_Pinocchio_sOutrage();
// End Cross Module References

// Begin ScriptStruct FGameLevel
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameLevel;
class UScriptStruct* FGameLevel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameLevel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameLevel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameLevel, (UObject*)Z_Construct_UPackage__Script_Pinocchio_sOutrage(), TEXT("GameLevel"));
	}
	return Z_Registration_Info_UScriptStruct_GameLevel.OuterSingleton;
}
template<> PINOCCHIO_SOUTRAGE_API UScriptStruct* StaticStruct<FGameLevel>()
{
	return FGameLevel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Statistics/LevelsStatisticsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfExperienceGaveWhenFinished_MetaData[] = {
		{ "Category", "Level informations" },
		{ "ModuleRelativePath", "Public/Statistics/LevelsStatisticsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCharactersSpawned_MetaData[] = {
		{ "Category", "Level informations" },
		{ "ModuleRelativePath", "Public/Statistics/LevelsStatisticsDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfExperienceGaveWhenFinished;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EnemyCharactersSpawned_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnemyCharactersSpawned_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EnemyCharactersSpawned_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EnemyCharactersSpawned;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameLevel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameLevel_Statics::NewProp_NumberOfExperienceGaveWhenFinished = { "NumberOfExperienceGaveWhenFinished", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameLevel, NumberOfExperienceGaveWhenFinished), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfExperienceGaveWhenFinished_MetaData), NewProp_NumberOfExperienceGaveWhenFinished_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameLevel_Statics::NewProp_EnemyCharactersSpawned_ValueProp = { "EnemyCharactersSpawned", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameLevel_Statics::NewProp_EnemyCharactersSpawned_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameLevel_Statics::NewProp_EnemyCharactersSpawned_Key_KeyProp = { "EnemyCharactersSpawned_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Pinocchio_sOutrage_EGameCharactersEnum, METADATA_PARAMS(0, nullptr) }; // 1126591438
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGameLevel_Statics::NewProp_EnemyCharactersSpawned = { "EnemyCharactersSpawned", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameLevel, EnemyCharactersSpawned), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyCharactersSpawned_MetaData), NewProp_EnemyCharactersSpawned_MetaData) }; // 1126591438
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLevel_Statics::NewProp_NumberOfExperienceGaveWhenFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLevel_Statics::NewProp_EnemyCharactersSpawned_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLevel_Statics::NewProp_EnemyCharactersSpawned_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLevel_Statics::NewProp_EnemyCharactersSpawned_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLevel_Statics::NewProp_EnemyCharactersSpawned,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameLevel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage,
	nullptr,
	&NewStructOps,
	"GameLevel",
	Z_Construct_UScriptStruct_FGameLevel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLevel_Statics::PropPointers),
	sizeof(FGameLevel),
	alignof(FGameLevel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLevel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameLevel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameLevel()
{
	if (!Z_Registration_Info_UScriptStruct_GameLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameLevel.InnerSingleton, Z_Construct_UScriptStruct_FGameLevel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameLevel.InnerSingleton;
}
// End ScriptStruct FGameLevel

// Begin Class ULevelsStatisticsDataAsset
void ULevelsStatisticsDataAsset::StaticRegisterNativesULevelsStatisticsDataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelsStatisticsDataAsset);
UClass* Z_Construct_UClass_ULevelsStatisticsDataAsset_NoRegister()
{
	return ULevelsStatisticsDataAsset::StaticClass();
}
struct Z_Construct_UClass_ULevelsStatisticsDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Statistics/LevelsStatisticsDataAsset.h" },
		{ "ModuleRelativePath", "Public/Statistics/LevelsStatisticsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelsStatistics_MetaData[] = {
		{ "Category", "LevelsStatisticsDataAsset" },
		{ "ModuleRelativePath", "Public/Statistics/LevelsStatisticsDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelsStatistics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelsStatistics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelsStatisticsDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelsStatisticsDataAsset_Statics::NewProp_LevelsStatistics_Inner = { "LevelsStatistics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameLevel, METADATA_PARAMS(0, nullptr) }; // 3081195961
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelsStatisticsDataAsset_Statics::NewProp_LevelsStatistics = { "LevelsStatistics", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelsStatisticsDataAsset, LevelsStatistics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelsStatistics_MetaData), NewProp_LevelsStatistics_MetaData) }; // 3081195961
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelsStatisticsDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelsStatisticsDataAsset_Statics::NewProp_LevelsStatistics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelsStatisticsDataAsset_Statics::NewProp_LevelsStatistics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelsStatisticsDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULevelsStatisticsDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelsStatisticsDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelsStatisticsDataAsset_Statics::ClassParams = {
	&ULevelsStatisticsDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULevelsStatisticsDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULevelsStatisticsDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelsStatisticsDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelsStatisticsDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelsStatisticsDataAsset()
{
	if (!Z_Registration_Info_UClass_ULevelsStatisticsDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelsStatisticsDataAsset.OuterSingleton, Z_Construct_UClass_ULevelsStatisticsDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelsStatisticsDataAsset.OuterSingleton;
}
template<> PINOCCHIO_SOUTRAGE_API UClass* StaticClass<ULevelsStatisticsDataAsset>()
{
	return ULevelsStatisticsDataAsset::StaticClass();
}
ULevelsStatisticsDataAsset::ULevelsStatisticsDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelsStatisticsDataAsset);
ULevelsStatisticsDataAsset::~ULevelsStatisticsDataAsset() {}
// End Class ULevelsStatisticsDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Statistics_LevelsStatisticsDataAsset_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameLevel::StaticStruct, Z_Construct_UScriptStruct_FGameLevel_Statics::NewStructOps, TEXT("GameLevel"), &Z_Registration_Info_UScriptStruct_GameLevel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameLevel), 3081195961U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelsStatisticsDataAsset, ULevelsStatisticsDataAsset::StaticClass, TEXT("ULevelsStatisticsDataAsset"), &Z_Registration_Info_UClass_ULevelsStatisticsDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelsStatisticsDataAsset), 2159119711U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Statistics_LevelsStatisticsDataAsset_h_2790909030(TEXT("/Script/Pinocchio_sOutrage"),
	Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Statistics_LevelsStatisticsDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Statistics_LevelsStatisticsDataAsset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Statistics_LevelsStatisticsDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Statistics_LevelsStatisticsDataAsset_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
