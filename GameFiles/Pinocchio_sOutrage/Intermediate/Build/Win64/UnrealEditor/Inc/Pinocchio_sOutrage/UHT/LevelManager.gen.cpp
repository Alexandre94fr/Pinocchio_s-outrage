// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pinocchio_sOutrage/Public/Level/LevelManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_ALevelManager();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_ALevelManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pinocchio_sOutrage();
// End Cross Module References

// Begin Class ALevelManager
void ALevelManager::StaticRegisterNativesALevelManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelManager);
UClass* Z_Construct_UClass_ALevelManager_NoRegister()
{
	return ALevelManager::StaticClass();
}
struct Z_Construct_UClass_ALevelManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Level/LevelManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Level/LevelManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALevelManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelManager_Statics::ClassParams = {
	&ALevelManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ALevelManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALevelManager()
{
	if (!Z_Registration_Info_UClass_ALevelManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelManager.OuterSingleton, Z_Construct_UClass_ALevelManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALevelManager.OuterSingleton;
}
template<> PINOCCHIO_SOUTRAGE_API UClass* StaticClass<ALevelManager>()
{
	return ALevelManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelManager);
ALevelManager::~ALevelManager() {}
// End Class ALevelManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Level_LevelManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALevelManager, ALevelManager::StaticClass, TEXT("ALevelManager"), &Z_Registration_Info_UClass_ALevelManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelManager), 1905645064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Level_LevelManager_h_469333036(TEXT("/Script/Pinocchio_sOutrage"),
	Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Level_LevelManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Level_LevelManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
