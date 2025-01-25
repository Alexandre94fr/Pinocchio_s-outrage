// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pinocchio_sOutrage/Public/GameModes/InLevelGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInLevelGameMode() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_AInLevelGameMode();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_AInLevelGameMode_NoRegister();
PINOCCHIO_SOUTRAGE_API UEnum* Z_Construct_UEnum_Pinocchio_sOutrage_EGameCharactersEnum();
UPackage* Z_Construct_UPackage__Script_Pinocchio_sOutrage();
// End Cross Module References

// Begin Class AInLevelGameMode
void AInLevelGameMode::StaticRegisterNativesAInLevelGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInLevelGameMode);
UClass* Z_Construct_UClass_AInLevelGameMode_NoRegister()
{
	return AInLevelGameMode::StaticClass();
}
struct Z_Construct_UClass_AInLevelGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/InLevelGameMode.h" },
		{ "ModuleRelativePath", "Public/GameModes/InLevelGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacterType_MetaData[] = {
		{ "Category", "Player character spawn" },
		{ "ModuleRelativePath", "Public/GameModes/InLevelGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacterPosition_MetaData[] = {
		{ "Category", "Player character spawn" },
		{ "ModuleRelativePath", "Public/GameModes/InLevelGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacterRotation_MetaData[] = {
		{ "Category", "Player character spawn" },
		{ "ModuleRelativePath", "Public/GameModes/InLevelGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerCharacterType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerCharacterType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerCharacterPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerCharacterRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInLevelGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AInLevelGameMode_Statics::NewProp_PlayerCharacterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AInLevelGameMode_Statics::NewProp_PlayerCharacterType = { "PlayerCharacterType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInLevelGameMode, PlayerCharacterType), Z_Construct_UEnum_Pinocchio_sOutrage_EGameCharactersEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacterType_MetaData), NewProp_PlayerCharacterType_MetaData) }; // 1126591438
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInLevelGameMode_Statics::NewProp_PlayerCharacterPosition = { "PlayerCharacterPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInLevelGameMode, PlayerCharacterPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacterPosition_MetaData), NewProp_PlayerCharacterPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInLevelGameMode_Statics::NewProp_PlayerCharacterRotation = { "PlayerCharacterRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInLevelGameMode, PlayerCharacterRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacterRotation_MetaData), NewProp_PlayerCharacterRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInLevelGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInLevelGameMode_Statics::NewProp_PlayerCharacterType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInLevelGameMode_Statics::NewProp_PlayerCharacterType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInLevelGameMode_Statics::NewProp_PlayerCharacterPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInLevelGameMode_Statics::NewProp_PlayerCharacterRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInLevelGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInLevelGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInLevelGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInLevelGameMode_Statics::ClassParams = {
	&AInLevelGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AInLevelGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AInLevelGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInLevelGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AInLevelGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInLevelGameMode()
{
	if (!Z_Registration_Info_UClass_AInLevelGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInLevelGameMode.OuterSingleton, Z_Construct_UClass_AInLevelGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInLevelGameMode.OuterSingleton;
}
template<> PINOCCHIO_SOUTRAGE_API UClass* StaticClass<AInLevelGameMode>()
{
	return AInLevelGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInLevelGameMode);
AInLevelGameMode::~AInLevelGameMode() {}
// End Class AInLevelGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_GameModes_InLevelGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInLevelGameMode, AInLevelGameMode::StaticClass, TEXT("AInLevelGameMode"), &Z_Registration_Info_UClass_AInLevelGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInLevelGameMode), 369986252U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_GameModes_InLevelGameMode_h_3659956012(TEXT("/Script/Pinocchio_sOutrage"),
	Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_GameModes_InLevelGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_GameModes_InLevelGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
