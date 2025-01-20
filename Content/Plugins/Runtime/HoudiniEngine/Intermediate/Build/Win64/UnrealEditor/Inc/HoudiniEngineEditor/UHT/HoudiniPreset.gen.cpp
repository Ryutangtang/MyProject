// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/HoudiniPreset.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "HoudiniEngineRuntime/Private/HoudiniRuntimeSettings.h"
#include "HoudiniEngineRuntime/Public/HoudiniToolData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPreset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshBuildSettings();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPreset();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPreset_NoRegister();
	HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPresetValueType();
	HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPresetBase();
	HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject();
	HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPresetFloatValues();
	HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject();
	HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPresetInputValue();
	HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPresetIntValues();
	HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPresetMultiParmValues();
	HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint();
	HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPresetRampColorValues();
	HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint();
	HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPresetRampFloatValues();
	HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPresetStringValues();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHImageData();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniPresetValueType;
	static UEnum* EHoudiniPresetValueType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniPresetValueType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniPresetValueType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPresetValueType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("EHoudiniPresetValueType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniPresetValueType.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPresetValueType>()
	{
		return EHoudiniPresetValueType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPresetValueType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPresetValueType_Statics::Enumerators[] = {
		{ "EHoudiniPresetValueType::Invalid", (int64)EHoudiniPresetValueType::Invalid },
		{ "EHoudiniPresetValueType::Float", (int64)EHoudiniPresetValueType::Float },
		{ "EHoudiniPresetValueType::Int", (int64)EHoudiniPresetValueType::Int },
		{ "EHoudiniPresetValueType::String", (int64)EHoudiniPresetValueType::String },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPresetValueType_Statics::Enum_MetaDataParams[] = {
		{ "Float.Name", "EHoudiniPresetValueType::Float" },
		{ "Int.Name", "EHoudiniPresetValueType::Int" },
		{ "Invalid.Name", "EHoudiniPresetValueType::Invalid" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
		{ "String.Name", "EHoudiniPresetValueType::String" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPresetValueType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		nullptr,
		"EHoudiniPresetValueType",
		"EHoudiniPresetValueType",
		Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPresetValueType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPresetValueType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPresetValueType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPresetValueType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPresetValueType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniPresetValueType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniPresetValueType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPresetValueType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniPresetValueType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPresetBase;
class UScriptStruct* FHoudiniPresetBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPresetBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPresetBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPresetBase, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("HoudiniPresetBase"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPresetBase.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<FHoudiniPresetBase>()
{
	return FHoudiniPresetBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPresetBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPresetBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPresetBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPresetBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		nullptr,
		&NewStructOps,
		"HoudiniPresetBase",
		nullptr,
		0,
		sizeof(FHoudiniPresetBase),
		alignof(FHoudiniPresetBase),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPresetBase_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPresetBase()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPresetBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPresetBase.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPresetBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPresetBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FHoudiniPresetFloatValues>() == std::is_polymorphic<FHoudiniPresetBase>(), "USTRUCT FHoudiniPresetFloatValues cannot be polymorphic unless super FHoudiniPresetBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPresetFloatValues;
class UScriptStruct* FHoudiniPresetFloatValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPresetFloatValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPresetFloatValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPresetFloatValues, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("HoudiniPresetFloatValues"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPresetFloatValues.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<FHoudiniPresetFloatValues>()
{
	return FHoudiniPresetFloatValues::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPresetFloatValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetFloatValues_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPresetFloatValues_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPresetFloatValues>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetFloatValues_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetFloatValues_Statics::NewProp_Values_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetFloatValues_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPresetFloatValues, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetFloatValues_Statics::NewProp_Values_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetFloatValues_Statics::NewProp_Values_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPresetFloatValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetFloatValues_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetFloatValues_Statics::NewProp_Values,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPresetFloatValues_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		Z_Construct_UScriptStruct_FHoudiniPresetBase,
		&NewStructOps,
		"HoudiniPresetFloatValues",
		Z_Construct_UScriptStruct_FHoudiniPresetFloatValues_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetFloatValues_Statics::PropPointers),
		sizeof(FHoudiniPresetFloatValues),
		alignof(FHoudiniPresetFloatValues),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetFloatValues_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPresetFloatValues_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetFloatValues_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPresetFloatValues()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPresetFloatValues.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPresetFloatValues.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPresetFloatValues_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPresetFloatValues.InnerSingleton;
	}

static_assert(std::is_polymorphic<FHoudiniPresetIntValues>() == std::is_polymorphic<FHoudiniPresetBase>(), "USTRUCT FHoudiniPresetIntValues cannot be polymorphic unless super FHoudiniPresetBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPresetIntValues;
class UScriptStruct* FHoudiniPresetIntValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPresetIntValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPresetIntValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPresetIntValues, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("HoudiniPresetIntValues"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPresetIntValues.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<FHoudiniPresetIntValues>()
{
	return FHoudiniPresetIntValues::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPresetIntValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetIntValues_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPresetIntValues_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPresetIntValues>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetIntValues_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetIntValues_Statics::NewProp_Values_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetIntValues_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPresetIntValues, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetIntValues_Statics::NewProp_Values_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetIntValues_Statics::NewProp_Values_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPresetIntValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetIntValues_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetIntValues_Statics::NewProp_Values,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPresetIntValues_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		Z_Construct_UScriptStruct_FHoudiniPresetBase,
		&NewStructOps,
		"HoudiniPresetIntValues",
		Z_Construct_UScriptStruct_FHoudiniPresetIntValues_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetIntValues_Statics::PropPointers),
		sizeof(FHoudiniPresetIntValues),
		alignof(FHoudiniPresetIntValues),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetIntValues_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPresetIntValues_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetIntValues_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPresetIntValues()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPresetIntValues.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPresetIntValues.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPresetIntValues_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPresetIntValues.InnerSingleton;
	}

static_assert(std::is_polymorphic<FHoudiniPresetStringValues>() == std::is_polymorphic<FHoudiniPresetBase>(), "USTRUCT FHoudiniPresetStringValues cannot be polymorphic unless super FHoudiniPresetBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPresetStringValues;
class UScriptStruct* FHoudiniPresetStringValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPresetStringValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPresetStringValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPresetStringValues, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("HoudiniPresetStringValues"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPresetStringValues.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<FHoudiniPresetStringValues>()
{
	return FHoudiniPresetStringValues::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPresetStringValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetStringValues_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPresetStringValues_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPresetStringValues>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetStringValues_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetStringValues_Statics::NewProp_Values_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetStringValues_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPresetStringValues, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetStringValues_Statics::NewProp_Values_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetStringValues_Statics::NewProp_Values_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPresetStringValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetStringValues_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetStringValues_Statics::NewProp_Values,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPresetStringValues_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		Z_Construct_UScriptStruct_FHoudiniPresetBase,
		&NewStructOps,
		"HoudiniPresetStringValues",
		Z_Construct_UScriptStruct_FHoudiniPresetStringValues_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetStringValues_Statics::PropPointers),
		sizeof(FHoudiniPresetStringValues),
		alignof(FHoudiniPresetStringValues),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetStringValues_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPresetStringValues_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetStringValues_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPresetStringValues()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPresetStringValues.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPresetStringValues.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPresetStringValues_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPresetStringValues.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPresetRampFloatPoint;
class UScriptStruct* FHoudiniPresetRampFloatPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPresetRampFloatPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPresetRampFloatPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("HoudiniPresetRampFloatPoint"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPresetRampFloatPoint.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<FHoudiniPresetRampFloatPoint>()
{
	return FHoudiniPresetRampFloatPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Interpolation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Interpolation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPresetRampFloatPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPresetRampFloatPoint, Position), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::NewProp_Position_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::NewProp_Position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPresetRampFloatPoint, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::NewProp_Interpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::NewProp_Interpolation_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::NewProp_Interpolation = { "Interpolation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPresetRampFloatPoint, Interpolation), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::NewProp_Interpolation_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::NewProp_Interpolation_MetaData) }; // 1225300666
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::NewProp_Interpolation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::NewProp_Interpolation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		nullptr,
		&NewStructOps,
		"HoudiniPresetRampFloatPoint",
		Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::PropPointers),
		sizeof(FHoudiniPresetRampFloatPoint),
		alignof(FHoudiniPresetRampFloatPoint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPresetRampFloatPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPresetRampFloatPoint.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPresetRampFloatPoint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPresetRampColorPoint;
class UScriptStruct* FHoudiniPresetRampColorPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPresetRampColorPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPresetRampColorPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("HoudiniPresetRampColorPoint"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPresetRampColorPoint.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<FHoudiniPresetRampColorPoint>()
{
	return FHoudiniPresetRampColorPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Interpolation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Interpolation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPresetRampColorPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPresetRampColorPoint, Position), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::NewProp_Position_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::NewProp_Position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPresetRampColorPoint, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::NewProp_Interpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::NewProp_Interpolation_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::NewProp_Interpolation = { "Interpolation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPresetRampColorPoint, Interpolation), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::NewProp_Interpolation_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::NewProp_Interpolation_MetaData) }; // 1225300666
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::NewProp_Interpolation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::NewProp_Interpolation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		nullptr,
		&NewStructOps,
		"HoudiniPresetRampColorPoint",
		Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::PropPointers),
		sizeof(FHoudiniPresetRampColorPoint),
		alignof(FHoudiniPresetRampColorPoint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPresetRampColorPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPresetRampColorPoint.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPresetRampColorPoint.InnerSingleton;
	}

static_assert(std::is_polymorphic<FHoudiniPresetRampFloatValues>() == std::is_polymorphic<FHoudiniPresetBase>(), "USTRUCT FHoudiniPresetRampFloatValues cannot be polymorphic unless super FHoudiniPresetBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPresetRampFloatValues;
class UScriptStruct* FHoudiniPresetRampFloatValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPresetRampFloatValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPresetRampFloatValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPresetRampFloatValues, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("HoudiniPresetRampFloatValues"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPresetRampFloatValues.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<FHoudiniPresetRampFloatValues>()
{
	return FHoudiniPresetRampFloatValues::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPresetRampFloatValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetRampFloatValues_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPresetRampFloatValues_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPresetRampFloatValues>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetRampFloatValues_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint, METADATA_PARAMS(0, nullptr) }; // 3803170982
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetRampFloatValues_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetRampFloatValues_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPresetRampFloatValues, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetRampFloatValues_Statics::NewProp_Points_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetRampFloatValues_Statics::NewProp_Points_MetaData) }; // 3803170982
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPresetRampFloatValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetRampFloatValues_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetRampFloatValues_Statics::NewProp_Points,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPresetRampFloatValues_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		Z_Construct_UScriptStruct_FHoudiniPresetBase,
		&NewStructOps,
		"HoudiniPresetRampFloatValues",
		Z_Construct_UScriptStruct_FHoudiniPresetRampFloatValues_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetRampFloatValues_Statics::PropPointers),
		sizeof(FHoudiniPresetRampFloatValues),
		alignof(FHoudiniPresetRampFloatValues),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetRampFloatValues_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPresetRampFloatValues_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetRampFloatValues_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPresetRampFloatValues()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPresetRampFloatValues.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPresetRampFloatValues.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPresetRampFloatValues_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPresetRampFloatValues.InnerSingleton;
	}

static_assert(std::is_polymorphic<FHoudiniPresetRampColorValues>() == std::is_polymorphic<FHoudiniPresetBase>(), "USTRUCT FHoudiniPresetRampColorValues cannot be polymorphic unless super FHoudiniPresetBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPresetRampColorValues;
class UScriptStruct* FHoudiniPresetRampColorValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPresetRampColorValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPresetRampColorValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPresetRampColorValues, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("HoudiniPresetRampColorValues"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPresetRampColorValues.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<FHoudiniPresetRampColorValues>()
{
	return FHoudiniPresetRampColorValues::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPresetRampColorValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetRampColorValues_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPresetRampColorValues_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPresetRampColorValues>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetRampColorValues_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint, METADATA_PARAMS(0, nullptr) }; // 2948131734
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetRampColorValues_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetRampColorValues_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPresetRampColorValues, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetRampColorValues_Statics::NewProp_Points_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetRampColorValues_Statics::NewProp_Points_MetaData) }; // 2948131734
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPresetRampColorValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetRampColorValues_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetRampColorValues_Statics::NewProp_Points,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPresetRampColorValues_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		Z_Construct_UScriptStruct_FHoudiniPresetBase,
		&NewStructOps,
		"HoudiniPresetRampColorValues",
		Z_Construct_UScriptStruct_FHoudiniPresetRampColorValues_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetRampColorValues_Statics::PropPointers),
		sizeof(FHoudiniPresetRampColorValues),
		alignof(FHoudiniPresetRampColorValues),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetRampColorValues_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPresetRampColorValues_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetRampColorValues_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPresetRampColorValues()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPresetRampColorValues.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPresetRampColorValues.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPresetRampColorValues_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPresetRampColorValues.InnerSingleton;
	}

static_assert(std::is_polymorphic<FHoudiniPresetMultiParmValues>() == std::is_polymorphic<FHoudiniPresetBase>(), "USTRUCT FHoudiniPresetMultiParmValues cannot be polymorphic unless super FHoudiniPresetBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPresetMultiParmValues;
class UScriptStruct* FHoudiniPresetMultiParmValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPresetMultiParmValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPresetMultiParmValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPresetMultiParmValues, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("HoudiniPresetMultiParmValues"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPresetMultiParmValues.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<FHoudiniPresetMultiParmValues>()
{
	return FHoudiniPresetMultiParmValues::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPresetMultiParmValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetMultiParmValues_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPresetMultiParmValues_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPresetMultiParmValues>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetMultiParmValues_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetMultiParmValues_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPresetMultiParmValues, Count), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetMultiParmValues_Statics::NewProp_Count_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetMultiParmValues_Statics::NewProp_Count_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPresetMultiParmValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetMultiParmValues_Statics::NewProp_Count,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPresetMultiParmValues_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		Z_Construct_UScriptStruct_FHoudiniPresetBase,
		&NewStructOps,
		"HoudiniPresetMultiParmValues",
		Z_Construct_UScriptStruct_FHoudiniPresetMultiParmValues_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetMultiParmValues_Statics::PropPointers),
		sizeof(FHoudiniPresetMultiParmValues),
		alignof(FHoudiniPresetMultiParmValues),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetMultiParmValues_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPresetMultiParmValues_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetMultiParmValues_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPresetMultiParmValues()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPresetMultiParmValues.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPresetMultiParmValues.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPresetMultiParmValues_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPresetMultiParmValues.InnerSingleton;
	}

static_assert(std::is_polymorphic<FHoudiniPresetGeometryInputObject>() == std::is_polymorphic<FHoudiniPresetBase>(), "USTRUCT FHoudiniPresetGeometryInputObject cannot be polymorphic unless super FHoudiniPresetBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPresetGeometryInputObject;
class UScriptStruct* FHoudiniPresetGeometryInputObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPresetGeometryInputObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPresetGeometryInputObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("HoudiniPresetGeometryInputObject"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPresetGeometryInputObject.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<FHoudiniPresetGeometryInputObject>()
{
	return FHoudiniPresetGeometryInputObject::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputObject_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InputObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPresetGeometryInputObject>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject_Statics::NewProp_InputObject_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject_Statics::NewProp_InputObject = { "InputObject", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPresetGeometryInputObject, InputObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject_Statics::NewProp_InputObject_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject_Statics::NewProp_InputObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPresetGeometryInputObject, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject_Statics::NewProp_Transform_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject_Statics::NewProp_Transform_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject_Statics::NewProp_InputObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		Z_Construct_UScriptStruct_FHoudiniPresetBase,
		&NewStructOps,
		"HoudiniPresetGeometryInputObject",
		Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject_Statics::PropPointers),
		sizeof(FHoudiniPresetGeometryInputObject),
		alignof(FHoudiniPresetGeometryInputObject),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPresetGeometryInputObject.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPresetGeometryInputObject.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPresetGeometryInputObject.InnerSingleton;
	}

static_assert(std::is_polymorphic<FHoudiniPresetCurveInputObject>() == std::is_polymorphic<FHoudiniPresetBase>(), "USTRUCT FHoudiniPresetCurveInputObject cannot be polymorphic unless super FHoudiniPresetBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPresetCurveInputObject;
class UScriptStruct* FHoudiniPresetCurveInputObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPresetCurveInputObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPresetCurveInputObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("HoudiniPresetCurveInputObject"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPresetCurveInputObject.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<FHoudiniPresetCurveInputObject>()
{
	return FHoudiniPresetCurveInputObject::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurvePoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurvePoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurvePoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClosed_MetaData[];
#endif
		static void NewProp_bClosed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReversed_MetaData[];
#endif
		static void NewProp_bReversed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReversed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurveOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHoudiniSplineVisible_MetaData[];
#endif
		static void NewProp_bIsHoudiniSplineVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHoudiniSplineVisible;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_CurveType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveType;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_CurveMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveMethod;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_CurveBreakpointParameterization_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveBreakpointParameterization_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveBreakpointParameterization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOutputCurve_MetaData[];
#endif
		static void NewProp_bIsOutputCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOutputCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCookOnCurveChanged_MetaData[];
#endif
		static void NewProp_bCookOnCurveChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookOnCurveChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLegacyInputCurve_MetaData[];
#endif
		static void NewProp_bIsLegacyInputCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLegacyInputCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInputCurve_MetaData[];
#endif
		static void NewProp_bIsInputCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInputCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEditableOutputCurve_MetaData[];
#endif
		static void NewProp_bIsEditableOutputCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEditableOutputCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPresetCurveInputObject>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPresetCurveInputObject, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_Transform_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_Transform_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurvePoints_Inner = { "CurvePoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurvePoints_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurvePoints = { "CurvePoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPresetCurveInputObject, CurvePoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurvePoints_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurvePoints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bClosed_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bClosed_SetBit(void* Obj)
	{
		((FHoudiniPresetCurveInputObject*)Obj)->bClosed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bClosed = { "bClosed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniPresetCurveInputObject), &Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bClosed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bClosed_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bClosed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bReversed_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bReversed_SetBit(void* Obj)
	{
		((FHoudiniPresetCurveInputObject*)Obj)->bReversed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bReversed = { "bReversed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniPresetCurveInputObject), &Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bReversed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bReversed_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bReversed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveOrder_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveOrder = { "CurveOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPresetCurveInputObject, CurveOrder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveOrder_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveOrder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsHoudiniSplineVisible_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsHoudiniSplineVisible_SetBit(void* Obj)
	{
		((FHoudiniPresetCurveInputObject*)Obj)->bIsHoudiniSplineVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsHoudiniSplineVisible = { "bIsHoudiniSplineVisible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniPresetCurveInputObject), &Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsHoudiniSplineVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsHoudiniSplineVisible_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsHoudiniSplineVisible_MetaData) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveType_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPresetCurveInputObject, CurveType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveType_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveType_MetaData) }; // 3147282130
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveMethod_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveMethod = { "CurveMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPresetCurveInputObject, CurveMethod), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveMethod_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveMethod_MetaData) }; // 1598599947
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveBreakpointParameterization_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveBreakpointParameterization_MetaData[] = {
		{ "Category", "Houdini Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Only used for new HAPI curve / breakpoints\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only used for new HAPI curve / breakpoints" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveBreakpointParameterization = { "CurveBreakpointParameterization", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPresetCurveInputObject, CurveBreakpointParameterization), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveBreakpointParameterization_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveBreakpointParameterization_MetaData) }; // 4228577509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsOutputCurve_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsOutputCurve_SetBit(void* Obj)
	{
		((FHoudiniPresetCurveInputObject*)Obj)->bIsOutputCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsOutputCurve = { "bIsOutputCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniPresetCurveInputObject), &Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsOutputCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsOutputCurve_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsOutputCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bCookOnCurveChanged_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bCookOnCurveChanged_SetBit(void* Obj)
	{
		((FHoudiniPresetCurveInputObject*)Obj)->bCookOnCurveChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bCookOnCurveChanged = { "bCookOnCurveChanged", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniPresetCurveInputObject), &Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bCookOnCurveChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bCookOnCurveChanged_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bCookOnCurveChanged_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsLegacyInputCurve_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsLegacyInputCurve_SetBit(void* Obj)
	{
		((FHoudiniPresetCurveInputObject*)Obj)->bIsLegacyInputCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsLegacyInputCurve = { "bIsLegacyInputCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniPresetCurveInputObject), &Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsLegacyInputCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsLegacyInputCurve_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsLegacyInputCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsInputCurve_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsInputCurve_SetBit(void* Obj)
	{
		((FHoudiniPresetCurveInputObject*)Obj)->bIsInputCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsInputCurve = { "bIsInputCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniPresetCurveInputObject), &Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsInputCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsInputCurve_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsInputCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsEditableOutputCurve_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsEditableOutputCurve_SetBit(void* Obj)
	{
		((FHoudiniPresetCurveInputObject*)Obj)->bIsEditableOutputCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsEditableOutputCurve = { "bIsEditableOutputCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniPresetCurveInputObject), &Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsEditableOutputCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsEditableOutputCurve_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsEditableOutputCurve_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurvePoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurvePoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bClosed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bReversed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsHoudiniSplineVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveBreakpointParameterization_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_CurveBreakpointParameterization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsOutputCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bCookOnCurveChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsLegacyInputCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsInputCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewProp_bIsEditableOutputCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		Z_Construct_UScriptStruct_FHoudiniPresetBase,
		&NewStructOps,
		"HoudiniPresetCurveInputObject",
		Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::PropPointers),
		sizeof(FHoudiniPresetCurveInputObject),
		alignof(FHoudiniPresetCurveInputObject),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPresetCurveInputObject.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPresetCurveInputObject.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPresetCurveInputObject.InnerSingleton;
	}

static_assert(std::is_polymorphic<FHoudiniPresetInputValue>() == std::is_polymorphic<FHoudiniPresetBase>(), "USTRUCT FHoudiniPresetInputValue cannot be polymorphic unless super FHoudiniPresetBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPresetInputValue;
class UScriptStruct* FHoudiniPresetInputValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPresetInputValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPresetInputValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPresetInputValue, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("HoudiniPresetInputValue"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPresetInputValue.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<FHoudiniPresetInputValue>()
{
	return FHoudiniPresetInputValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepWorldTransform_MetaData[];
#endif
		static void NewProp_bKeepWorldTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepWorldTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPackGeometryBeforeMerging_MetaData[];
#endif
		static void NewProp_bPackGeometryBeforeMerging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPackGeometryBeforeMerging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportInputAsReference_MetaData[];
#endif
		static void NewProp_bExportInputAsReference_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportInputAsReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportLODs_MetaData[];
#endif
		static void NewProp_bExportLODs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportSockets_MetaData[];
#endif
		static void NewProp_bExportSockets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportSockets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportColliders_MetaData[];
#endif
		static void NewProp_bExportColliders_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportColliders;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportMaterialParameters_MetaData[];
#endif
		static void NewProp_bExportMaterialParameters_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportMaterialParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMergeSplineMeshComponents_MetaData[];
#endif
		static void NewProp_bMergeSplineMeshComponents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeSplineMeshComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreferNaniteFallbackMesh_MetaData[];
#endif
		static void NewProp_bPreferNaniteFallbackMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferNaniteFallbackMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsParameterInput_MetaData[];
#endif
		static void NewProp_bIsParameterInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsParameterInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeometryInputObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryInputObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeometryInputObjects;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveInputObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveInputObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveInputObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPresetInputValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bKeepWorldTransform_MetaData[] = {
		{ "Category", "Houdini Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Export Options\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Export Options" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bKeepWorldTransform_SetBit(void* Obj)
	{
		((FHoudiniPresetInputValue*)Obj)->bKeepWorldTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bKeepWorldTransform = { "bKeepWorldTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniPresetInputValue), &Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bKeepWorldTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bKeepWorldTransform_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bKeepWorldTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bPackGeometryBeforeMerging_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bPackGeometryBeforeMerging_SetBit(void* Obj)
	{
		((FHoudiniPresetInputValue*)Obj)->bPackGeometryBeforeMerging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bPackGeometryBeforeMerging = { "bPackGeometryBeforeMerging", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniPresetInputValue), &Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bPackGeometryBeforeMerging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bPackGeometryBeforeMerging_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bPackGeometryBeforeMerging_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportInputAsReference_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportInputAsReference_SetBit(void* Obj)
	{
		((FHoudiniPresetInputValue*)Obj)->bExportInputAsReference = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportInputAsReference = { "bExportInputAsReference", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniPresetInputValue), &Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportInputAsReference_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportInputAsReference_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportInputAsReference_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportLODs_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportLODs_SetBit(void* Obj)
	{
		((FHoudiniPresetInputValue*)Obj)->bExportLODs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportLODs = { "bExportLODs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniPresetInputValue), &Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportLODs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportLODs_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportLODs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportSockets_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportSockets_SetBit(void* Obj)
	{
		((FHoudiniPresetInputValue*)Obj)->bExportSockets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportSockets = { "bExportSockets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniPresetInputValue), &Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportSockets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportSockets_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportSockets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportColliders_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportColliders_SetBit(void* Obj)
	{
		((FHoudiniPresetInputValue*)Obj)->bExportColliders = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportColliders = { "bExportColliders", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniPresetInputValue), &Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportColliders_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportColliders_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportColliders_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportMaterialParameters_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportMaterialParameters_SetBit(void* Obj)
	{
		((FHoudiniPresetInputValue*)Obj)->bExportMaterialParameters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportMaterialParameters = { "bExportMaterialParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniPresetInputValue), &Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportMaterialParameters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportMaterialParameters_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportMaterialParameters_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bMergeSplineMeshComponents_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bMergeSplineMeshComponents_SetBit(void* Obj)
	{
		((FHoudiniPresetInputValue*)Obj)->bMergeSplineMeshComponents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bMergeSplineMeshComponents = { "bMergeSplineMeshComponents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniPresetInputValue), &Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bMergeSplineMeshComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bMergeSplineMeshComponents_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bMergeSplineMeshComponents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bPreferNaniteFallbackMesh_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bPreferNaniteFallbackMesh_SetBit(void* Obj)
	{
		((FHoudiniPresetInputValue*)Obj)->bPreferNaniteFallbackMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bPreferNaniteFallbackMesh = { "bPreferNaniteFallbackMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniPresetInputValue), &Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bPreferNaniteFallbackMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bPreferNaniteFallbackMesh_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bPreferNaniteFallbackMesh_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_InputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_InputType_MetaData[] = {
		{ "Category", "Houdini Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input properties\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input properties" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPresetInputValue, InputType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_InputType_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_InputType_MetaData) }; // 1680800299
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bIsParameterInput_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bIsParameterInput_SetBit(void* Obj)
	{
		((FHoudiniPresetInputValue*)Obj)->bIsParameterInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bIsParameterInput = { "bIsParameterInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniPresetInputValue), &Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bIsParameterInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bIsParameterInput_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bIsParameterInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPresetInputValue, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_ParameterName_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_ParameterName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_InputIndex_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_InputIndex = { "InputIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPresetInputValue, InputIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_InputIndex_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_InputIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_GeometryInputObjects_Inner = { "GeometryInputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject, METADATA_PARAMS(0, nullptr) }; // 172963958
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_GeometryInputObjects_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_GeometryInputObjects = { "GeometryInputObjects", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPresetInputValue, GeometryInputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_GeometryInputObjects_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_GeometryInputObjects_MetaData) }; // 172963958
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_CurveInputObjects_Inner = { "CurveInputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject, METADATA_PARAMS(0, nullptr) }; // 3713242942
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_CurveInputObjects_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_CurveInputObjects = { "CurveInputObjects", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPresetInputValue, CurveInputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_CurveInputObjects_MetaData), Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_CurveInputObjects_MetaData) }; // 3713242942
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bKeepWorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bPackGeometryBeforeMerging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportInputAsReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportSockets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportColliders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bExportMaterialParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bMergeSplineMeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bPreferNaniteFallbackMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_InputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_InputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_bIsParameterInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_InputIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_GeometryInputObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_GeometryInputObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_CurveInputObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewProp_CurveInputObjects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		Z_Construct_UScriptStruct_FHoudiniPresetBase,
		&NewStructOps,
		"HoudiniPresetInputValue",
		Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::PropPointers),
		sizeof(FHoudiniPresetInputValue),
		alignof(FHoudiniPresetInputValue),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPresetInputValue()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPresetInputValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPresetInputValue.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPresetInputValue.InnerSingleton;
	}
	void UHoudiniPreset::StaticRegisterNativesUHoudiniPreset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPreset);
	UClass* Z_Construct_UClass_UHoudiniPreset_NoRegister()
	{
		return UHoudiniPreset::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceHoudiniAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceHoudiniAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRevertHDAParameters_MetaData[];
#endif
		static void NewProp_bRevertHDAParameters_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRevertHDAParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHidePreset_MetaData[];
#endif
		static void NewProp_bHidePreset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidePreset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyOnlyToSource_MetaData[];
#endif
		static void NewProp_bApplyOnlyToSource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyOnlyToSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanInstantiate_MetaData[];
#endif
		static void NewProp_bCanInstantiate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanInstantiate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyTemporaryCookFolder_MetaData[];
#endif
		static void NewProp_bApplyTemporaryCookFolder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyTemporaryCookFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemporaryCookFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TemporaryCookFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyBakeFolder_MetaData[];
#endif
		static void NewProp_bApplyBakeFolder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyBakeFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BakeFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyBakeOptions_MetaData[];
#endif
		static void NewProp_bApplyBakeOptions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyBakeOptions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HoudiniEngineBakeOption_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniEngineBakeOption_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HoudiniEngineBakeOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveOutputAfterBake_MetaData[];
#endif
		static void NewProp_bRemoveOutputAfterBake_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveOutputAfterBake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecenterBakedActors_MetaData[];
#endif
		static void NewProp_bRecenterBakedActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecenterBakedActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoBake_MetaData[];
#endif
		static void NewProp_bAutoBake_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoBake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplacePreviousBake_MetaData[];
#endif
		static void NewProp_bReplacePreviousBake_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplacePreviousBake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyAssetOptions_MetaData[];
#endif
		static void NewProp_bApplyAssetOptions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyAssetOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCookOnParameterChange_MetaData[];
#endif
		static void NewProp_bCookOnParameterChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookOnParameterChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCookOnTransformChange_MetaData[];
#endif
		static void NewProp_bCookOnTransformChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookOnTransformChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCookOnAssetInputCook_MetaData[];
#endif
		static void NewProp_bCookOnAssetInputCook_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookOnAssetInputCook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoNotGenerateOutputs_MetaData[];
#endif
		static void NewProp_bDoNotGenerateOutputs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoNotGenerateOutputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseOutputNodes_MetaData[];
#endif
		static void NewProp_bUseOutputNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOutputNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOutputTemplateGeos_MetaData[];
#endif
		static void NewProp_bOutputTemplateGeos_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputTemplateGeos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUploadTransformsToHoudiniEngine_MetaData[];
#endif
		static void NewProp_bUploadTransformsToHoudiniEngine_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUploadTransformsToHoudiniEngine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeUseTempLayers_MetaData[];
#endif
		static void NewProp_bLandscapeUseTempLayers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeUseTempLayers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatParameters_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FloatParameters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatParameters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FloatParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntParameters_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_IntParameters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntParameters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_IntParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StringParameters_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringParameters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringParameters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StringParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RampFloatParameters_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RampFloatParameters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RampFloatParameters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RampFloatParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RampColorParameters_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RampColorParameters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RampColorParameters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RampColorParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultiParmParameters_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MultiParmParameters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiParmParameters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MultiParmParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyStaticMeshGenSettings_MetaData[];
#endif
		static void NewProp_bApplyStaticMeshGenSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyStaticMeshGenSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshGenerationProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshGenerationProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshBuildSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshBuildSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyProxyMeshGenSettings_MetaData[];
#endif
		static void NewProp_bApplyProxyMeshGenSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyProxyMeshGenSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideGlobalProxyStaticMeshSettings_MetaData[];
#endif
		static void NewProp_bOverrideGlobalProxyStaticMeshSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideGlobalProxyStaticMeshSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshOverride_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMeshOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementByTimerOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconImageData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IconImageData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "HoudiniPreset.h" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Houdini Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The label for this preset\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The label for this preset" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPreset, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Houdini Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A description for this preset\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
		{ "MultiLine", "true" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A description for this preset" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPreset, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_Description_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_SourceHoudiniAsset_MetaData[] = {
		{ "Category", "Houdini Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The HoudiniAsset linked to this preset.\n// Should this be a soft object pointer instead?\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The HoudiniAsset linked to this preset.\nShould this be a soft object pointer instead?" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_SourceHoudiniAsset = { "SourceHoudiniAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPreset, SourceHoudiniAsset), Z_Construct_UClass_UHoudiniAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_SourceHoudiniAsset_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_SourceHoudiniAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bRevertHDAParameters_MetaData[] = {
		{ "Category", "Houdini Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether the revert all parameters on the HDA to their default values before applying this preset\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the revert all parameters on the HDA to their default values before applying this preset" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bRevertHDAParameters_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bRevertHDAParameters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bRevertHDAParameters = { "bRevertHDAParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bRevertHDAParameters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bRevertHDAParameters_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bRevertHDAParameters_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bHidePreset_MetaData[] = {
		{ "Category", "Houdini Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to treat this preset as hidden (hide from preset menus and will be not be visible in HoudiniTools Panel). \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to treat this preset as hidden (hide from preset menus and will be not be visible in HoudiniTools Panel)." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bHidePreset_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bHidePreset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bHidePreset = { "bHidePreset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bHidePreset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bHidePreset_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bHidePreset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyOnlyToSource_MetaData[] = {
		{ "Category", "Houdini Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether this preset can be applied to any HDA, or only the SourceHoudiniAsset.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this preset can be applied to any HDA, or only the SourceHoudiniAsset." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyOnlyToSource_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bApplyOnlyToSource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyOnlyToSource = { "bApplyOnlyToSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyOnlyToSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyOnlyToSource_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyOnlyToSource_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCanInstantiate_MetaData[] = {
		{ "Category", "Houdini Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether this preset be instantiated (using the SourceHoudiniAsset).\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this preset be instantiated (using the SourceHoudiniAsset)." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCanInstantiate_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bCanInstantiate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCanInstantiate = { "bCanInstantiate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCanInstantiate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCanInstantiate_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCanInstantiate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyTemporaryCookFolder_MetaData[] = {
		{ "Category", "Houdini Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cook and Bake Folders\n// We add toggles specifically for temp/bake folders since we might want to\n// control them separately respective options groups.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cook and Bake Folders\nWe add toggles specifically for temp/bake folders since we might want to\ncontrol them separately respective options groups." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyTemporaryCookFolder_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bApplyTemporaryCookFolder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyTemporaryCookFolder = { "bApplyTemporaryCookFolder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyTemporaryCookFolder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyTemporaryCookFolder_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyTemporaryCookFolder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_TemporaryCookFolder_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_TemporaryCookFolder = { "TemporaryCookFolder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPreset, TemporaryCookFolder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_TemporaryCookFolder_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_TemporaryCookFolder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyBakeFolder_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyBakeFolder_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bApplyBakeFolder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyBakeFolder = { "bApplyBakeFolder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyBakeFolder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyBakeFolder_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyBakeFolder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_BakeFolder_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_BakeFolder = { "BakeFolder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPreset, BakeFolder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_BakeFolder_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_BakeFolder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyBakeOptions_MetaData[] = {
		{ "Category", "Houdini Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bake Options\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bake Options" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyBakeOptions_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bApplyBakeOptions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyBakeOptions = { "bApplyBakeOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyBakeOptions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyBakeOptions_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyBakeOptions_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_HoudiniEngineBakeOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_HoudiniEngineBakeOption_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_HoudiniEngineBakeOption = { "HoudiniEngineBakeOption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPreset, HoudiniEngineBakeOption), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_HoudiniEngineBakeOption_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_HoudiniEngineBakeOption_MetaData) }; // 2157600132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bRemoveOutputAfterBake_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bRemoveOutputAfterBake_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bRemoveOutputAfterBake = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bRemoveOutputAfterBake = { "bRemoveOutputAfterBake", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bRemoveOutputAfterBake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bRemoveOutputAfterBake_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bRemoveOutputAfterBake_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bRecenterBakedActors_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bRecenterBakedActors_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bRecenterBakedActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bRecenterBakedActors = { "bRecenterBakedActors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bRecenterBakedActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bRecenterBakedActors_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bRecenterBakedActors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bAutoBake_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bAutoBake_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bAutoBake = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bAutoBake = { "bAutoBake", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bAutoBake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bAutoBake_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bAutoBake_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bReplacePreviousBake_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bReplacePreviousBake_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bReplacePreviousBake = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bReplacePreviousBake = { "bReplacePreviousBake", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bReplacePreviousBake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bReplacePreviousBake_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bReplacePreviousBake_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyAssetOptions_MetaData[] = {
		{ "Category", "Houdini Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Asset Options\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asset Options" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyAssetOptions_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bApplyAssetOptions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyAssetOptions = { "bApplyAssetOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyAssetOptions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyAssetOptions_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyAssetOptions_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCookOnParameterChange_MetaData[] = {
		{ "Category", "Houdini Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Asset Options - Cook Triggers\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asset Options - Cook Triggers" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCookOnParameterChange_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bCookOnParameterChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCookOnParameterChange = { "bCookOnParameterChange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCookOnParameterChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCookOnParameterChange_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCookOnParameterChange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCookOnTransformChange_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCookOnTransformChange_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bCookOnTransformChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCookOnTransformChange = { "bCookOnTransformChange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCookOnTransformChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCookOnTransformChange_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCookOnTransformChange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCookOnAssetInputCook_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCookOnAssetInputCook_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bCookOnAssetInputCook = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCookOnAssetInputCook = { "bCookOnAssetInputCook", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCookOnAssetInputCook_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCookOnAssetInputCook_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCookOnAssetInputCook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bDoNotGenerateOutputs_MetaData[] = {
		{ "Category", "Houdini Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Asset Options - Outputs\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asset Options - Outputs" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bDoNotGenerateOutputs_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bDoNotGenerateOutputs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bDoNotGenerateOutputs = { "bDoNotGenerateOutputs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bDoNotGenerateOutputs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bDoNotGenerateOutputs_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bDoNotGenerateOutputs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bUseOutputNodes_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bUseOutputNodes_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bUseOutputNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bUseOutputNodes = { "bUseOutputNodes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bUseOutputNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bUseOutputNodes_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bUseOutputNodes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bOutputTemplateGeos_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bOutputTemplateGeos_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bOutputTemplateGeos = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bOutputTemplateGeos = { "bOutputTemplateGeos", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bOutputTemplateGeos_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bOutputTemplateGeos_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bOutputTemplateGeos_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bUploadTransformsToHoudiniEngine_MetaData[] = {
		{ "Category", "Houdini Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Asset Options - Misc\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asset Options - Misc" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bUploadTransformsToHoudiniEngine_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bUploadTransformsToHoudiniEngine = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bUploadTransformsToHoudiniEngine = { "bUploadTransformsToHoudiniEngine", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bUploadTransformsToHoudiniEngine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bUploadTransformsToHoudiniEngine_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bUploadTransformsToHoudiniEngine_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bLandscapeUseTempLayers_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bLandscapeUseTempLayers_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bLandscapeUseTempLayers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bLandscapeUseTempLayers = { "bLandscapeUseTempLayers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bLandscapeUseTempLayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bLandscapeUseTempLayers_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bLandscapeUseTempLayers_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_FloatParameters_ValueProp = { "FloatParameters", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FHoudiniPresetFloatValues, METADATA_PARAMS(0, nullptr) }; // 2205884504
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_FloatParameters_Key_KeyProp = { "FloatParameters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_FloatParameters_MetaData[] = {
		{ "Category", "Houdini Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Parameters\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parameters" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_FloatParameters = { "FloatParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPreset, FloatParameters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_FloatParameters_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_FloatParameters_MetaData) }; // 2205884504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_IntParameters_ValueProp = { "IntParameters", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FHoudiniPresetIntValues, METADATA_PARAMS(0, nullptr) }; // 763451577
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_IntParameters_Key_KeyProp = { "IntParameters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_IntParameters_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_IntParameters = { "IntParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPreset, IntParameters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_IntParameters_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_IntParameters_MetaData) }; // 763451577
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_StringParameters_ValueProp = { "StringParameters", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FHoudiniPresetStringValues, METADATA_PARAMS(0, nullptr) }; // 3533338166
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_StringParameters_Key_KeyProp = { "StringParameters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_StringParameters_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_StringParameters = { "StringParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPreset, StringParameters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_StringParameters_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_StringParameters_MetaData) }; // 3533338166
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_RampFloatParameters_ValueProp = { "RampFloatParameters", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FHoudiniPresetRampFloatValues, METADATA_PARAMS(0, nullptr) }; // 878843636
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_RampFloatParameters_Key_KeyProp = { "RampFloatParameters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_RampFloatParameters_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_RampFloatParameters = { "RampFloatParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPreset, RampFloatParameters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_RampFloatParameters_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_RampFloatParameters_MetaData) }; // 878843636
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_RampColorParameters_ValueProp = { "RampColorParameters", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FHoudiniPresetRampColorValues, METADATA_PARAMS(0, nullptr) }; // 2703190729
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_RampColorParameters_Key_KeyProp = { "RampColorParameters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_RampColorParameters_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_RampColorParameters = { "RampColorParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPreset, RampColorParameters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_RampColorParameters_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_RampColorParameters_MetaData) }; // 2703190729
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_MultiParmParameters_ValueProp = { "MultiParmParameters", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FHoudiniPresetMultiParmValues, METADATA_PARAMS(0, nullptr) }; // 2695950492
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_MultiParmParameters_Key_KeyProp = { "MultiParmParameters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_MultiParmParameters_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_MultiParmParameters = { "MultiParmParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPreset, MultiParmParameters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_MultiParmParameters_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_MultiParmParameters_MetaData) }; // 2695950492
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_InputParameters_Inner = { "InputParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniPresetInputValue, METADATA_PARAMS(0, nullptr) }; // 4254544058
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_InputParameters_MetaData[] = {
		{ "Category", "Houdini Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Inputs\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inputs" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_InputParameters = { "InputParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPreset, InputParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_InputParameters_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_InputParameters_MetaData) }; // 4254544058
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyStaticMeshGenSettings_MetaData[] = {
		{ "Category", "Houdini Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Static Mesh Generation Settings\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static Mesh Generation Settings" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyStaticMeshGenSettings_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bApplyStaticMeshGenSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyStaticMeshGenSettings = { "bApplyStaticMeshGenSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyStaticMeshGenSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyStaticMeshGenSettings_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyStaticMeshGenSettings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_StaticMeshGenerationProperties_MetaData[] = {
		{ "Category", "Houdini Preset" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_StaticMeshGenerationProperties = { "StaticMeshGenerationProperties", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPreset, StaticMeshGenerationProperties), Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_StaticMeshGenerationProperties_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_StaticMeshGenerationProperties_MetaData) }; // 1000537116
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_StaticMeshBuildSettings_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_StaticMeshBuildSettings = { "StaticMeshBuildSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPreset, StaticMeshBuildSettings), Z_Construct_UScriptStruct_FMeshBuildSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_StaticMeshBuildSettings_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_StaticMeshBuildSettings_MetaData) }; // 355218355
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyProxyMeshGenSettings_MetaData[] = {
		{ "Category", "Houdini Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Proxy Mesh Gen Settings\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Proxy Mesh Gen Settings" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyProxyMeshGenSettings_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bApplyProxyMeshGenSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyProxyMeshGenSettings = { "bApplyProxyMeshGenSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyProxyMeshGenSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyProxyMeshGenSettings_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyProxyMeshGenSettings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings_MetaData[] = {
		{ "Category", "HoudiniProxyMeshGeneration" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bOverrideGlobalProxyStaticMeshSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings = { "bOverrideGlobalProxyStaticMeshSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshOverride_MetaData[] = {
		{ "Category", "HoudiniProxyMeshGeneration" },
		{ "DisplayName", "Enable Proxy Static Mesh" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshOverride_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bEnableProxyStaticMeshOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshOverride = { "bEnableProxyStaticMeshOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshOverride_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_MetaData[] = {
		{ "Category", "HoudiniProxyMeshGeneration" },
		{ "DisplayName", "Refine Proxy Static Meshes After a Timeout" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bEnableProxyStaticMeshRefinementByTimerOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride = { "bEnableProxyStaticMeshRefinementByTimerOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride_MetaData[] = {
		{ "Category", "HoudiniProxyMeshGeneration" },
		{ "DisplayName", "Proxy Mesh Auto Refine Timeout Seconds" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride = { "ProxyMeshAutoRefineTimeoutSecondsOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPreset, ProxyMeshAutoRefineTimeoutSecondsOverride), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_MetaData[] = {
		{ "Category", "HoudiniProxyMeshGeneration" },
		{ "DisplayName", "Refine Proxy Static Meshes When Saving a Map" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride = { "bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_MetaData[] = {
		{ "Category", "HoudiniProxyMeshGeneration" },
		{ "DisplayName", "Refine Proxy Static Meshes On PIE" },
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_SetBit(void* Obj)
	{
		((UHoudiniPreset*)Obj)->bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride = { "bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPreset), &Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_IconImageData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Raw image data of the icon to be displayed\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Raw image data of the icon to be displayed" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_IconImageData = { "IconImageData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPreset, IconImageData), Z_Construct_UScriptStruct_FHImageData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_IconImageData_MetaData), Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_IconImageData_MetaData) }; // 948137576
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_SourceHoudiniAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bRevertHDAParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bHidePreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyOnlyToSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCanInstantiate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyTemporaryCookFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_TemporaryCookFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyBakeFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_BakeFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyBakeOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_HoudiniEngineBakeOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_HoudiniEngineBakeOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bRemoveOutputAfterBake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bRecenterBakedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bAutoBake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bReplacePreviousBake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyAssetOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCookOnParameterChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCookOnTransformChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bCookOnAssetInputCook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bDoNotGenerateOutputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bUseOutputNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bOutputTemplateGeos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bUploadTransformsToHoudiniEngine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bLandscapeUseTempLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_FloatParameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_FloatParameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_FloatParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_IntParameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_IntParameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_IntParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_StringParameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_StringParameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_StringParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_RampFloatParameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_RampFloatParameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_RampFloatParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_RampColorParameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_RampColorParameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_RampColorParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_MultiParmParameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_MultiParmParameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_MultiParmParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_InputParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_InputParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyStaticMeshGenSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_StaticMeshGenerationProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_StaticMeshBuildSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bApplyProxyMeshGenSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPreset_Statics::NewProp_IconImageData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPreset_Statics::ClassParams = {
		&UHoudiniPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPreset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPreset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniPreset()
	{
		if (!Z_Registration_Info_UClass_UHoudiniPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPreset.OuterSingleton, Z_Construct_UClass_UHoudiniPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniPreset.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPreset>()
	{
		return UHoudiniPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPreset);
	UHoudiniPreset::~UHoudiniPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPreset_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPreset_h_Statics::EnumInfo[] = {
		{ EHoudiniPresetValueType_StaticEnum, TEXT("EHoudiniPresetValueType"), &Z_Registration_Info_UEnum_EHoudiniPresetValueType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3800736228U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPreset_h_Statics::ScriptStructInfo[] = {
		{ FHoudiniPresetBase::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPresetBase_Statics::NewStructOps, TEXT("HoudiniPresetBase"), &Z_Registration_Info_UScriptStruct_HoudiniPresetBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPresetBase), 1652200804U) },
		{ FHoudiniPresetFloatValues::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPresetFloatValues_Statics::NewStructOps, TEXT("HoudiniPresetFloatValues"), &Z_Registration_Info_UScriptStruct_HoudiniPresetFloatValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPresetFloatValues), 2205884504U) },
		{ FHoudiniPresetIntValues::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPresetIntValues_Statics::NewStructOps, TEXT("HoudiniPresetIntValues"), &Z_Registration_Info_UScriptStruct_HoudiniPresetIntValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPresetIntValues), 763451577U) },
		{ FHoudiniPresetStringValues::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPresetStringValues_Statics::NewStructOps, TEXT("HoudiniPresetStringValues"), &Z_Registration_Info_UScriptStruct_HoudiniPresetStringValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPresetStringValues), 3533338166U) },
		{ FHoudiniPresetRampFloatPoint::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPresetRampFloatPoint_Statics::NewStructOps, TEXT("HoudiniPresetRampFloatPoint"), &Z_Registration_Info_UScriptStruct_HoudiniPresetRampFloatPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPresetRampFloatPoint), 3803170982U) },
		{ FHoudiniPresetRampColorPoint::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPresetRampColorPoint_Statics::NewStructOps, TEXT("HoudiniPresetRampColorPoint"), &Z_Registration_Info_UScriptStruct_HoudiniPresetRampColorPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPresetRampColorPoint), 2948131734U) },
		{ FHoudiniPresetRampFloatValues::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPresetRampFloatValues_Statics::NewStructOps, TEXT("HoudiniPresetRampFloatValues"), &Z_Registration_Info_UScriptStruct_HoudiniPresetRampFloatValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPresetRampFloatValues), 878843636U) },
		{ FHoudiniPresetRampColorValues::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPresetRampColorValues_Statics::NewStructOps, TEXT("HoudiniPresetRampColorValues"), &Z_Registration_Info_UScriptStruct_HoudiniPresetRampColorValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPresetRampColorValues), 2703190729U) },
		{ FHoudiniPresetMultiParmValues::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPresetMultiParmValues_Statics::NewStructOps, TEXT("HoudiniPresetMultiParmValues"), &Z_Registration_Info_UScriptStruct_HoudiniPresetMultiParmValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPresetMultiParmValues), 2695950492U) },
		{ FHoudiniPresetGeometryInputObject::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPresetGeometryInputObject_Statics::NewStructOps, TEXT("HoudiniPresetGeometryInputObject"), &Z_Registration_Info_UScriptStruct_HoudiniPresetGeometryInputObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPresetGeometryInputObject), 172963958U) },
		{ FHoudiniPresetCurveInputObject::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPresetCurveInputObject_Statics::NewStructOps, TEXT("HoudiniPresetCurveInputObject"), &Z_Registration_Info_UScriptStruct_HoudiniPresetCurveInputObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPresetCurveInputObject), 3713242942U) },
		{ FHoudiniPresetInputValue::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPresetInputValue_Statics::NewStructOps, TEXT("HoudiniPresetInputValue"), &Z_Registration_Info_UScriptStruct_HoudiniPresetInputValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPresetInputValue), 4254544058U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPreset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPreset, UHoudiniPreset::StaticClass, TEXT("UHoudiniPreset"), &Z_Registration_Info_UClass_UHoudiniPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPreset), 1039231391U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPreset_h_3364940068(TEXT("/Script/HoudiniEngineEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPreset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPreset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPreset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPreset_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPreset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPreset_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
