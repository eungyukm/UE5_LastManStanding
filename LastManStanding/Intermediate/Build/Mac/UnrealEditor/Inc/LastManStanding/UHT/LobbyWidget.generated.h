// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lobby/UI/LobbyWidget.h"

#ifdef LASTMANSTANDING_LobbyWidget_generated_h
#error "LobbyWidget.generated.h already included, missing '#pragma once' in LobbyWidget.h"
#endif
#define LASTMANSTANDING_LobbyWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALobbyPlayerState;

// ********** Begin Class ULobbyWidget *************************************************************
#define FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLobbyPlayerStateAtIndex); \
	DECLARE_FUNCTION(execGetLobbyPlayerStates);


struct Z_Construct_UClass_ULobbyWidget_Statics;
LASTMANSTANDING_API UClass* Z_Construct_UClass_ULobbyWidget_NoRegister();

#define FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULobbyWidget(); \
	friend struct ::Z_Construct_UClass_ULobbyWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LASTMANSTANDING_API UClass* ::Z_Construct_UClass_ULobbyWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(ULobbyWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LastManStanding"), Z_Construct_UClass_ULobbyWidget_NoRegister) \
	DECLARE_SERIALIZER(ULobbyWidget)


#define FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyWidget_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULobbyWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULobbyWidget(ULobbyWidget&&) = delete; \
	ULobbyWidget(const ULobbyWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULobbyWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULobbyWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULobbyWidget) \
	NO_API virtual ~ULobbyWidget();


#define FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyWidget_h_18_PROLOG
#define FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyWidget_h_21_INCLASS_NO_PURE_DECLS \
	FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULobbyWidget;

// ********** End Class ULobbyWidget ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
