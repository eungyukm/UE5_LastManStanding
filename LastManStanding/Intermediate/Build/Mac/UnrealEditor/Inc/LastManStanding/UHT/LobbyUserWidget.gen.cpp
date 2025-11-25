// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lobby/UI/LobbyUserWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLobbyUserWidget() {}

// ********** Begin Cross Module References ********************************************************
LASTMANSTANDING_API UClass* Z_Construct_UClass_ULobbyUserWidget();
LASTMANSTANDING_API UClass* Z_Construct_UClass_ULobbyUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_LastManStanding();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULobbyUserWidget *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ULobbyUserWidget;
UClass* ULobbyUserWidget::GetPrivateStaticClass()
{
	using TClass = ULobbyUserWidget;
	if (!Z_Registration_Info_UClass_ULobbyUserWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LobbyUserWidget"),
			Z_Registration_Info_UClass_ULobbyUserWidget.InnerSingleton,
			StaticRegisterNativesULobbyUserWidget,
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
	return Z_Registration_Info_UClass_ULobbyUserWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_ULobbyUserWidget_NoRegister()
{
	return ULobbyUserWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULobbyUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Lobby/UI/LobbyUserWidget.h" },
		{ "ModuleRelativePath", "Lobby/UI/LobbyUserWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULobbyUserWidget constinit property declarations *************************
// ********** End Class ULobbyUserWidget constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULobbyUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULobbyUserWidget_Statics
UObject* (*const Z_Construct_UClass_ULobbyUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_LastManStanding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULobbyUserWidget_Statics::ClassParams = {
	&ULobbyUserWidget::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_ULobbyUserWidget_Statics::Class_MetaDataParams)
};
void ULobbyUserWidget::StaticRegisterNativesULobbyUserWidget()
{
}
UClass* Z_Construct_UClass_ULobbyUserWidget()
{
	if (!Z_Registration_Info_UClass_ULobbyUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULobbyUserWidget.OuterSingleton, Z_Construct_UClass_ULobbyUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULobbyUserWidget.OuterSingleton;
}
ULobbyUserWidget::ULobbyUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULobbyUserWidget);
ULobbyUserWidget::~ULobbyUserWidget() {}
// ********** End Class ULobbyUserWidget ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyUserWidget_h__Script_LastManStanding_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULobbyUserWidget, ULobbyUserWidget::StaticClass, TEXT("ULobbyUserWidget"), &Z_Registration_Info_UClass_ULobbyUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULobbyUserWidget), 508081149U) },
	};
}; // Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyUserWidget_h__Script_LastManStanding_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyUserWidget_h__Script_LastManStanding_3553616533{
	TEXT("/Script/LastManStanding"),
	Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyUserWidget_h__Script_LastManStanding_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyUserWidget_h__Script_LastManStanding_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
