// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lobby/UI/LobbyWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLobbyWidget() {}

// ********** Begin Cross Module References ********************************************************
LASTMANSTANDING_API UClass* Z_Construct_UClass_ULobbyWidget();
LASTMANSTANDING_API UClass* Z_Construct_UClass_ULobbyWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_LastManStanding();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULobbyWidget *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ULobbyWidget;
UClass* ULobbyWidget::GetPrivateStaticClass()
{
	using TClass = ULobbyWidget;
	if (!Z_Registration_Info_UClass_ULobbyWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LobbyWidget"),
			Z_Registration_Info_UClass_ULobbyWidget.InnerSingleton,
			StaticRegisterNativesULobbyWidget,
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
	return Z_Registration_Info_UClass_ULobbyWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_ULobbyWidget_NoRegister()
{
	return ULobbyWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULobbyWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Lobby/UI/LobbyWidget.h" },
		{ "ModuleRelativePath", "Lobby/UI/LobbyWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULobbyWidget constinit property declarations *****************************
// ********** End Class ULobbyWidget constinit property declarations *******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULobbyWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULobbyWidget_Statics
UObject* (*const Z_Construct_UClass_ULobbyWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_LastManStanding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULobbyWidget_Statics::ClassParams = {
	&ULobbyWidget::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_ULobbyWidget_Statics::Class_MetaDataParams)
};
void ULobbyWidget::StaticRegisterNativesULobbyWidget()
{
}
UClass* Z_Construct_UClass_ULobbyWidget()
{
	if (!Z_Registration_Info_UClass_ULobbyWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULobbyWidget.OuterSingleton, Z_Construct_UClass_ULobbyWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULobbyWidget.OuterSingleton;
}
ULobbyWidget::ULobbyWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULobbyWidget);
ULobbyWidget::~ULobbyWidget() {}
// ********** End Class ULobbyWidget ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyWidget_h__Script_LastManStanding_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULobbyWidget, ULobbyWidget::StaticClass, TEXT("ULobbyWidget"), &Z_Registration_Info_UClass_ULobbyWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULobbyWidget), 2846726308U) },
	};
}; // Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyWidget_h__Script_LastManStanding_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyWidget_h__Script_LastManStanding_3656540340{
	TEXT("/Script/LastManStanding"),
	Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyWidget_h__Script_LastManStanding_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyWidget_h__Script_LastManStanding_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
