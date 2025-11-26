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

// ********** Begin Class ALobbyPlayerController Function Server_HandleChangeUsername **************
struct LobbyPlayerController_eventServer_HandleChangeUsername_Parms
{
	FText InNickName;
};
static FName NAME_ALobbyPlayerController_Server_HandleChangeUsername = FName(TEXT("Server_HandleChangeUsername"));
void ALobbyPlayerController::Server_HandleChangeUsername(FText const& InNickName)
{
	LobbyPlayerController_eventServer_HandleChangeUsername_Parms Parms;
	Parms.InNickName=InNickName;
	UFunction* Func = FindFunctionChecked(NAME_ALobbyPlayerController_Server_HandleChangeUsername);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ALobbyPlayerController_Server_HandleChangeUsername_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lobby/Contents/LobbyPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNickName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Server_HandleChangeUsername constinit property declarations ***********
	static const UECodeGen_Private::FTextPropertyParams NewProp_InNickName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Server_HandleChangeUsername constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Server_HandleChangeUsername Property Definitions **********************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ALobbyPlayerController_Server_HandleChangeUsername_Statics::NewProp_InNickName = { "InNickName", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LobbyPlayerController_eventServer_HandleChangeUsername_Parms, InNickName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNickName_MetaData), NewProp_InNickName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyPlayerController_Server_HandleChangeUsername_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyPlayerController_Server_HandleChangeUsername_Statics::NewProp_InNickName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_Server_HandleChangeUsername_Statics::PropPointers) < 2048);
// ********** End Function Server_HandleChangeUsername Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPlayerController_Server_HandleChangeUsername_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALobbyPlayerController, nullptr, "Server_HandleChangeUsername", 	Z_Construct_UFunction_ALobbyPlayerController_Server_HandleChangeUsername_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_Server_HandleChangeUsername_Statics::PropPointers), 
sizeof(LobbyPlayerController_eventServer_HandleChangeUsername_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_Server_HandleChangeUsername_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALobbyPlayerController_Server_HandleChangeUsername_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(LobbyPlayerController_eventServer_HandleChangeUsername_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALobbyPlayerController_Server_HandleChangeUsername()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyPlayerController_Server_HandleChangeUsername_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALobbyPlayerController::execServer_HandleChangeUsername)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_InNickName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_HandleChangeUsername_Implementation(Z_Param_InNickName);
	P_NATIVE_END;
}
// ********** End Class ALobbyPlayerController Function Server_HandleChangeUsername ****************

// ********** Begin Class ALobbyPlayerController Function Server_HandleReadyButton *****************
static FName NAME_ALobbyPlayerController_Server_HandleReadyButton = FName(TEXT("Server_HandleReadyButton"));
void ALobbyPlayerController::Server_HandleReadyButton()
{
	UFunction* Func = FindFunctionChecked(NAME_ALobbyPlayerController_Server_HandleReadyButton);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ALobbyPlayerController_Server_HandleReadyButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lobby/Contents/LobbyPlayerController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Server_HandleReadyButton constinit property declarations **************
// ********** End Function Server_HandleReadyButton constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPlayerController_Server_HandleReadyButton_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALobbyPlayerController, nullptr, "Server_HandleReadyButton", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_Server_HandleReadyButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALobbyPlayerController_Server_HandleReadyButton_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ALobbyPlayerController_Server_HandleReadyButton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyPlayerController_Server_HandleReadyButton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALobbyPlayerController::execServer_HandleReadyButton)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_HandleReadyButton_Implementation();
	P_NATIVE_END;
}
// ********** End Class ALobbyPlayerController Function Server_HandleReadyButton *******************

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
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Server_HandleChangeUsername"), .Pointer = &ALobbyPlayerController::execServer_HandleChangeUsername },
		{ .NameUTF8 = UTF8TEXT("Server_HandleReadyButton"), .Pointer = &ALobbyPlayerController::execServer_HandleReadyButton },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALobbyPlayerController_Server_HandleChangeUsername, "Server_HandleChangeUsername" }, // 1512957635
		{ &Z_Construct_UFunction_ALobbyPlayerController_Server_HandleReadyButton, "Server_HandleReadyButton" }, // 3728514468
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ALobbyPlayerController_Statics::Class_MetaDataParams)
};
void ALobbyPlayerController::StaticRegisterNativesALobbyPlayerController()
{
	UClass* Class = ALobbyPlayerController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ALobbyPlayerController_Statics::Funcs));
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
		{ Z_Construct_UClass_ALobbyPlayerController, ALobbyPlayerController::StaticClass, TEXT("ALobbyPlayerController"), &Z_Registration_Info_UClass_ALobbyPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALobbyPlayerController), 2126563697U) },
	};
}; // Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerController_h__Script_LastManStanding_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerController_h__Script_LastManStanding_2958834993{
	TEXT("/Script/LastManStanding"),
	Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerController_h__Script_LastManStanding_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerController_h__Script_LastManStanding_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
