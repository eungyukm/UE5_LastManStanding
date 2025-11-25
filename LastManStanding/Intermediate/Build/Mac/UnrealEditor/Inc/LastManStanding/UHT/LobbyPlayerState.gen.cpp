// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lobby/Contents/LobbyPlayerState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLobbyPlayerState() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
LASTMANSTANDING_API UClass* Z_Construct_UClass_ALobbyPlayerState();
LASTMANSTANDING_API UClass* Z_Construct_UClass_ALobbyPlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_LastManStanding();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALobbyPlayerState ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ALobbyPlayerState;
UClass* ALobbyPlayerState::GetPrivateStaticClass()
{
	using TClass = ALobbyPlayerState;
	if (!Z_Registration_Info_UClass_ALobbyPlayerState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LobbyPlayerState"),
			Z_Registration_Info_UClass_ALobbyPlayerState.InnerSingleton,
			StaticRegisterNativesALobbyPlayerState,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ALobbyPlayerState.InnerSingleton;
}
UClass* Z_Construct_UClass_ALobbyPlayerState_NoRegister()
{
	return ALobbyPlayerState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALobbyPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Lobby/Contents/LobbyPlayerState.h" },
		{ "ModuleRelativePath", "Lobby/Contents/LobbyPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ready_MetaData[] = {
		{ "Category", "LobbyPlayerState" },
		{ "ModuleRelativePath", "Lobby/Contents/LobbyPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NickName_MetaData[] = {
		{ "Category", "LobbyPlayerState" },
		{ "ModuleRelativePath", "Lobby/Contents/LobbyPlayerState.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ALobbyPlayerState constinit property declarations ************************
	static void NewProp_Ready_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Ready;
	static const UECodeGen_Private::FTextPropertyParams NewProp_NickName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ALobbyPlayerState constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ALobbyPlayerState_Statics

// ********** Begin Class ALobbyPlayerState Property Definitions ***********************************
void Z_Construct_UClass_ALobbyPlayerState_Statics::NewProp_Ready_SetBit(void* Obj)
{
	((ALobbyPlayerState*)Obj)->Ready = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALobbyPlayerState_Statics::NewProp_Ready = { "Ready", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALobbyPlayerState), &Z_Construct_UClass_ALobbyPlayerState_Statics::NewProp_Ready_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ready_MetaData), NewProp_Ready_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ALobbyPlayerState_Statics::NewProp_NickName = { "NickName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALobbyPlayerState, NickName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NickName_MetaData), NewProp_NickName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALobbyPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyPlayerState_Statics::NewProp_Ready,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyPlayerState_Statics::NewProp_NickName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyPlayerState_Statics::PropPointers) < 2048);
// ********** End Class ALobbyPlayerState Property Definitions *************************************
UObject* (*const Z_Construct_UClass_ALobbyPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_LastManStanding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALobbyPlayerState_Statics::ClassParams = {
	&ALobbyPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALobbyPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyPlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ALobbyPlayerState_Statics::Class_MetaDataParams)
};
void ALobbyPlayerState::StaticRegisterNativesALobbyPlayerState()
{
}
UClass* Z_Construct_UClass_ALobbyPlayerState()
{
	if (!Z_Registration_Info_UClass_ALobbyPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALobbyPlayerState.OuterSingleton, Z_Construct_UClass_ALobbyPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALobbyPlayerState.OuterSingleton;
}
ALobbyPlayerState::ALobbyPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ALobbyPlayerState);
ALobbyPlayerState::~ALobbyPlayerState() {}
// ********** End Class ALobbyPlayerState **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerState_h__Script_LastManStanding_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALobbyPlayerState, ALobbyPlayerState::StaticClass, TEXT("ALobbyPlayerState"), &Z_Registration_Info_UClass_ALobbyPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALobbyPlayerState), 2941025609U) },
	};
}; // Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerState_h__Script_LastManStanding_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerState_h__Script_LastManStanding_3080142131{
	TEXT("/Script/LastManStanding"),
	Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerState_h__Script_LastManStanding_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerState_h__Script_LastManStanding_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
