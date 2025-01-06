// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerInputs/PlayerInputsManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PINOCCHIO_SOUTRAGE_PlayerInputsManager_generated_h
#error "PlayerInputsManager.generated.h already included, missing '#pragma once' in PlayerInputsManager.h"
#endif
#define PINOCCHIO_SOUTRAGE_PlayerInputsManager_generated_h

#define FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_PlayerInputs_PlayerInputsManager_h_17_DELEGATE \
PINOCCHIO_SOUTRAGE_API void FOnInteraction_DelegateWrapper(const FMulticastScriptDelegate& OnInteraction);


#define FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_PlayerInputs_PlayerInputsManager_h_19_DELEGATE \
PINOCCHIO_SOUTRAGE_API void FOnMovement_DelegateWrapper(const FMulticastScriptDelegate& OnMovement, FVector2f p_normalizedDirection);


#define FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_PlayerInputs_PlayerInputsManager_h_21_DELEGATE \
PINOCCHIO_SOUTRAGE_API void FOnPause_DelegateWrapper(const FMulticastScriptDelegate& OnPause);


#define FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_PlayerInputs_PlayerInputsManager_h_23_DELEGATE \
PINOCCHIO_SOUTRAGE_API void FOnUsingBasicCapacity1_DelegateWrapper(const FMulticastScriptDelegate& OnUsingBasicCapacity1);


#define FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_PlayerInputs_PlayerInputsManager_h_24_DELEGATE \
PINOCCHIO_SOUTRAGE_API void FOnUsingBasicCapacity2_DelegateWrapper(const FMulticastScriptDelegate& OnUsingBasicCapacity2);


#define FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_PlayerInputs_PlayerInputsManager_h_25_DELEGATE \
PINOCCHIO_SOUTRAGE_API void FOnUsingBasicCapacity3_DelegateWrapper(const FMulticastScriptDelegate& OnUsingBasicCapacity3);


#define FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_PlayerInputs_PlayerInputsManager_h_27_DELEGATE \
PINOCCHIO_SOUTRAGE_API void FOnUsingSpecialCapacity1_DelegateWrapper(const FMulticastScriptDelegate& OnUsingSpecialCapacity1);


#define FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_PlayerInputs_PlayerInputsManager_h_28_DELEGATE \
PINOCCHIO_SOUTRAGE_API void FOnUsingSpecialCapacity2_DelegateWrapper(const FMulticastScriptDelegate& OnUsingSpecialCapacity2);


#define FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_PlayerInputs_PlayerInputsManager_h_29_DELEGATE \
PINOCCHIO_SOUTRAGE_API void FOnUsingSpecialCapacity3_DelegateWrapper(const FMulticastScriptDelegate& OnUsingSpecialCapacity3);


#define FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_PlayerInputs_PlayerInputsManager_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerInputsManager(); \
	friend struct Z_Construct_UClass_APlayerInputsManager_Statics; \
public: \
	DECLARE_CLASS(APlayerInputsManager, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pinocchio_sOutrage"), NO_API) \
	DECLARE_SERIALIZER(APlayerInputsManager)


#define FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_PlayerInputs_PlayerInputsManager_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerInputsManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerInputsManager(APlayerInputsManager&&); \
	APlayerInputsManager(const APlayerInputsManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerInputsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerInputsManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerInputsManager) \
	NO_API virtual ~APlayerInputsManager();


#define FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_PlayerInputs_PlayerInputsManager_h_35_PROLOG
#define FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_PlayerInputs_PlayerInputsManager_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_PlayerInputs_PlayerInputsManager_h_38_INCLASS_NO_PURE_DECLS \
	FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_PlayerInputs_PlayerInputsManager_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PINOCCHIO_SOUTRAGE_API UClass* StaticClass<class APlayerInputsManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_PlayerInputs_PlayerInputsManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
