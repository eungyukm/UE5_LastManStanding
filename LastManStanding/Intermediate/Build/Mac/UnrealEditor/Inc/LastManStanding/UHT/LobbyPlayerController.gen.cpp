// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lobby/Contents/LobbyPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLobbyPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
LASTMANSTANDING_API UClass* Z_Construct_UClass_ALobbyPlayerController();
LASTMANSTANDING_API UClass* Z_Construct_UClass_ALobbyPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_LastManStanding();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALobbyPlayerController ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ALobbyPlayerController;
UClass* ALobbyPlayerController::GetPrivateStaticClass()
{
	using TClass = ALobbyPlayerController;
	if (!Z_Registration_Info_UClass_ALobbyPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LobbyPlayerController"),
			Z_Registration_Info_UClass_ALobbyPlayerController.InnerSingleton,
			StaticRegisterNativesALobbyPlayerController,
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
	return Z_Registration_Info_UClass_ALobbyPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ALobbyPlayerController_NoRegister()
{
	return ALobbyPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALobbyPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Lobby/Contents/LobbyPlayerController.h" },
		{ "ModuleRelativePath", "Lobby/Contents/LobbyPlayerController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ALobbyPlayerController constinit property declarations *******************
// ********** End Class ALobbyPlayerController constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ALobbyPlayerController_Statics
UObject* (*const Z_Construct_UClass_ALobbyPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_LastManStanding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALobbyPlayerController_Statics::ClassParams = {
	&ALobbyPlayerController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ALobbyPlayerController_Statics::Class_MetaDataParams)
};
void ALobbyPlayerController::StaticRegisterNativesALobbyPlayerController()
{
}
UClass* Z_Construct_UClass_ALobbyPlayerController()
{
	if (!Z_Registration_Info_UClass_ALobbyPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALobbyPlayerController.OuterSingleton, Z_Construct_UClass_ALobbyPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALobbyPlayerController.OuterSingleton;
}
ALobbyPlayerController::ALobbyPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ALobbyPlayerController);
ALobbyPlayerController::~ALobbyPlayerController() {}
// ********** End Class ALobbyPlayerController *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerController_h__Script_LastManStanding_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALobbyPlayerController, ALobbyPlayerController::StaticClass, TEXT("ALobbyPlayerController"), &Z_Registration_Info_UClass_ALobbyPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALobbyPlayerController), 3341436849U) },
	};
}; // Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerController_h__Script_LastManStanding_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerController_h__Script_LastManStanding_621089372{
	TEXT("/Script/LastManStanding"),
	Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerController_h__Script_LastManStanding_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerController_h__Script_LastManStanding_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
