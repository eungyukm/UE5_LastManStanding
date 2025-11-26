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
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
LASTMANSTANDING_API UClass* Z_Construct_UClass_ALobbyPlayerState_NoRegister();
LASTMANSTANDING_API UClass* Z_Construct_UClass_ULobbyUserWidget_NoRegister();
LASTMANSTANDING_API UClass* Z_Construct_UClass_ULobbyWidget();
LASTMANSTANDING_API UClass* Z_Construct_UClass_ULobbyWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_LastManStanding();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULobbyWidget Function GetLobbyPlayerStateAtIndex *************************
struct Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStateAtIndex_Statics
{
	struct LobbyWidget_eventGetLobbyPlayerStateAtIndex_Parms
	{
		int32 InIndex;
		ALobbyPlayerState* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lobby/UI/LobbyWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLobbyPlayerStateAtIndex constinit property declarations ************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLobbyPlayerStateAtIndex constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLobbyPlayerStateAtIndex Property Definitions ***********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStateAtIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LobbyWidget_eventGetLobbyPlayerStateAtIndex_Parms, InIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStateAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LobbyWidget_eventGetLobbyPlayerStateAtIndex_Parms, ReturnValue), Z_Construct_UClass_ALobbyPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStateAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStateAtIndex_Statics::NewProp_InIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStateAtIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStateAtIndex_Statics::PropPointers) < 2048);
// ********** End Function GetLobbyPlayerStateAtIndex Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStateAtIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULobbyWidget, nullptr, "GetLobbyPlayerStateAtIndex", 	Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStateAtIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStateAtIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStateAtIndex_Statics::LobbyWidget_eventGetLobbyPlayerStateAtIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStateAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStateAtIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStateAtIndex_Statics::LobbyWidget_eventGetLobbyPlayerStateAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStateAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStateAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULobbyWidget::execGetLobbyPlayerStateAtIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ALobbyPlayerState**)Z_Param__Result=P_THIS->GetLobbyPlayerStateAtIndex(Z_Param_InIndex);
	P_NATIVE_END;
}
// ********** End Class ULobbyWidget Function GetLobbyPlayerStateAtIndex ***************************

// ********** Begin Class ULobbyWidget Function GetLobbyPlayerStates *******************************
struct Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStates_Statics
{
	struct LobbyWidget_eventGetLobbyPlayerStates_Parms
	{
		TArray<ALobbyPlayerState*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lobby/UI/LobbyWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLobbyPlayerStates constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLobbyPlayerStates constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLobbyPlayerStates Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStates_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ALobbyPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LobbyWidget_eventGetLobbyPlayerStates_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStates_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStates_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStates_Statics::PropPointers) < 2048);
// ********** End Function GetLobbyPlayerStates Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStates_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULobbyWidget, nullptr, "GetLobbyPlayerStates", 	Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStates_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStates_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStates_Statics::LobbyWidget_eventGetLobbyPlayerStates_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStates_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStates_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStates_Statics::LobbyWidget_eventGetLobbyPlayerStates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULobbyWidget::execGetLobbyPlayerStates)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ALobbyPlayerState*>*)Z_Param__Result=P_THIS->GetLobbyPlayerStates();
	P_NATIVE_END;
}
// ********** End Class ULobbyWidget Function GetLobbyPlayerStates *********************************

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserList_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LobbyWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lobby/UI/LobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Btn_Close_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LobbyWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lobby/UI/LobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Btn_GameConfig_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LobbyWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lobby/UI/LobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyUserWidgetClass_MetaData[] = {
		{ "Category", "LobbyWidget" },
		{ "ModuleRelativePath", "Lobby/UI/LobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyUsers_MetaData[] = {
		{ "Category", "LobbyWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lobby/UI/LobbyWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULobbyWidget constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Btn_Close;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Btn_GameConfig;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LobbyUserWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyUsers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LobbyUsers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULobbyWidget constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetLobbyPlayerStateAtIndex"), .Pointer = &ULobbyWidget::execGetLobbyPlayerStateAtIndex },
		{ .NameUTF8 = UTF8TEXT("GetLobbyPlayerStates"), .Pointer = &ULobbyWidget::execGetLobbyPlayerStates },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStateAtIndex, "GetLobbyPlayerStateAtIndex" }, // 3508575798
		{ &Z_Construct_UFunction_ULobbyWidget_GetLobbyPlayerStates, "GetLobbyPlayerStates" }, // 1777792653
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULobbyWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULobbyWidget_Statics

// ********** Begin Class ULobbyWidget Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyWidget_Statics::NewProp_UserList = { "UserList", nullptr, (EPropertyFlags)0x012408000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULobbyWidget, UserList), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserList_MetaData), NewProp_UserList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyWidget_Statics::NewProp_Btn_Close = { "Btn_Close", nullptr, (EPropertyFlags)0x012408000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULobbyWidget, Btn_Close), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Btn_Close_MetaData), NewProp_Btn_Close_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyWidget_Statics::NewProp_Btn_GameConfig = { "Btn_GameConfig", nullptr, (EPropertyFlags)0x012408000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULobbyWidget, Btn_GameConfig), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Btn_GameConfig_MetaData), NewProp_Btn_GameConfig_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULobbyWidget_Statics::NewProp_LobbyUserWidgetClass = { "LobbyUserWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULobbyWidget, LobbyUserWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_ULobbyUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyUserWidgetClass_MetaData), NewProp_LobbyUserWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyWidget_Statics::NewProp_LobbyUsers_Inner = { "LobbyUsers", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULobbyUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULobbyWidget_Statics::NewProp_LobbyUsers = { "LobbyUsers", nullptr, (EPropertyFlags)0x012408800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULobbyWidget, LobbyUsers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyUsers_MetaData), NewProp_LobbyUsers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULobbyWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyWidget_Statics::NewProp_UserList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyWidget_Statics::NewProp_Btn_Close,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyWidget_Statics::NewProp_Btn_GameConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyWidget_Statics::NewProp_LobbyUserWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyWidget_Statics::NewProp_LobbyUsers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyWidget_Statics::NewProp_LobbyUsers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyWidget_Statics::PropPointers) < 2048);
// ********** End Class ULobbyWidget Property Definitions ******************************************
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
	FuncInfo,
	Z_Construct_UClass_ULobbyWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_ULobbyWidget_Statics::Class_MetaDataParams)
};
void ULobbyWidget::StaticRegisterNativesULobbyWidget()
{
	UClass* Class = ULobbyWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ULobbyWidget_Statics::Funcs));
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
		{ Z_Construct_UClass_ULobbyWidget, ULobbyWidget::StaticClass, TEXT("ULobbyWidget"), &Z_Registration_Info_UClass_ULobbyWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULobbyWidget), 3697002129U) },
	};
}; // Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyWidget_h__Script_LastManStanding_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyWidget_h__Script_LastManStanding_2107690814{
	TEXT("/Script/LastManStanding"),
	Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyWidget_h__Script_LastManStanding_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_UI_LobbyWidget_h__Script_LastManStanding_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
