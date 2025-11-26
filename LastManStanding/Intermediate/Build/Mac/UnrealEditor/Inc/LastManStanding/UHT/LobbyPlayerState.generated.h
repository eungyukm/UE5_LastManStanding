// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lobby/Contents/LobbyPlayerState.h"

#ifdef LASTMANSTANDING_LobbyPlayerState_generated_h
#error "LobbyPlayerState.generated.h already included, missing '#pragma once' in LobbyPlayerState.h"
#endif
#define LASTMANSTANDING_LobbyPlayerState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALobbyPlayerState ********************************************************
#define FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_Ready_Implementation(); \
	DECLARE_FUNCTION(execOnRep_NickNameChange); \
	DECLARE_FUNCTION(execRefreshLobbyUI); \
	DECLARE_FUNCTION(execMulticast_Ready);


#define FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerState_h_15_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ALobbyPlayerState_Statics;
LASTMANSTANDING_API UClass* Z_Construct_UClass_ALobbyPlayerState_NoRegister();

#define FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALobbyPlayerState(); \
	friend struct ::Z_Construct_UClass_ALobbyPlayerState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LASTMANSTANDING_API UClass* ::Z_Construct_UClass_ALobbyPlayerState_NoRegister(); \
public: \
	DECLARE_CLASS2(ALobbyPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LastManStanding"), Z_Construct_UClass_ALobbyPlayerState_NoRegister) \
	DECLARE_SERIALIZER(ALobbyPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Ready=NETFIELD_REP_START, \
		NickName, \
		NETFIELD_REP_END=NickName	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALobbyPlayerState(ALobbyPlayerState&&) = delete; \
	ALobbyPlayerState(const ALobbyPlayerState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyPlayerState) \
	NO_API virtual ~ALobbyPlayerState();


#define FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerState_h_12_PROLOG
#define FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerState_h_15_CALLBACK_WRAPPERS \
	FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALobbyPlayerState;

// ********** End Class ALobbyPlayerState **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
