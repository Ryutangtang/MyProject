// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniInputTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputTypes() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInputObjectSettings();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniXformType;
	static UEnum* EHoudiniXformType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniXformType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniXformType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniXformType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniXformType.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniXformType>()
	{
		return EHoudiniXformType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::Enumerators[] = {
		{ "EHoudiniXformType::None", (int64)EHoudiniXformType::None },
		{ "EHoudiniXformType::IntoThisObject", (int64)EHoudiniXformType::IntoThisObject },
		{ "EHoudiniXformType::Auto", (int64)EHoudiniXformType::Auto },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::Enum_MetaDataParams[] = {
		{ "Auto.Name", "EHoudiniXformType::Auto" },
		{ "IntoThisObject.Name", "EHoudiniXformType::IntoThisObject" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "None.Name", "EHoudiniXformType::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EHoudiniXformType",
		"EHoudiniXformType",
		Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniXformType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniXformType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniXformType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniInputObjectSettings;
class UScriptStruct* FHoudiniInputObjectSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniInputObjectSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniInputObjectSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniInputObjectSettings"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniInputObjectSettings.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniInputObjectSettings>()
{
	return FHoudiniInputObjectSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_KeepWorldTransform_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeepWorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_KeepWorldTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReference_MetaData[];
#endif
		static void NewProp_bImportAsReference_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReferenceRotScaleEnabled_MetaData[];
#endif
		static void NewProp_bImportAsReferenceRotScaleEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsReferenceRotScaleEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReferenceBboxEnabled_MetaData[];
#endif
		static void NewProp_bImportAsReferenceBboxEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsReferenceBboxEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReferenceMaterialEnabled_MetaData[];
#endif
		static void NewProp_bImportAsReferenceMaterialEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsReferenceMaterialEnabled;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreferNaniteFallbackMesh_MetaData[];
#endif
		static void NewProp_bPreferNaniteFallbackMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferNaniteFallbackMesh;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddRotAndScaleAttributesOnCurves_MetaData[];
#endif
		static void NewProp_bAddRotAndScaleAttributesOnCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddRotAndScaleAttributesOnCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyInputCurves_MetaData[];
#endif
		static void NewProp_bUseLegacyInputCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyInputCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnrealSplineResolution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnrealSplineResolution;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LandscapeExportType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeExportType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LandscapeExportType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportSelectionOnly_MetaData[];
#endif
		static void NewProp_bLandscapeExportSelectionOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportSelectionOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeAutoSelectComponent_MetaData[];
#endif
		static void NewProp_bLandscapeAutoSelectComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeAutoSelectComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportMaterials_MetaData[];
#endif
		static void NewProp_bLandscapeExportMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportLighting_MetaData[];
#endif
		static void NewProp_bLandscapeExportLighting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportLighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportNormalizedUVs_MetaData[];
#endif
		static void NewProp_bLandscapeExportNormalizedUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportNormalizedUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportTileUVs_MetaData[];
#endif
		static void NewProp_bLandscapeExportTileUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportTileUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeAutoSelectSplines_MetaData[];
#endif
		static void NewProp_bLandscapeAutoSelectSplines_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeAutoSelectSplines;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeSplinesExportControlPoints_MetaData[];
#endif
		static void NewProp_bLandscapeSplinesExportControlPoints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeSplinesExportControlPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeSplinesExportLeftRightCurves_MetaData[];
#endif
		static void NewProp_bLandscapeSplinesExportLeftRightCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeSplinesExportLeftRightCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeSplinesExportSplineMeshComponents_MetaData[];
#endif
		static void NewProp_bLandscapeSplinesExportSplineMeshComponents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeSplinesExportSplineMeshComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMergeSplineMeshComponents_MetaData[];
#endif
		static void NewProp_bMergeSplineMeshComponents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeSplineMeshComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportHeightDataPerEditLayer_MetaData[];
#endif
		static void NewProp_bExportHeightDataPerEditLayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportHeightDataPerEditLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportPaintLayersPerEditLayer_MetaData[];
#endif
		static void NewProp_bExportPaintLayersPerEditLayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportPaintLayersPerEditLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportMergedPaintLayers_MetaData[];
#endif
		static void NewProp_bExportMergedPaintLayers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportMergedPaintLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportLevelInstanceContent_MetaData[];
#endif
		static void NewProp_bExportLevelInstanceContent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportLevelInstanceContent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Struct of input settings that affect object exporting to Houdini\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct of input settings that affect object exporting to Houdini" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniInputObjectSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_KeepWorldTransform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_KeepWorldTransform_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_KeepWorldTransform = { "KeepWorldTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInputObjectSettings, KeepWorldTransform), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_KeepWorldTransform_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_KeepWorldTransform_MetaData) }; // 2069214948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReference_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates that all the input objects are imported to Houdini as references instead of actual geo\n// (for Geo/World/Asset input types only)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates that all the input objects are imported to Houdini as references instead of actual geo\n(for Geo/World/Asset input types only)" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReference_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bImportAsReference = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReference = { "bImportAsReference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReference_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReference_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReference_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceRotScaleEnabled_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates that whether or not to add the rot / scale attributes for reference imports\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates that whether or not to add the rot / scale attributes for reference imports" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceRotScaleEnabled_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bImportAsReferenceRotScaleEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceRotScaleEnabled = { "bImportAsReferenceRotScaleEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceRotScaleEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceRotScaleEnabled_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceRotScaleEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceBboxEnabled_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates whether or not to add bbox attributes for reference imports\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether or not to add bbox attributes for reference imports" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceBboxEnabled_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bImportAsReferenceBboxEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceBboxEnabled = { "bImportAsReferenceBboxEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceBboxEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceBboxEnabled_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceBboxEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceMaterialEnabled_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates whether or not to add material attributes for reference imports\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether or not to add material attributes for reference imports" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceMaterialEnabled_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bImportAsReferenceMaterialEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceMaterialEnabled = { "bImportAsReferenceMaterialEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceMaterialEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceMaterialEnabled_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceMaterialEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLODs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates that all LODs in the input should be marshalled to Houdini\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates that all LODs in the input should be marshalled to Houdini" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLODs_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bExportLODs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLODs = { "bExportLODs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLODs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLODs_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLODs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportSockets_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates that all sockets in the input should be marshalled to Houdini\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates that all sockets in the input should be marshalled to Houdini" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportSockets_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bExportSockets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportSockets = { "bExportSockets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportSockets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportSockets_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportSockets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bPreferNaniteFallbackMesh_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Override property for preferring the Nanite fallback mesh when using a Nanite geometry as input\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override property for preferring the Nanite fallback mesh when using a Nanite geometry as input" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bPreferNaniteFallbackMesh_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bPreferNaniteFallbackMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bPreferNaniteFallbackMesh = { "bPreferNaniteFallbackMesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bPreferNaniteFallbackMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bPreferNaniteFallbackMesh_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bPreferNaniteFallbackMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportColliders_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates that all colliders in the input should be marshalled to Houdini\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates that all colliders in the input should be marshalled to Houdini" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportColliders_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bExportColliders = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportColliders = { "bExportColliders", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportColliders_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportColliders_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportColliders_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMaterialParameters_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates that material parameters should be exported as attributes\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates that material parameters should be exported as attributes" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMaterialParameters_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bExportMaterialParameters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMaterialParameters = { "bExportMaterialParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMaterialParameters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMaterialParameters_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMaterialParameters_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set this to true to add rot and scale attributes on curve inputs.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set this to true to add rot and scale attributes on curve inputs." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bAddRotAndScaleAttributesOnCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves = { "bAddRotAndScaleAttributesOnCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bUseLegacyInputCurves_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set this to true to use legacy (curve::1.0) input curves\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set this to true to use legacy (curve::1.0) input curves" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bUseLegacyInputCurves_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bUseLegacyInputCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bUseLegacyInputCurves = { "bUseLegacyInputCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bUseLegacyInputCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bUseLegacyInputCurves_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bUseLegacyInputCurves_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_UnrealSplineResolution_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Resolution used when converting unreal splines to houdini curves\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resolution used when converting unreal splines to houdini curves" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_UnrealSplineResolution = { "UnrealSplineResolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInputObjectSettings, UnrealSplineResolution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_UnrealSplineResolution_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_UnrealSplineResolution_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_LandscapeExportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_LandscapeExportType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates if the landscape should be exported as heightfield, mesh or points\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates if the landscape should be exported as heightfield, mesh or points" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_LandscapeExportType = { "LandscapeExportType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInputObjectSettings, LandscapeExportType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_LandscapeExportType_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_LandscapeExportType_MetaData) }; // 24726055
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportSelectionOnly_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is set to true when landscape input is set to selection only.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is set to true when landscape input is set to selection only." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportSelectionOnly_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bLandscapeExportSelectionOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportSelectionOnly = { "bLandscapeExportSelectionOnly", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportSelectionOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportSelectionOnly_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportSelectionOnly_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is set to true when the automatic selection of landscape component is active\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is set to true when the automatic selection of landscape component is active" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectComponent_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bLandscapeAutoSelectComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectComponent = { "bLandscapeAutoSelectComponent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectComponent_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportMaterials_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is set to true when materials are to be exported.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is set to true when materials are to be exported." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportMaterials_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bLandscapeExportMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportMaterials = { "bLandscapeExportMaterials", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportMaterials_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportMaterials_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportLighting_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is set to true when lightmap information export is desired.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is set to true when lightmap information export is desired." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportLighting_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bLandscapeExportLighting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportLighting = { "bLandscapeExportLighting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportLighting_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportLighting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportNormalizedUVs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is set to true when uvs should be exported in [0,1] space.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is set to true when uvs should be exported in [0,1] space." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportNormalizedUVs_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bLandscapeExportNormalizedUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportNormalizedUVs = { "bLandscapeExportNormalizedUVs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportNormalizedUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportNormalizedUVs_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportNormalizedUVs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportTileUVs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is set to true when uvs should be exported for each tile separately.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is set to true when uvs should be exported for each tile separately." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportTileUVs_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bLandscapeExportTileUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportTileUVs = { "bLandscapeExportTileUVs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportTileUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportTileUVs_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportTileUVs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectSplines_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, also export a landscape's splines\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, also export a landscape's splines" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectSplines_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bLandscapeAutoSelectSplines = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectSplines = { "bLandscapeAutoSelectSplines", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectSplines_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectSplines_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectSplines_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportControlPoints_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, send a separate control point cloud of the landscape splines control points.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, send a separate control point cloud of the landscape splines control points." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportControlPoints_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bLandscapeSplinesExportControlPoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportControlPoints = { "bLandscapeSplinesExportControlPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportControlPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportControlPoints_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportControlPoints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportLeftRightCurves_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, export left and right curves as well\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, export left and right curves as well" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportLeftRightCurves_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bLandscapeSplinesExportLeftRightCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportLeftRightCurves = { "bLandscapeSplinesExportLeftRightCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportLeftRightCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportLeftRightCurves_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportLeftRightCurves_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportSplineMeshComponents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, export the spline mesh components of landscape splines\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, export the spline mesh components of landscape splines" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportSplineMeshComponents_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bLandscapeSplinesExportSplineMeshComponents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportSplineMeshComponents = { "bLandscapeSplinesExportSplineMeshComponents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportSplineMeshComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportSplineMeshComponents_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportSplineMeshComponents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bMergeSplineMeshComponents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, the deformed meshes of all spline mesh components of an actor are merged into temporary input mesh.\n// If false, the meshes are sent individually.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the deformed meshes of all spline mesh components of an actor are merged into temporary input mesh.\nIf false, the meshes are sent individually." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bMergeSplineMeshComponents_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bMergeSplineMeshComponents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bMergeSplineMeshComponents = { "bMergeSplineMeshComponents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bMergeSplineMeshComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bMergeSplineMeshComponents_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bMergeSplineMeshComponents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportHeightDataPerEditLayer_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, height data is exported per Edit Layer.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, height data is exported per Edit Layer." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportHeightDataPerEditLayer_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bExportHeightDataPerEditLayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportHeightDataPerEditLayer = { "bExportHeightDataPerEditLayer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportHeightDataPerEditLayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportHeightDataPerEditLayer_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportHeightDataPerEditLayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportPaintLayersPerEditLayer_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Export paint layers.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Export paint layers." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportPaintLayersPerEditLayer_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bExportPaintLayersPerEditLayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportPaintLayersPerEditLayer = { "bExportPaintLayersPerEditLayer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportPaintLayersPerEditLayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportPaintLayersPerEditLayer_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportPaintLayersPerEditLayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMergedPaintLayers_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Export paint layers.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Export paint layers." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMergedPaintLayers_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bExportMergedPaintLayers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMergedPaintLayers = { "bExportMergedPaintLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMergedPaintLayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMergedPaintLayers_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMergedPaintLayers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLevelInstanceContent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, level instances (and packed level actor) content is exported vs just exporting a single point\n// with attributes identifying the level instance / packed level actor.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, level instances (and packed level actor) content is exported vs just exporting a single point\nwith attributes identifying the level instance / packed level actor." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLevelInstanceContent_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bExportLevelInstanceContent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLevelInstanceContent = { "bExportLevelInstanceContent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLevelInstanceContent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLevelInstanceContent_MetaData), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLevelInstanceContent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_KeepWorldTransform_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_KeepWorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceRotScaleEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceBboxEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceMaterialEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportSockets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bPreferNaniteFallbackMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportColliders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMaterialParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bUseLegacyInputCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_UnrealSplineResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_LandscapeExportType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_LandscapeExportType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportSelectionOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportLighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportNormalizedUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportTileUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectSplines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportControlPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportLeftRightCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportSplineMeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bMergeSplineMeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportHeightDataPerEditLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportPaintLayersPerEditLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMergedPaintLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLevelInstanceContent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniInputObjectSettings",
		Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::PropPointers),
		sizeof(FHoudiniInputObjectSettings),
		alignof(FHoudiniInputObjectSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInputObjectSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniInputObjectSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniInputObjectSettings.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniInputObjectSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputTypes_h_Statics::EnumInfo[] = {
		{ EHoudiniXformType_StaticEnum, TEXT("EHoudiniXformType"), &Z_Registration_Info_UEnum_EHoudiniXformType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2069214948U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputTypes_h_Statics::ScriptStructInfo[] = {
		{ FHoudiniInputObjectSettings::StaticStruct, Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewStructOps, TEXT("HoudiniInputObjectSettings"), &Z_Registration_Info_UScriptStruct_HoudiniInputObjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniInputObjectSettings), 1498337739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputTypes_h_623968203(TEXT("/Script/HoudiniEngineRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
