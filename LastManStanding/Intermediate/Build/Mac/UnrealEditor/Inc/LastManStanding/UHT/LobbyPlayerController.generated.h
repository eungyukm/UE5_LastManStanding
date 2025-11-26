// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lobby/Contents/LobbyPlayerController.h"

#ifdef LASTMANSTANDING_LobbyPlayerController_generated_h
#error "LobbyPlayerController.generated.h already included, missing '#pragma once' in LobbyPlayerController.h"
#endif
#define LASTMANSTANDING_LobbyPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALobbyPlayerController ***************************************************
#define FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_HandleChangeUsername_Implementation(FText const& InNickName); \
	virtual void Server_HandleReadyButton_Implementation(); \
	DECLARE_FUNCTION(execServer_HandleChangeUsername); \
	DECLARE_FUNCTION(execServer_HandleReadyButton);


#define FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerController_h_15_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ALobbyPlayerController_Statics;
LASTMANSTANDING_API UClass* Z_Construct_UClass_ALobbyPlayerController_NoRegister();

#define FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALobbyPlayerController(); \
	friend struct ::Z_Construct_UClass_ALobbyPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LASTMANSTANDING_API UClass* ::Z_Construct_UClass_ALobbyPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ALobbyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LastManStanding"), Z_Construct_UClass_ALobbyPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ALobbyPlayerController)


#define FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALobbyPlayerController(ALobbyPlayerController&&) = delete; \
	ALobbyPlayerController(const ALobbyPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyPlayerController) \
	NO_API virtual ~ALobbyPlayerController();


#define FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerController_h_12_PROLOG
#define FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerController_h_15_CALLBACK_WRAPPERS \
	FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALobbyPlayerController;

// ********** End Class ALobbyPlayerController *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
