// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lobby/Contents/LobbyHUD.h"

#ifdef LASTMANSTANDING_LobbyHUD_generated_h
#error "LobbyHUD.generated.h already included, missing '#pragma once' in LobbyHUD.h"
#endif
#define LASTMANSTANDING_LobbyHUD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALobbyHUD ****************************************************************
struct Z_Construct_UClass_ALobbyHUD_Statics;
LASTMANSTANDING_API UClass* Z_Construct_UClass_ALobbyHUD_NoRegister();

#define FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALobbyHUD(); \
	friend struct ::Z_Construct_UClass_ALobbyHUD_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LASTMANSTANDING_API UClass* ::Z_Construct_UClass_ALobbyHUD_NoRegister(); \
public: \
	DECLARE_CLASS2(ALobbyHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/LastManStanding"), Z_Construct_UClass_ALobbyHUD_NoRegister) \
	DECLARE_SERIALIZER(ALobbyHUD)


#define FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALobbyHUD(ALobbyHUD&&) = delete; \
	ALobbyHUD(const ALobbyHUD&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyHUD) \
	NO_API virtual ~ALobbyHUD();


#define FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyHUD_h_12_PROLOG
#define FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyHUD_h_15_INCLASS_NO_PURE_DECLS \
	FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALobbyHUD;

// ********** End Class ALobbyHUD ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyHUD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
