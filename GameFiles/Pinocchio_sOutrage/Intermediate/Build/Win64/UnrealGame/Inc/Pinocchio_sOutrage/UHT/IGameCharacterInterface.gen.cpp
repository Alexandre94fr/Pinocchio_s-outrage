// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pinocchio_sOutrage/Public/Character/IGameCharacterInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIGameCharacterInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_UGameCharacterInterface();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_UGameCharacterInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pinocchio_sOutrage();
// End Cross Module References

// Begin Interface UGameCharacterInterface
void UGameCharacterInterface::StaticRegisterNativesUGameCharacterInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameCharacterInterface);
UClass* Z_Construct_UClass_UGameCharacterInterface_NoRegister()
{
	return UGameCharacterInterface::StaticClass();
}
struct Z_Construct_UClass_UGameCharacterInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Character/IGameCharacterInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGameCharacterInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameCharacterInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameCharacterInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameCharacterInterface_Statics::ClassParams = {
	&UGameCharacterInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameCharacterInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameCharacterInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameCharacterInterface()
{
	if (!Z_Registration_Info_UClass_UGameCharacterInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameCharacterInterface.OuterSingleton, Z_Construct_UClass_UGameCharacterInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameCharacterInterface.OuterSingleton;
}
template<> PINOCCHIO_SOUTRAGE_API UClass* StaticClass<UGameCharacterInterface>()
{
	return UGameCharacterInterface::StaticClass();
}
UGameCharacterInterface::UGameCharacterInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameCharacterInterface);
UGameCharacterInterface::~UGameCharacterInterface() {}
// End Interface UGameCharacterInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_IGameCharacterInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameCharacterInterface, UGameCharacterInterface::StaticClass, TEXT("UGameCharacterInterface"), &Z_Registration_Info_UClass_UGameCharacterInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameCharacterInterface), 3994552323U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_IGameCharacterInterface_h_2189377945(TEXT("/Script/Pinocchio_sOutrage"),
	Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_IGameCharacterInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_IGameCharacterInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
