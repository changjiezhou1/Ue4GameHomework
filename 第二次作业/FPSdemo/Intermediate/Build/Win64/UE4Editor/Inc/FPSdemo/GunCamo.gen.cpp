// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSdemo/GunCamo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunCamo() {}
// Cross Module References
	FPSDEMO_API UScriptStruct* Z_Construct_UScriptStruct_FGunCamo();
	UPackage* Z_Construct_UPackage__Script_FPSdemo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FGunCamo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FGunCamo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FGunCamo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSDEMO_API uint32 Get_Z_Construct_UScriptStruct_FGunCamo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGunCamo, Z_Construct_UPackage__Script_FPSdemo(), TEXT("GunCamo"), sizeof(FGunCamo), Get_Z_Construct_UScriptStruct_FGunCamo_Hash());
	}
	return Singleton;
}
template<> FPSDEMO_API UScriptStruct* StaticStruct<FGunCamo>()
{
	return FGunCamo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGunCamo(FGunCamo::StaticStruct, TEXT("/Script/FPSdemo"), TEXT("GunCamo"), false, nullptr, nullptr);
static struct FScriptStruct_FPSdemo_StaticRegisterNativesFGunCamo
{
	FScriptStruct_FPSdemo_StaticRegisterNativesFGunCamo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GunCamo")),new UScriptStruct::TCppStructOps<FGunCamo>);
	}
} ScriptStruct_FPSdemo_StaticRegisterNativesFGunCamo;
	struct Z_Construct_UScriptStruct_FGunCamo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamoPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CamoPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamoMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CamoMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamoThumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CamoThumbnail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamoName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CamoName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunCamo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GunCamo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGunCamo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGunCamo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunCamo_Statics::NewProp_CamoPrice_MetaData[] = {
		{ "Category", "GunCamo" },
		{ "ModuleRelativePath", "GunCamo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGunCamo_Statics::NewProp_CamoPrice = { "CamoPrice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGunCamo, CamoPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FGunCamo_Statics::NewProp_CamoPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunCamo_Statics::NewProp_CamoPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunCamo_Statics::NewProp_CamoMaterial_MetaData[] = {
		{ "Category", "GunCamo" },
		{ "Comment", "//???\xc5\xbc\xdb\xb8?\n" },
		{ "ModuleRelativePath", "GunCamo.h" },
		{ "ToolTip", "???\xc5\xbc\xdb\xb8?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGunCamo_Statics::NewProp_CamoMaterial = { "CamoMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGunCamo, CamoMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGunCamo_Statics::NewProp_CamoMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunCamo_Statics::NewProp_CamoMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunCamo_Statics::NewProp_CamoThumbnail_MetaData[] = {
		{ "Category", "GunCamo" },
		{ "Comment", "//???\xc5\xb2???\n" },
		{ "ModuleRelativePath", "GunCamo.h" },
		{ "ToolTip", "???\xc5\xb2???" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGunCamo_Statics::NewProp_CamoThumbnail = { "CamoThumbnail", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGunCamo, CamoThumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGunCamo_Statics::NewProp_CamoThumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunCamo_Statics::NewProp_CamoThumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunCamo_Statics::NewProp_CamoName_MetaData[] = {
		{ "Category", "GunCamo" },
		{ "Comment", "//????????\xcd\xbc\n" },
		{ "ModuleRelativePath", "GunCamo.h" },
		{ "ToolTip", "????????\xcd\xbc" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGunCamo_Statics::NewProp_CamoName = { "CamoName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGunCamo, CamoName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGunCamo_Statics::NewProp_CamoName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunCamo_Statics::NewProp_CamoName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGunCamo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunCamo_Statics::NewProp_CamoPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunCamo_Statics::NewProp_CamoMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunCamo_Statics::NewProp_CamoThumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunCamo_Statics::NewProp_CamoName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGunCamo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSdemo,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"GunCamo",
		sizeof(FGunCamo),
		alignof(FGunCamo),
		Z_Construct_UScriptStruct_FGunCamo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunCamo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGunCamo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunCamo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGunCamo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGunCamo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSdemo();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GunCamo"), sizeof(FGunCamo), Get_Z_Construct_UScriptStruct_FGunCamo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGunCamo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGunCamo_Hash() { return 3140049690U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
