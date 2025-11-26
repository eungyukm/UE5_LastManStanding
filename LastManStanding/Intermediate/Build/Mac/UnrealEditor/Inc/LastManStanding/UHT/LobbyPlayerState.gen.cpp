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

// ********** Begin Class ALobbyPlayerState Function BP_RefreshLobbyUI *****************************
static FName NAME_ALobbyPlayerState_BP_RefreshLobbyUI = FName(TEXT("BP_RefreshLobbyUI"));
void ALobbyPlayerState::BP_RefreshLobbyUI()
{
	UFunction* Func = FindFunctionChecked(NAME_ALobbyPlayerState_BP_RefreshLobbyUI);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ALobbyPlayerState_BP_RefreshLobbyUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lobby/Contents/LobbyPlayerState.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BP_RefreshLobbyUI constinit property declarations *********************
// ********** End Function BP_RefreshLobbyUI constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPlayerState_BP_RefreshLobbyUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALobbyPlayerState, nullptr, "BP_RefreshLobbyUI", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerState_BP_RefreshLobbyUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALobbyPlayerState_BP_RefreshLobbyUI_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ALobbyPlayerState_BP_RefreshLobbyUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyPlayerState_BP_RefreshLobbyUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ALobbyPlayerState Function BP_RefreshLobbyUI *******************************

// ********** Begin Class ALobbyPlayerState Function OnRep_NickNameChange **************************
struct Z_Construct_UFunction_ALobbyPlayerState_OnRep_NickNameChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lobby/Contents/LobbyPlayerState.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_NickNameChange constinit property declarations ******************
// ********** End Function OnRep_NickNameChange constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPlayerState_OnRep_NickNameChange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALobbyPlayerState, nullptr, "OnRep_NickNameChange", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerState_OnRep_NickNameChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALobbyPlayerState_OnRep_NickNameChange_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ALobbyPlayerState_OnRep_NickNameChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyPlayerState_OnRep_NickNameChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALobbyPlayerState::execOnRep_NickNameChange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_NickNameChange();
	P_NATIVE_END;
}
// ********** End Class ALobbyPlayerState Function OnRep_NickNameChange ****************************

// ********** Begin Class ALobbyPlayerState Function RefreshLobbyUI ********************************
struct Z_Construct_UFunction_ALobbyPlayerState_RefreshLobbyUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lobby/Contents/LobbyPlayerState.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RefreshLobbyUI constinit property declarations ************************
// ********** End Function RefreshLobbyUI constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPlayerState_RefreshLobbyUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALobbyPlayerState, nullptr, "RefreshLobbyUI", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerState_RefreshLobbyUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALobbyPlayerState_RefreshLobbyUI_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ALobbyPlayerState_RefreshLobbyUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyPlayerState_RefreshLobbyUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALobbyPlayerState::execRefreshLobbyUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshLobbyUI();
	P_NATIVE_END;
}
// ********** End Class ALobbyPlayerState Function RefreshLobbyUI **********************************

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
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnRep_NickNameChange"), .Pointer = &ALobbyPlayerState::execOnRep_NickNameChange },
		{ .NameUTF8 = UTF8TEXT("RefreshLobbyUI"), .Pointer = &ALobbyPlayerState::execRefreshLobbyUI },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALobbyPlayerState_BP_RefreshLobbyUI, "BP_RefreshLobbyUI" }, // 3749943093
		{ &Z_Construct_UFunction_ALobbyPlayerState_OnRep_NickNameChange, "OnRep_NickNameChange" }, // 159117458
		{ &Z_Construct_UFunction_ALobbyPlayerState_RefreshLobbyUI, "RefreshLobbyUI" }, // 3617284097
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALobbyPlayerState_Statics::NewProp_Ready = { "Ready", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALobbyPlayerState), &Z_Construct_UClass_ALobbyPlayerState_Statics::NewProp_Ready_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ready_MetaData), NewProp_Ready_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ALobbyPlayerState_Statics::NewProp_NickName = { "NickName", "OnRep_NicknameChange", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALobbyPlayerState, NickName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NickName_MetaData), NewProp_NickName_MetaData) };
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
	FuncInfo,
	Z_Construct_UClass_ALobbyPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyPlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ALobbyPlayerState_Statics::Class_MetaDataParams)
};
void ALobbyPlayerState::StaticRegisterNativesALobbyPlayerState()
{
	UClass* Class = ALobbyPlayerState::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ALobbyPlayerState_Statics::Funcs));
}
UClass* Z_Construct_UClass_ALobbyPlayerState()
{
	if (!Z_Registration_Info_UClass_ALobbyPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALobbyPlayerState.OuterSingleton, Z_Construct_UClass_ALobbyPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALobbyPlayerState.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ALobbyPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Ready(TEXT("Ready"));
	static FName Name_NickName(TEXT("NickName"));
	const bool bIsValid = true
		&& Name_Ready == ClassReps[(int32)ENetFields_Private::Ready].Property->GetFName()
		&& Name_NickName == ClassReps[(int32)ENetFields_Private::NickName].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALobbyPlayerState"));
}
#endif
ALobbyPlayerState::ALobbyPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ALobbyPlayerState);
ALobbyPlayerState::~ALobbyPlayerState() {}
// ********** End Class ALobbyPlayerState **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerState_h__Script_LastManStanding_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALobbyPlayerState, ALobbyPlayerState::StaticClass, TEXT("ALobbyPlayerState"), &Z_Registration_Info_UClass_ALobbyPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALobbyPlayerState), 1267224305U) },
	};
}; // Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerState_h__Script_LastManStanding_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerState_h__Script_LastManStanding_3086042070{
	TEXT("/Script/LastManStanding"),
	Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerState_h__Script_LastManStanding_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyPlayerState_h__Script_LastManStanding_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
