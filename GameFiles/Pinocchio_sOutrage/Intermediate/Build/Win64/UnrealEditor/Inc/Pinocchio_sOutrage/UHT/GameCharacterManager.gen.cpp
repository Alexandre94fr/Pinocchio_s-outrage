// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pinocchio_sOutrage/Public/Character/GameCharacterManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameCharacterManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_AGameCharacter_NoRegister();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_AGameCharacterManager();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_AGameCharacterManager_NoRegister();
PINOCCHIO_SOUTRAGE_API UEnum* Z_Construct_UEnum_Pinocchio_sOutrage_EGameCharactersEnum();
UPackage* Z_Construct_UPackage__Script_Pinocchio_sOutrage();
// End Cross Module References

// Begin Class AGameCharacterManager
void AGameCharacterManager::StaticRegisterNativesAGameCharacterManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameCharacterManager);
UClass* Z_Construct_UClass_AGameCharacterManager_NoRegister()
{
	return AGameCharacterManager::StaticClass();
}
struct Z_Construct_UClass_AGameCharacterManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Character/GameCharacterManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Character/GameCharacterManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharactersInstantiatedFolderPath_MetaData[] = {
		{ "Category", "Character instantiation" },
		{ "ModuleRelativePath", "Public/Character/GameCharacterManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameCharactersEnumToClassDictionnary_MetaData[] = {
		{ "Category", "Character instantiation" },
		{ "ModuleRelativePath", "Public/Character/GameCharacterManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstantiatedCharacters_MetaData[] = {
		{ "Category", "Instantiated characters" },
		{ "ModuleRelativePath", "Public/Character/GameCharacterManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacters_MetaData[] = {
		{ "Category", "Instantiated characters" },
		{ "ModuleRelativePath", "Public/Character/GameCharacterManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCharacters_MetaData[] = {
		{ "Category", "Instantiated characters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// In case of multiplayer we do a list\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/GameCharacterManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In case of multiplayer we do a list" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharactersInstantiatedFolderPath;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameCharactersEnumToClassDictionnary_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GameCharactersEnumToClassDictionnary_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GameCharactersEnumToClassDictionnary_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GameCharactersEnumToClassDictionnary;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstantiatedCharacters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstantiatedCharacters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerCharacters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyCharacters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnemyCharacters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameCharacterManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGameCharacterManager_Statics::NewProp_CharactersInstantiatedFolderPath = { "CharactersInstantiatedFolderPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacterManager, CharactersInstantiatedFolderPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharactersInstantiatedFolderPath_MetaData), NewProp_CharactersInstantiatedFolderPath_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameCharacterManager_Statics::NewProp_GameCharactersEnumToClassDictionnary_ValueProp = { "GameCharactersEnumToClassDictionnary", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_AGameCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGameCharacterManager_Statics::NewProp_GameCharactersEnumToClassDictionnary_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGameCharacterManager_Statics::NewProp_GameCharactersEnumToClassDictionnary_Key_KeyProp = { "GameCharactersEnumToClassDictionnary_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Pinocchio_sOutrage_EGameCharactersEnum, METADATA_PARAMS(0, nullptr) }; // 1126591438
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGameCharacterManager_Statics::NewProp_GameCharactersEnumToClassDictionnary = { "GameCharactersEnumToClassDictionnary", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacterManager, GameCharactersEnumToClassDictionnary), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameCharactersEnumToClassDictionnary_MetaData), NewProp_GameCharactersEnumToClassDictionnary_MetaData) }; // 1126591438
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameCharacterManager_Statics::NewProp_InstantiatedCharacters_Inner = { "InstantiatedCharacters", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGameCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameCharacterManager_Statics::NewProp_InstantiatedCharacters = { "InstantiatedCharacters", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacterManager, InstantiatedCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstantiatedCharacters_MetaData), NewProp_InstantiatedCharacters_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameCharacterManager_Statics::NewProp_PlayerCharacters_Inner = { "PlayerCharacters", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGameCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameCharacterManager_Statics::NewProp_PlayerCharacters = { "PlayerCharacters", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacterManager, PlayerCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacters_MetaData), NewProp_PlayerCharacters_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameCharacterManager_Statics::NewProp_EnemyCharacters_Inner = { "EnemyCharacters", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGameCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameCharacterManager_Statics::NewProp_EnemyCharacters = { "EnemyCharacters", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacterManager, EnemyCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyCharacters_MetaData), NewProp_EnemyCharacters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameCharacterManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacterManager_Statics::NewProp_CharactersInstantiatedFolderPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacterManager_Statics::NewProp_GameCharactersEnumToClassDictionnary_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacterManager_Statics::NewProp_GameCharactersEnumToClassDictionnary_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacterManager_Statics::NewProp_GameCharactersEnumToClassDictionnary_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacterManager_Statics::NewProp_GameCharactersEnumToClassDictionnary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacterManager_Statics::NewProp_InstantiatedCharacters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacterManager_Statics::NewProp_InstantiatedCharacters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacterManager_Statics::NewProp_PlayerCharacters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacterManager_Statics::NewProp_PlayerCharacters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacterManager_Statics::NewProp_EnemyCharacters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacterManager_Statics::NewProp_EnemyCharacters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacterManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameCharacterManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacterManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameCharacterManager_Statics::ClassParams = {
	&AGameCharacterManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGameCharacterManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacterManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacterManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameCharacterManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameCharacterManager()
{
	if (!Z_Registration_Info_UClass_AGameCharacterManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameCharacterManager.OuterSingleton, Z_Construct_UClass_AGameCharacterManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameCharacterManager.OuterSingleton;
}
template<> PINOCCHIO_SOUTRAGE_API UClass* StaticClass<AGameCharacterManager>()
{
	return AGameCharacterManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameCharacterManager);
AGameCharacterManager::~AGameCharacterManager() {}
// End Class AGameCharacterManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_GameCharacterManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameCharacterManager, AGameCharacterManager::StaticClass, TEXT("AGameCharacterManager"), &Z_Registration_Info_UClass_AGameCharacterManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameCharacterManager), 2972908910U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_GameCharacterManager_h_2126632700(TEXT("/Script/Pinocchio_sOutrage"),
	Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_GameCharacterManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_GameCharacterManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
