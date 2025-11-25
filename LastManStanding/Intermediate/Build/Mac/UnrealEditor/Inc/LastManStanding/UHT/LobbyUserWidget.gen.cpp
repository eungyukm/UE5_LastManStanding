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
LASTMANSTANDING_API UClass* Z_Construct_UClass_ALobbyPlayerState_NoRegister();
LASTMANSTANDING_API UClass* Z_Construct_UClass_ULobbyUserWidget();
LASTMANSTANDING_API UClass* Z_Construct_UClass_ULobbyUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Txt_Ready_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LobbyUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lobby/UI/LobbyUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Txt_PlayerName_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LobbyUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lobby/UI/LobbyUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Editable_PlayerName_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LobbyUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lobby/UI/LobbyUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Btn_Ready_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LobbyUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lobby/UI/LobbyUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Btn_KickPlayer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LobbyUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lobby/UI/LobbyUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[] = {
		{ "Category", "LobbyUserWidget" },
		{ "ModuleRelativePath", "Lobby/UI/LobbyUserWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULobbyUserWidget constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Txt_Ready;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Txt_PlayerName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Editable_PlayerName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Btn_Ready;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Btn_KickPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULobbyUserWidget constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULobbyUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULobbyUserWidget_Statics

// ********** Begin Class ULobbyUserWidget Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyUserWidget_Statics::NewProp_Txt_Ready = { "Txt_Ready", nullptr, (EPropertyFlags)0x012408000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULobbyUserWidget, Txt_Ready), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Txt_Ready_MetaData), NewProp_Txt_Ready_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyUserWidget_Statics::NewProp_Txt_PlayerName = { "Txt_PlayerName", nullptr, (EPropertyFlags)0x012408000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULobbyUserWidget, Txt_PlayerName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Txt_PlayerName_MetaData), NewProp_Txt_PlayerName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyUserWidget_Statics::NewProp_Editable_PlayerName = { "Editable_PlayerName", nullptr, (EPropertyFlags)0x012408000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULobbyUserWidget, Editable_PlayerName), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Editable_PlayerName_MetaData), NewProp_Editable_PlayerName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyUserWidget_Statics::NewProp_Btn_Ready = { "Btn_Ready", nullptr, (EPropertyFlags)0x012408000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULobbyUserWidget, Btn_Ready), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Btn_Ready_MetaData), NewProp_Btn_Ready_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyUserWidget_Statics::NewProp_Btn_KickPlayer = { "Btn_KickPlayer", nullptr, (EPropertyFlags)0x012408000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULobbyUserWidget, Btn_KickPlayer), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Btn_KickPlayer_MetaData), NewProp_Btn_KickPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyUserWidget_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0124080000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULobbyUserWidget, PlayerState), Z_Construct_UClass_ALobbyPlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerState_MetaData), NewProp_PlayerState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULobbyUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyUserWidget_Statics::NewProp_Txt_Ready,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyUserWidget_Statics::NewProp_Txt_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyUserWidget_Statics::NewProp_Editable_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyUserWidget_Statics::NewProp_Btn_Ready,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyUserWidget_Statics::NewProp_Btn_KickPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyUserWidget_Statics::NewProp_PlayerState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyUserWidget_Statics::PropPointers) < 2048);
// ********** End Class ULobbyUserWidget Property Definitions **************************************
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
	Z_Construct_UClass_ULobbyUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyUserWidget_Statics::PropPointers),
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
		{ Z_Construct_UClass_ULobbyUserWidget, ULobbyUserWidget::StaticClass, TEXT("ULobbyUserWidget"), &Z_Registration_Info_UClass_ULobbyUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULobbyUserWidget), 3581414746U) },
	};
}; // Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyUserWidget_h__Script_LastManStanding_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyUserWidget_h__Script_LastManStanding_484347928{
	TEXT("/Script/LastManStanding"),
	Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyUserWidget_h__Script_LastManStanding_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyUserWidget_h__Script_LastManStanding_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
