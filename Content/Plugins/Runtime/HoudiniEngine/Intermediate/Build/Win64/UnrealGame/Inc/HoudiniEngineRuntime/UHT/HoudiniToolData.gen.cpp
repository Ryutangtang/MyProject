// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniToolData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniToolData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniToolData();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniToolData_NoRegister();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHImageData();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HImageData;
class UScriptStruct* FHImageData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HImageData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HImageData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHImageData, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HImageData"));
	}
	return Z_Registration_Info_UScriptStruct_HImageData.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHImageData>()
{
	return FHImageData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHImageData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSlices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSlices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GammaSpace_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GammaSpace;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RawData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RawData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawDataMD5_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RawDataMD5;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHImageData_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mirrors the data from FImage\n// We make our own struct so that we have control over any struct changes \n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mirrors the data from FImage\nWe make our own struct so that we have control over any struct changes" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FHImageData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHImageData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_SizeX_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Width of the image. */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Width of the image." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHImageData, SizeX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_SizeX_MetaData), Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_SizeX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_SizeY_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Height of the image. */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Height of the image." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHImageData, SizeY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_SizeY_MetaData), Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_SizeY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_NumSlices_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of image slices. */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of image slices." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_NumSlices = { "NumSlices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHImageData, NumSlices), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_NumSlices_MetaData), Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_NumSlices_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_Format_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Format in which the image is stored. (ERawImageFormat::Type)*/" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Format in which the image is stored. (ERawImageFormat::Type)" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHImageData, Format), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_Format_MetaData), Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_Format_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_GammaSpace_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The gamma space the image is stored in. (EGammaSpace)*/" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The gamma space the image is stored in. (EGammaSpace)" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_GammaSpace = { "GammaSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHImageData, GammaSpace), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_GammaSpace_MetaData), Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_GammaSpace_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_RawData_Inner = { "RawData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_RawData_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_RawData = { "RawData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHImageData, RawData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_RawData_MetaData), Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_RawData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_RawDataMD5_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MD5 hash of the RawData **/" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MD5 hash of the RawData *" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_RawDataMD5 = { "RawDataMD5", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHImageData, RawDataMD5), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_RawDataMD5_MetaData), Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_RawDataMD5_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHImageData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_SizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_NumSlices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_Format,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_GammaSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_RawData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_RawData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHImageData_Statics::NewProp_RawDataMD5,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHImageData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HImageData",
		Z_Construct_UScriptStruct_FHImageData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHImageData_Statics::PropPointers),
		sizeof(FHImageData),
		alignof(FHImageData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHImageData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHImageData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHImageData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHImageData()
	{
		if (!Z_Registration_Info_UScriptStruct_HImageData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HImageData.InnerSingleton, Z_Construct_UScriptStruct_FHImageData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HImageData.InnerSingleton;
	}
	DEFINE_FUNCTION(UHoudiniToolData::execSaveToJSONFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveToJSONFile(Z_Param_JsonFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniToolData::execConvertToJSONData)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_JSONData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConvertToJSONData(Z_Param_Out_JSONData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniToolData::execPopulateFromJSONFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PopulateFromJSONFile(Z_Param_JsonFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniToolData::execPopulateFromJSONData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JSONData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PopulateFromJSONData(Z_Param_JSONData);
		P_NATIVE_END;
	}
	void UHoudiniToolData::StaticRegisterNativesUHoudiniToolData()
	{
		UClass* Class = UHoudiniToolData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertToJSONData", &UHoudiniToolData::execConvertToJSONData },
			{ "PopulateFromJSONData", &UHoudiniToolData::execPopulateFromJSONData },
			{ "PopulateFromJSONFile", &UHoudiniToolData::execPopulateFromJSONFile },
			{ "SaveToJSONFile", &UHoudiniToolData::execSaveToJSONFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics
	{
		struct HoudiniToolData_eventConvertToJSONData_Parms
		{
			FString JSONData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_JSONData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::NewProp_JSONData = { "JSONData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniToolData_eventConvertToJSONData_Parms, JSONData), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniToolData_eventConvertToJSONData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniToolData_eventConvertToJSONData_Parms), &Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::NewProp_JSONData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoudiniToolData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convert the data from this HoudiniTool into JSON.\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert the data from this HoudiniTool into JSON." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniToolData, nullptr, "ConvertToJSONData", nullptr, nullptr, Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::HoudiniToolData_eventConvertToJSONData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::HoudiniToolData_eventConvertToJSONData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics
	{
		struct HoudiniToolData_eventPopulateFromJSONData_Parms
		{
			FString JSONData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JSONData_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JSONData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::NewProp_JSONData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::NewProp_JSONData = { "JSONData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniToolData_eventPopulateFromJSONData_Parms, JSONData), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::NewProp_JSONData_MetaData), Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::NewProp_JSONData_MetaData) };
	void Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniToolData_eventPopulateFromJSONData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniToolData_eventPopulateFromJSONData_Parms), &Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::NewProp_JSONData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoudiniToolData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Populate this object from the given JSON data.\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Populate this object from the given JSON data." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniToolData, nullptr, "PopulateFromJSONData", nullptr, nullptr, Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::HoudiniToolData_eventPopulateFromJSONData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::HoudiniToolData_eventPopulateFromJSONData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics
	{
		struct HoudiniToolData_eventPopulateFromJSONFile_Parms
		{
			FString JsonFilePath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonFilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::NewProp_JsonFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::NewProp_JsonFilePath = { "JsonFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniToolData_eventPopulateFromJSONFile_Parms, JsonFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::NewProp_JsonFilePath_MetaData), Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::NewProp_JsonFilePath_MetaData) };
	void Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniToolData_eventPopulateFromJSONFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniToolData_eventPopulateFromJSONFile_Parms), &Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::NewProp_JsonFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoudiniToolData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Read the content of a JSON file, then populate this object.\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Read the content of a JSON file, then populate this object." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniToolData, nullptr, "PopulateFromJSONFile", nullptr, nullptr, Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::HoudiniToolData_eventPopulateFromJSONFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::HoudiniToolData_eventPopulateFromJSONFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics
	{
		struct HoudiniToolData_eventSaveToJSONFile_Parms
		{
			FString JsonFilePath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonFilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::NewProp_JsonFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::NewProp_JsonFilePath = { "JsonFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniToolData_eventSaveToJSONFile_Parms, JsonFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::NewProp_JsonFilePath_MetaData), Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::NewProp_JsonFilePath_MetaData) };
	void Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniToolData_eventSaveToJSONFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniToolData_eventSaveToJSONFile_Parms), &Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::NewProp_JsonFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoudiniToolData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// After converting the data from this object to JSON, save it to a file.\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "After converting the data from this object to JSON, save it to a file." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniToolData, nullptr, "SaveToJSONFile", nullptr, nullptr, Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::HoudiniToolData_eventSaveToJSONFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::HoudiniToolData_eventSaveToJSONFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniToolData);
	UClass* Z_Construct_UClass_UHoudiniToolData_NoRegister()
	{
		return UHoudiniToolData::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniToolData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToolTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconImageData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IconImageData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconSourcePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IconSourcePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HelpURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HelpURL;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTool_MetaData[];
#endif
		static void NewProp_DefaultTool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultTool;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceAssetPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniToolData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolData_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoudiniToolData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniToolData_ConvertToJSONData, "ConvertToJSONData" }, // 1022262345
		{ &Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONData, "PopulateFromJSONData" }, // 4181840933
		{ &Z_Construct_UFunction_UHoudiniToolData_PopulateFromJSONFile, "PopulateFromJSONFile" }, // 2233268402
		{ &Z_Construct_UFunction_UHoudiniToolData_SaveToJSONFile, "SaveToJSONFile" }, // 2850433449
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolData_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniToolData_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Houdini tool data that is cached on the Houdini Asset to allow the\n// Houdini Tools to function independently of external tool packages.\n" },
#endif
		{ "IncludePath", "HoudiniToolData.h" },
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Houdini tool data that is cached on the Houdini Asset to allow the\nHoudini Tools to function independently of external tool packages." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_Name_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name (label) to be displayed. Not to be confused with the operator type name or UAsset name */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name (label) to be displayed. Not to be confused with the operator type name or UAsset name" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_ToolTip_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The tooltip for this HDA. */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The tooltip for this HDA." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolData, ToolTip), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_ToolTip_MetaData), Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_ToolTip_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_IconImageData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Raw image data of the icon to be displayed */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Raw image data of the icon to be displayed" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_IconImageData = { "IconImageData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolData, IconImageData), Z_Construct_UScriptStruct_FHImageData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_IconImageData_MetaData), Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_IconImageData_MetaData) }; // 948137576
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_IconSourcePath_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Path from which the current icon was imported */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Path from which the current icon was imported" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_IconSourcePath = { "IconSourcePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolData, IconSourcePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_IconSourcePath_MetaData), Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_IconSourcePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_HelpURL_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The help URL for this tool */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The help URL for this tool" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_HelpURL = { "HelpURL", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolData, HelpURL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_HelpURL_MetaData), Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_HelpURL_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The type of tool, this will change how the asset handles the current selection **/" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of tool, this will change how the asset handles the current selection *" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolData, Type), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_Type_MetaData), Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_Type_MetaData) }; // 3152591551
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_DefaultTool_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** DEPRECATED: Indicate this is one of the default tools **/// TODO: Replace DefaultTool usages with the ReadOnlyTools property from the owning tools package instead.\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: Indicate this is one of the default tools *// TODO: Replace DefaultTool usages with the ReadOnlyTools property from the owning tools package instead." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_DefaultTool_SetBit(void* Obj)
	{
		((UHoudiniToolData*)Obj)->DefaultTool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_DefaultTool = { "DefaultTool", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniToolData), &Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_DefaultTool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_DefaultTool_MetaData), Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_DefaultTool_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_SelectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_SelectionType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indicate what the tool should consider for selection **/" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicate what the tool should consider for selection *" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolData, SelectionType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_SelectionType_MetaData), Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_SelectionType_MetaData) }; // 943078339
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_SourceAssetPath_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Path to the Asset used **/" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniToolData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Path to the Asset used *" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_SourceAssetPath = { "SourceAssetPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolData, SourceAssetPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_SourceAssetPath_MetaData), Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_SourceAssetPath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniToolData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_ToolTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_IconImageData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_IconSourcePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_HelpURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_DefaultTool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_SelectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_SelectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolData_Statics::NewProp_SourceAssetPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniToolData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniToolData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniToolData_Statics::ClassParams = {
		&UHoudiniToolData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHoudiniToolData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolData_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniToolData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniToolData()
	{
		if (!Z_Registration_Info_UClass_UHoudiniToolData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniToolData.OuterSingleton, Z_Construct_UClass_UHoudiniToolData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniToolData.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniToolData>()
	{
		return UHoudiniToolData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniToolData);
	UHoudiniToolData::~UHoudiniToolData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_Statics::ScriptStructInfo[] = {
		{ FHImageData::StaticStruct, Z_Construct_UScriptStruct_FHImageData_Statics::NewStructOps, TEXT("HImageData"), &Z_Registration_Info_UScriptStruct_HImageData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHImageData), 948137576U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniToolData, UHoudiniToolData::StaticClass, TEXT("UHoudiniToolData"), &Z_Registration_Info_UClass_UHoudiniToolData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniToolData), 872038010U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_1701426107(TEXT("/Script/HoudiniEngineRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
