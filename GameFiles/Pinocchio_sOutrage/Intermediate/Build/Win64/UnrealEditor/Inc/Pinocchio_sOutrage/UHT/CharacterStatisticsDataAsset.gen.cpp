// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pinocchio_sOutrage/Public/Statistics/CharacterStatisticsDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterStatisticsDataAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_UCharacterStatisticsDataAsset();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_UCharacterStatisticsDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pinocchio_sOutrage();
// End Cross Module References

// Begin Class UCharacterStatisticsDataAsset
void UCharacterStatisticsDataAsset::StaticRegisterNativesUCharacterStatisticsDataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterStatisticsDataAsset);
UClass* Z_Construct_UClass_UCharacterStatisticsDataAsset_NoRegister()
{
	return UCharacterStatisticsDataAsset::StaticClass();
}
struct Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Statistics/CharacterStatisticsDataAsset.h" },
		{ "ModuleRelativePath", "Public/Statistics/CharacterStatisticsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Basic informations" },
		{ "ModuleRelativePath", "Public/Statistics/CharacterStatisticsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealthPoint_MetaData[] = {
		{ "Category", "Basic informations" },
		{ "ClampMax", "150" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TODO : Remove when this property is copy paste into Character class \n//UPROPERTY(EditDefaultsOnly, Category = \"Basic informations\", meta = (ClampMin = 0))\n//float CurrentHealthPoint;\n" },
#endif
		{ "ModuleRelativePath", "Public/Statistics/CharacterStatisticsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO : Remove when this property is copy paste into Character class\nUPROPERTY(EditDefaultsOnly, Category = \"Basic informations\", meta = (ClampMin = 0))\nfloat CurrentHealthPoint;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Basic informations" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Statistics/CharacterStatisticsDataAsset.h" },
		{ "Units", "m/s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperiencePointsRequiredForNextLevel_MetaData[] = {
		{ "Category", "Experience informations" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TODO : Remove when this property is copy paste into Character class\n//UPROPERTY(EditDefaultsOnly, Category = \"Experience informations\", meta = (ClampMin = 0))\n//int CurrentExperiencePoints;\n" },
#endif
		{ "ModuleRelativePath", "Public/Statistics/CharacterStatisticsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO : Remove when this property is copy paste into Character class\nUPROPERTY(EditDefaultsOnly, Category = \"Experience informations\", meta = (ClampMin = 0))\nint CurrentExperiencePoints;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevel_MetaData[] = {
		{ "Category", "Experience informations" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TODO : Remove when this property is copy paste into Character class\n//UPROPERTY(EditDefaultsOnly, Category = \"Experience informations\", meta = (ClampMin = 0))\n//int CurrentLevel;\n" },
#endif
		{ "ModuleRelativePath", "Public/Statistics/CharacterStatisticsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO : Remove when this property is copy paste into Character class\nUPROPERTY(EditDefaultsOnly, Category = \"Experience informations\", meta = (ClampMin = 0))\nint CurrentLevel;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasicCapacities_MetaData[] = {
		{ "Category", "Capacity informations" },
		{ "ModuleRelativePath", "Public/Statistics/CharacterStatisticsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecialCapacities_MetaData[] = {
		{ "Category", "Capacity informations" },
		{ "ModuleRelativePath", "Public/Statistics/CharacterStatisticsDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealthPoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExperiencePointsRequiredForNextLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevel;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BasicCapacities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BasicCapacities;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SpecialCapacities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpecialCapacities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterStatisticsDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterStatisticsDataAsset, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::NewProp_MaxHealthPoint = { "MaxHealthPoint", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterStatisticsDataAsset, MaxHealthPoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealthPoint_MetaData), NewProp_MaxHealthPoint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterStatisticsDataAsset, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::NewProp_ExperiencePointsRequiredForNextLevel = { "ExperiencePointsRequiredForNextLevel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterStatisticsDataAsset, ExperiencePointsRequiredForNextLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperiencePointsRequiredForNextLevel_MetaData), NewProp_ExperiencePointsRequiredForNextLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::NewProp_MaxLevel = { "MaxLevel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterStatisticsDataAsset, MaxLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLevel_MetaData), NewProp_MaxLevel_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::NewProp_BasicCapacities_Inner = { "BasicCapacities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::NewProp_BasicCapacities = { "BasicCapacities", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterStatisticsDataAsset, BasicCapacities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasicCapacities_MetaData), NewProp_BasicCapacities_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::NewProp_SpecialCapacities_Inner = { "SpecialCapacities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::NewProp_SpecialCapacities = { "SpecialCapacities", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterStatisticsDataAsset, SpecialCapacities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecialCapacities_MetaData), NewProp_SpecialCapacities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::NewProp_MaxHealthPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::NewProp_MovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::NewProp_ExperiencePointsRequiredForNextLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::NewProp_MaxLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::NewProp_BasicCapacities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::NewProp_BasicCapacities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::NewProp_SpecialCapacities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::NewProp_SpecialCapacities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::ClassParams = {
	&UCharacterStatisticsDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterStatisticsDataAsset()
{
	if (!Z_Registration_Info_UClass_UCharacterStatisticsDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterStatisticsDataAsset.OuterSingleton, Z_Construct_UClass_UCharacterStatisticsDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterStatisticsDataAsset.OuterSingleton;
}
template<> PINOCCHIO_SOUTRAGE_API UClass* StaticClass<UCharacterStatisticsDataAsset>()
{
	return UCharacterStatisticsDataAsset::StaticClass();
}
UCharacterStatisticsDataAsset::UCharacterStatisticsDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterStatisticsDataAsset);
UCharacterStatisticsDataAsset::~UCharacterStatisticsDataAsset() {}
// End Class UCharacterStatisticsDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Statistics_CharacterStatisticsDataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterStatisticsDataAsset, UCharacterStatisticsDataAsset::StaticClass, TEXT("UCharacterStatisticsDataAsset"), &Z_Registration_Info_UClass_UCharacterStatisticsDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterStatisticsDataAsset), 816867242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Statistics_CharacterStatisticsDataAsset_h_527039075(TEXT("/Script/Pinocchio_sOutrage"),
	Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Statistics_CharacterStatisticsDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Statistics_CharacterStatisticsDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
