// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lobby/Contents/LobbyHUD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLobbyHUD() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AHUD();
LASTMANSTANDING_API UClass* Z_Construct_UClass_ALobbyHUD();
LASTMANSTANDING_API UClass* Z_Construct_UClass_ALobbyHUD_NoRegister();
UPackage* Z_Construct_UPackage__Script_LastManStanding();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALobbyHUD ****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ALobbyHUD;
UClass* ALobbyHUD::GetPrivateStaticClass()
{
	using TClass = ALobbyHUD;
	if (!Z_Registration_Info_UClass_ALobbyHUD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LobbyHUD"),
			Z_Registration_Info_UClass_ALobbyHUD.InnerSingleton,
			StaticRegisterNativesALobbyHUD,
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
	return Z_Registration_Info_UClass_ALobbyHUD.InnerSingleton;
}
UClass* Z_Construct_UClass_ALobbyHUD_NoRegister()
{
	return ALobbyHUD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALobbyHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Lobby/Contents/LobbyHUD.h" },
		{ "ModuleRelativePath", "Lobby/Contents/LobbyHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA

// ********** Begin Class ALobbyHUD constinit property declarations ********************************
// ********** End Class ALobbyHUD constinit property declarations **********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ALobbyHUD_Statics
UObject* (*const Z_Construct_UClass_ALobbyHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_LastManStanding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALobbyHUD_Statics::ClassParams = {
	&ALobbyHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ALobbyHUD_Statics::Class_MetaDataParams)
};
void ALobbyHUD::StaticRegisterNativesALobbyHUD()
{
}
UClass* Z_Construct_UClass_ALobbyHUD()
{
	if (!Z_Registration_Info_UClass_ALobbyHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALobbyHUD.OuterSingleton, Z_Construct_UClass_ALobbyHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALobbyHUD.OuterSingleton;
}
ALobbyHUD::ALobbyHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ALobbyHUD);
ALobbyHUD::~ALobbyHUD() {}
// ********** End Class ALobbyHUD ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyHUD_h__Script_LastManStanding_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALobbyHUD, ALobbyHUD::StaticClass, TEXT("ALobbyHUD"), &Z_Registration_Info_UClass_ALobbyHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALobbyHUD), 3818229006U) },
	};
}; // Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyHUD_h__Script_LastManStanding_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyHUD_h__Script_LastManStanding_424987292{
	TEXT("/Script/LastManStanding"),
	Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyHUD_h__Script_LastManStanding_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyHUD_h__Script_LastManStanding_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
