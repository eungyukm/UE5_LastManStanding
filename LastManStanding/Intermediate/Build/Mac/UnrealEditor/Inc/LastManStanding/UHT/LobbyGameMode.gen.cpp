// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lobby/Contents/LobbyGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLobbyGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
LASTMANSTANDING_API UClass* Z_Construct_UClass_ALobbyGameMode();
LASTMANSTANDING_API UClass* Z_Construct_UClass_ALobbyGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_LastManStanding();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALobbyGameMode Function BP_TryStartGame **********************************
static FName NAME_ALobbyGameMode_BP_TryStartGame = FName(TEXT("BP_TryStartGame"));
void ALobbyGameMode::BP_TryStartGame()
{
	UFunction* Func = FindFunctionChecked(NAME_ALobbyGameMode_BP_TryStartGame);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ALobbyGameMode_BP_TryStartGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lobby/Contents/LobbyGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BP_TryStartGame constinit property declarations ***********************
// ********** End Function BP_TryStartGame constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyGameMode_BP_TryStartGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALobbyGameMode, nullptr, "BP_TryStartGame", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyGameMode_BP_TryStartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALobbyGameMode_BP_TryStartGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ALobbyGameMode_BP_TryStartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyGameMode_BP_TryStartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ALobbyGameMode Function BP_TryStartGame ************************************

// ********** Begin Class ALobbyGameMode Function TryStartGame *************************************
struct Z_Construct_UFunction_ALobbyGameMode_TryStartGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lobby/Contents/LobbyGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function TryStartGame constinit property declarations **************************
// ********** End Function TryStartGame constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyGameMode_TryStartGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALobbyGameMode, nullptr, "TryStartGame", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyGameMode_TryStartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALobbyGameMode_TryStartGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ALobbyGameMode_TryStartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyGameMode_TryStartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALobbyGameMode::execTryStartGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryStartGame();
	P_NATIVE_END;
}
// ********** End Class ALobbyGameMode Function TryStartGame ***************************************

// ********** Begin Class ALobbyGameMode ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ALobbyGameMode;
UClass* ALobbyGameMode::GetPrivateStaticClass()
{
	using TClass = ALobbyGameMode;
	if (!Z_Registration_Info_UClass_ALobbyGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LobbyGameMode"),
			Z_Registration_Info_UClass_ALobbyGameMode.InnerSingleton,
			StaticRegisterNativesALobbyGameMode,
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
	return Z_Registration_Info_UClass_ALobbyGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ALobbyGameMode_NoRegister()
{
	return ALobbyGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALobbyGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Lobby/Contents/LobbyGameMode.h" },
		{ "ModuleRelativePath", "Lobby/Contents/LobbyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA

// ********** Begin Class ALobbyGameMode constinit property declarations ***************************
// ********** End Class ALobbyGameMode constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("TryStartGame"), .Pointer = &ALobbyGameMode::execTryStartGame },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALobbyGameMode_BP_TryStartGame, "BP_TryStartGame" }, // 4190962071
		{ &Z_Construct_UFunction_ALobbyGameMode_TryStartGame, "TryStartGame" }, // 2624267931
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ALobbyGameMode_Statics
UObject* (*const Z_Construct_UClass_ALobbyGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LastManStanding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALobbyGameMode_Statics::ClassParams = {
	&ALobbyGameMode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ALobbyGameMode_Statics::Class_MetaDataParams)
};
void ALobbyGameMode::StaticRegisterNativesALobbyGameMode()
{
	UClass* Class = ALobbyGameMode::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ALobbyGameMode_Statics::Funcs));
}
UClass* Z_Construct_UClass_ALobbyGameMode()
{
	if (!Z_Registration_Info_UClass_ALobbyGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALobbyGameMode.OuterSingleton, Z_Construct_UClass_ALobbyGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALobbyGameMode.OuterSingleton;
}
ALobbyGameMode::ALobbyGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ALobbyGameMode);
ALobbyGameMode::~ALobbyGameMode() {}
// ********** End Class ALobbyGameMode *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyGameMode_h__Script_LastManStanding_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALobbyGameMode, ALobbyGameMode::StaticClass, TEXT("ALobbyGameMode"), &Z_Registration_Info_UClass_ALobbyGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALobbyGameMode), 3507389855U) },
	};
}; // Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyGameMode_h__Script_LastManStanding_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyGameMode_h__Script_LastManStanding_593919116{
	TEXT("/Script/LastManStanding"),
	Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyGameMode_h__Script_LastManStanding_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UE5_LastManStanding_LastManStanding_Source_LastManStanding_Lobby_Contents_LobbyGameMode_h__Script_LastManStanding_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
