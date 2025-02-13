// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniRuntimeSettings.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniRuntimeSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWalkableSlopeOverride();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniRuntimeSettings();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniRuntimeSettings_NoRegister();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsSessionType;
	static UEnum* EHoudiniRuntimeSettingsSessionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsSessionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsSessionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniRuntimeSettingsSessionType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsSessionType.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniRuntimeSettingsSessionType>()
	{
		return EHoudiniRuntimeSettingsSessionType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType_Statics::Enumerators[] = {
		{ "HRSST_InProcess", (int64)HRSST_InProcess },
		{ "HRSST_Socket", (int64)HRSST_Socket },
		{ "HRSST_NamedPipe", (int64)HRSST_NamedPipe },
		{ "HRSST_None", (int64)HRSST_None },
		{ "HRSST_MemoryBuffer", (int64)HRSST_MemoryBuffer },
		{ "HRSST_MAX", (int64)HRSST_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType_Statics::Enum_MetaDataParams[] = {
		{ "HRSST_InProcess.Comment", "// In process session.\n" },
		{ "HRSST_InProcess.DisplayName", "In Process (experimental)" },
		{ "HRSST_InProcess.Hidden", "" },
		{ "HRSST_InProcess.Name", "HRSST_InProcess" },
		{ "HRSST_InProcess.ToolTip", "In process session." },
		{ "HRSST_MAX.Name", "HRSST_MAX" },
		{ "HRSST_MemoryBuffer.Comment", "// Memory Buffer\n" },
		{ "HRSST_MemoryBuffer.DisplayName", "Shared Memory Buffer" },
		{ "HRSST_MemoryBuffer.Name", "HRSST_MemoryBuffer" },
		{ "HRSST_MemoryBuffer.ToolTip", "Memory Buffer" },
		{ "HRSST_NamedPipe.Comment", "// Connection to Houdini Engine server via pipe connection.\n" },
		{ "HRSST_NamedPipe.DisplayName", "Named pipe or domain socket" },
		{ "HRSST_NamedPipe.Name", "HRSST_NamedPipe" },
		{ "HRSST_NamedPipe.ToolTip", "Connection to Houdini Engine server via pipe connection." },
		{ "HRSST_None.Comment", "// No session, prevents license/Engine cook\n" },
		{ "HRSST_None.DisplayName", "None" },
		{ "HRSST_None.Name", "HRSST_None" },
		{ "HRSST_None.ToolTip", "No session, prevents license/Engine cook" },
		{ "HRSST_Socket.Comment", "// TCP socket connection to Houdini Engine server.\n" },
		{ "HRSST_Socket.DisplayName", "TCP socket" },
		{ "HRSST_Socket.Name", "HRSST_Socket" },
		{ "HRSST_Socket.ToolTip", "TCP socket connection to Houdini Engine server." },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EHoudiniRuntimeSettingsSessionType",
		"EHoudiniRuntimeSettingsSessionType",
		Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsSessionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsSessionType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsSessionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsRecomputeFlag;
	static UEnum* EHoudiniRuntimeSettingsRecomputeFlag_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsRecomputeFlag.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsRecomputeFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniRuntimeSettingsRecomputeFlag"));
		}
		return Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsRecomputeFlag.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniRuntimeSettingsRecomputeFlag>()
	{
		return EHoudiniRuntimeSettingsRecomputeFlag_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag_Statics::Enumerators[] = {
		{ "HRSRF_Always", (int64)HRSRF_Always },
		{ "HRSRF_OnlyIfMissing", (int64)HRSRF_OnlyIfMissing },
		{ "HRSRF_Never", (int64)HRSRF_Never },
		{ "HRSRF_MAX", (int64)HRSRF_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag_Statics::Enum_MetaDataParams[] = {
		{ "HRSRF_Always.Comment", "// Recompute always.\n" },
		{ "HRSRF_Always.DisplayName", "Always" },
		{ "HRSRF_Always.Name", "HRSRF_Always" },
		{ "HRSRF_Always.ToolTip", "Recompute always." },
		{ "HRSRF_MAX.Name", "HRSRF_MAX" },
		{ "HRSRF_Never.Comment", "// Do not recompute.\n" },
		{ "HRSRF_Never.DisplayName", "Never" },
		{ "HRSRF_Never.Name", "HRSRF_Never" },
		{ "HRSRF_Never.ToolTip", "Do not recompute." },
		{ "HRSRF_OnlyIfMissing.Comment", "// Recompute only if missing.\n" },
		{ "HRSRF_OnlyIfMissing.DisplayName", "Only if missing" },
		{ "HRSRF_OnlyIfMissing.Name", "HRSRF_OnlyIfMissing" },
		{ "HRSRF_OnlyIfMissing.ToolTip", "Recompute only if missing." },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EHoudiniRuntimeSettingsRecomputeFlag",
		"EHoudiniRuntimeSettingsRecomputeFlag",
		Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsRecomputeFlag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsRecomputeFlag.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsRecomputeFlag.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniExecutableType;
	static UEnum* EHoudiniExecutableType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniExecutableType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniExecutableType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniExecutableType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniExecutableType.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniExecutableType>()
	{
		return EHoudiniExecutableType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType_Statics::Enumerators[] = {
		{ "HRSHE_Houdini", (int64)HRSHE_Houdini },
		{ "HRSHE_HoudiniFX", (int64)HRSHE_HoudiniFX },
		{ "HRSHE_HoudiniCore", (int64)HRSHE_HoudiniCore },
		{ "HRSHE_HoudiniIndie", (int64)HRSHE_HoudiniIndie },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType_Statics::Enum_MetaDataParams[] = {
		{ "HRSHE_Houdini.Comment", "// Houdini\n" },
		{ "HRSHE_Houdini.DisplayName", "Houdini" },
		{ "HRSHE_Houdini.Name", "HRSHE_Houdini" },
		{ "HRSHE_Houdini.ToolTip", "Houdini" },
		{ "HRSHE_HoudiniCore.Comment", "// Houdini Core\n" },
		{ "HRSHE_HoudiniCore.DisplayName", "Houdini Core" },
		{ "HRSHE_HoudiniCore.Name", "HRSHE_HoudiniCore" },
		{ "HRSHE_HoudiniCore.ToolTip", "Houdini Core" },
		{ "HRSHE_HoudiniFX.Comment", "// Houdini FX\n" },
		{ "HRSHE_HoudiniFX.DisplayName", "Houdini FX" },
		{ "HRSHE_HoudiniFX.Name", "HRSHE_HoudiniFX" },
		{ "HRSHE_HoudiniFX.ToolTip", "Houdini FX" },
		{ "HRSHE_HoudiniIndie.Comment", "// Houdini Indie\n" },
		{ "HRSHE_HoudiniIndie.DisplayName", "Houdini Indie" },
		{ "HRSHE_HoudiniIndie.Name", "HRSHE_HoudiniIndie" },
		{ "HRSHE_HoudiniIndie.ToolTip", "Houdini Indie" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EHoudiniExecutableType",
		"EHoudiniExecutableType",
		Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniExecutableType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniExecutableType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniExecutableType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniStaticMeshGenerationProperties;
class UScriptStruct* FHoudiniStaticMeshGenerationProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniStaticMeshGenerationProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniStaticMeshGenerationProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniStaticMeshGenerationProperties"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniStaticMeshGenerationProperties.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniStaticMeshGenerationProperties>()
{
	return FHoudiniStaticMeshGenerationProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGeneratedDoubleSidedGeometry_MetaData[];
#endif
		static void NewProp_bGeneratedDoubleSidedGeometry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGeneratedDoubleSidedGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedPhysMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedPhysMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBodyInstance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBodyInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedCollisionTraceFlag_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GeneratedCollisionTraceFlag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedLightMapResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GeneratedLightMapResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedWalkableSlopeOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedWalkableSlopeOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedLightMapCoordinateIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GeneratedLightMapCoordinateIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGeneratedUseMaximumStreamingTexelRatio_MetaData[];
#endif
		static void NewProp_bGeneratedUseMaximumStreamingTexelRatio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGeneratedUseMaximumStreamingTexelRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedStreamingDistanceMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GeneratedStreamingDistanceMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedFoliageDefaultSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedFoliageDefaultSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedAssetUserData_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedAssetUserData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedAssetUserData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedAssetUserData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniStaticMeshGenerationProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedDoubleSidedGeometry_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration | StaticMeshGeneration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the physics triangle mesh will use double sided faces when doing scene queries. */" },
#endif
		{ "DisplayName", "Double Sided Geometry" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the physics triangle mesh will use double sided faces when doing scene queries." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedDoubleSidedGeometry_SetBit(void* Obj)
	{
		((FHoudiniStaticMeshGenerationProperties*)Obj)->bGeneratedDoubleSidedGeometry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedDoubleSidedGeometry = { "bGeneratedDoubleSidedGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FHoudiniStaticMeshGenerationProperties), &Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedDoubleSidedGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedDoubleSidedGeometry_MetaData), Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedDoubleSidedGeometry_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedPhysMaterial_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration | StaticMeshGeneration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Physical material to use for simple collision on this body. Encodes information about density, friction etc. */" },
#endif
		{ "DisplayName", "Simple Collision Physical Material" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Physical material to use for simple collision on this body. Encodes information about density, friction etc." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedPhysMaterial = { "GeneratedPhysMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedPhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedPhysMaterial_MetaData), Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedPhysMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_DefaultBodyInstance_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration | StaticMeshGeneration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default properties of the body instance, copied into objects on instantiation, was URB_BodyInstance */" },
#endif
		{ "FullyExpand", "true" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default properties of the body instance, copied into objects on instantiation, was URB_BodyInstance" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_DefaultBodyInstance = { "DefaultBodyInstance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, DefaultBodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_DefaultBodyInstance_MetaData), Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_DefaultBodyInstance_MetaData) }; // 90350867
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedCollisionTraceFlag_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration | StaticMeshGeneration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collision Trace behavior - by default, it will keep simple(convex)/complex(per-poly) separate. */" },
#endif
		{ "DisplayName", "Collision Complexity" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision Trace behavior - by default, it will keep simple(convex)/complex(per-poly) separate." },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedCollisionTraceFlag = { "GeneratedCollisionTraceFlag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedCollisionTraceFlag), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedCollisionTraceFlag_MetaData), Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedCollisionTraceFlag_MetaData) }; // 2608406128
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapResolution_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration | StaticMeshGeneration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Resolution of lightmap. */" },
#endif
		{ "DisplayName", "Light Map Resolution" },
		{ "FixedIncrement", "4.0" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resolution of lightmap." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapResolution = { "GeneratedLightMapResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedLightMapResolution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapResolution_MetaData), Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapResolution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedWalkableSlopeOverride_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration | StaticMeshGeneration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Custom walkable slope setting for generated mesh's body. */" },
#endif
		{ "DisplayName", "Walkable Slope Override" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom walkable slope setting for generated mesh's body." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedWalkableSlopeOverride = { "GeneratedWalkableSlopeOverride", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedWalkableSlopeOverride), Z_Construct_UScriptStruct_FWalkableSlopeOverride, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedWalkableSlopeOverride_MetaData), Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedWalkableSlopeOverride_MetaData) }; // 1010563615
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapCoordinateIndex_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration | StaticMeshGeneration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The light map coordinate index. */" },
#endif
		{ "DisplayName", "Light map coordinate index" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The light map coordinate index." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapCoordinateIndex = { "GeneratedLightMapCoordinateIndex", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedLightMapCoordinateIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapCoordinateIndex_MetaData), Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapCoordinateIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration | StaticMeshGeneration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True if mesh should use a less-conservative method of mip LOD texture factor computation. */" },
#endif
		{ "DisplayName", "Use Maximum Streaming Texel Ratio" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if mesh should use a less-conservative method of mip LOD texture factor computation." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio_SetBit(void* Obj)
	{
		((FHoudiniStaticMeshGenerationProperties*)Obj)->bGeneratedUseMaximumStreamingTexelRatio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio = { "bGeneratedUseMaximumStreamingTexelRatio", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FHoudiniStaticMeshGenerationProperties), &Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio_MetaData), Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedStreamingDistanceMultiplier_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration | StaticMeshGeneration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Allows artists to adjust the distance where textures using UV 0 are streamed in/out. */" },
#endif
		{ "DisplayName", "Streaming Distance Multiplier" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows artists to adjust the distance where textures using UV 0 are streamed in/out." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedStreamingDistanceMultiplier = { "GeneratedStreamingDistanceMultiplier", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedStreamingDistanceMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedStreamingDistanceMultiplier_MetaData), Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedStreamingDistanceMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedFoliageDefaultSettings_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration | StaticMeshGeneration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default settings when using this mesh for instanced foliage. */" },
#endif
		{ "DisplayName", "Foliage Default Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default settings when using this mesh for instanced foliage." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedFoliageDefaultSettings = { "GeneratedFoliageDefaultSettings", nullptr, (EPropertyFlags)0x0012040000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedFoliageDefaultSettings), Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedFoliageDefaultSettings_MetaData), Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedFoliageDefaultSettings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData_Inner_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration | StaticMeshGeneration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of user data stored with the asset. */" },
#endif
		{ "DisplayName", "Asset User Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of user data stored with the asset." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData_Inner = { "GeneratedAssetUserData", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData_Inner_MetaData), Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration | StaticMeshGeneration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of user data stored with the asset. */" },
#endif
		{ "DisplayName", "Asset User Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of user data stored with the asset." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData = { "GeneratedAssetUserData", nullptr, (EPropertyFlags)0x0010048000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniStaticMeshGenerationProperties, GeneratedAssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData_MetaData), Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedDoubleSidedGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedPhysMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_DefaultBodyInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedCollisionTraceFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedWalkableSlopeOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedLightMapCoordinateIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_bGeneratedUseMaximumStreamingTexelRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedStreamingDistanceMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedFoliageDefaultSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewProp_GeneratedAssetUserData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniStaticMeshGenerationProperties",
		Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::PropPointers),
		sizeof(FHoudiniStaticMeshGenerationProperties),
		alignof(FHoudiniStaticMeshGenerationProperties),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniStaticMeshGenerationProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniStaticMeshGenerationProperties.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniStaticMeshGenerationProperties.InnerSingleton;
	}
	void UHoudiniRuntimeSettings::StaticRegisterNativesUHoudiniRuntimeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniRuntimeSettings);
	UClass* Z_Construct_UClass_UHoudiniRuntimeSettings_NoRegister()
	{
		return UHoudiniRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SessionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSessions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSessions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerHost_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerHost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ServerPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerPipeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerPipeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharedMemoryBufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_SharedMemoryBufferSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSharedMemoryBufferCyclic_MetaData[];
#endif
		static void NewProp_bSharedMemoryBufferCyclic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSharedMemoryBufferCyclic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartAutomaticServer_MetaData[];
#endif
		static void NewProp_bStartAutomaticServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartAutomaticServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutomaticServerTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutomaticServerTimeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSyncWithHoudiniCook_MetaData[];
#endif
		static void NewProp_bSyncWithHoudiniCook_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncWithHoudiniCook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCookUsingHoudiniTime_MetaData[];
#endif
		static void NewProp_bCookUsingHoudiniTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookUsingHoudiniTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSyncViewport_MetaData[];
#endif
		static void NewProp_bSyncViewport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncViewport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSyncHoudiniViewport_MetaData[];
#endif
		static void NewProp_bSyncHoudiniViewport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncHoudiniViewport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSyncUnrealViewport_MetaData[];
#endif
		static void NewProp_bSyncUnrealViewport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncUnrealViewport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowMultiAssetDialog_MetaData[];
#endif
		static void NewProp_bShowMultiAssetDialog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowMultiAssetDialog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_MetaData[];
#endif
		static void NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferHdaMemoryCopyOverHdaSourceFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPauseCookingOnStart_MetaData[];
#endif
		static void NewProp_bPauseCookingOnStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPauseCookingOnStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplaySlateCookingNotifications_MetaData[];
#endif
		static void NewProp_bDisplaySlateCookingNotifications_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplaySlateCookingNotifications;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTemporaryCookFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultTemporaryCookFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBakeFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultBakeFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDeprecatedInstanceVariations_MetaData[];
#endif
		static void NewProp_bEnableDeprecatedInstanceVariations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDeprecatedInstanceVariations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesUseDefaultUnrealScaling_MetaData[];
#endif
		static void NewProp_MarshallingLandscapesUseDefaultUnrealScaling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MarshallingLandscapesUseDefaultUnrealScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesUseFullResolution_MetaData[];
#endif
		static void NewProp_MarshallingLandscapesUseFullResolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MarshallingLandscapesUseFullResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesForceMinMaxValues_MetaData[];
#endif
		static void NewProp_MarshallingLandscapesForceMinMaxValues_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MarshallingLandscapesForceMinMaxValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesForcedMinValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MarshallingLandscapesForcedMinValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesForcedMaxValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MarshallingLandscapesForcedMaxValue;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarshallingSplineResolution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MarshallingSplineResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMesh_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDefaultMesh_MetaData[];
#endif
		static void NewProp_bShowDefaultMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDefaultMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreferNaniteFallbackMesh_MetaData[];
#endif
		static void NewProp_bPreferNaniteFallbackMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferNaniteFallbackMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementByTimer_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMeshRefinementByTimer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementByTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyMeshAutoRefineTimeoutSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProxyMeshAutoRefineTimeoutSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoubleSidedGeometry_MetaData[];
#endif
		static void NewProp_bDoubleSidedGeometry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoubleSidedGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBodyInstance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBodyInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionTraceFlag_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionTraceFlag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightMapResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LightMapResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LpvBiasMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LpvBiasMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedDistanceFieldResolutionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GeneratedDistanceFieldResolutionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkableSlopeOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WalkableSlopeOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightMapCoordinateIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LightMapCoordinateIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaximumStreamingTexelRatio_MetaData[];
#endif
		static void NewProp_bUseMaximumStreamingTexelRatio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaximumStreamingTexelRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingDistanceMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StreamingDistanceMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageDefaultSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoliageDefaultSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFullPrecisionUVs_MetaData[];
#endif
		static void NewProp_bUseFullPrecisionUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFullPrecisionUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SrcLightmapIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SrcLightmapIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DstLightmapIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DstLightmapIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLightmapResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinLightmapResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveDegenerates_MetaData[];
#endif
		static void NewProp_bRemoveDegenerates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveDegenerates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerateLightmapUVsFlag_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GenerateLightmapUVsFlag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecomputeNormalsFlag_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RecomputeNormalsFlag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecomputeTangentsFlag_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RecomputeTangentsFlag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMikkTSpace_MetaData[];
#endif
		static void NewProp_bUseMikkTSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMikkTSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBuildAdjacencyBuffer_MetaData[];
#endif
		static void NewProp_bBuildAdjacencyBuffer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildAdjacencyBuffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComputeWeightedNormals_MetaData[];
#endif
		static void NewProp_bComputeWeightedNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeWeightedNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBuildReversedIndexBuffer_MetaData[];
#endif
		static void NewProp_bBuildReversedIndexBuffer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildReversedIndexBuffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseHighPrecisionTangentBasis_MetaData[];
#endif
		static void NewProp_bUseHighPrecisionTangentBasis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHighPrecisionTangentBasis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldResolutionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldResolutionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateDistanceFieldAsIfTwoSided_MetaData[];
#endif
		static void NewProp_bGenerateDistanceFieldAsIfTwoSided_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateDistanceFieldAsIfTwoSided;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportFaceRemap_MetaData[];
#endif
		static void NewProp_bSupportFaceRemap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportFaceRemap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPDGAsyncCommandletImportEnabled_MetaData[];
#endif
		static void NewProp_bPDGAsyncCommandletImportEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPDGAsyncCommandletImportEnabled;
		static const UECodeGen_Private::FStrPropertyParams NewProp_HoudiniToolsSearchPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniToolsSearchPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HoudiniToolsSearchPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomHoudiniLocation_MetaData[];
#endif
		static void NewProp_bUseCustomHoudiniLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomHoudiniLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomHoudiniLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomHoudiniLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniExecutable_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HoudiniExecutable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomHoudiniHomeLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomHoudiniHomeLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookingThreadStackSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CookingThreadStackSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniEnvironmentFiles_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HoudiniEnvironmentFiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtlSearchPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OtlSearchPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DsoSearchPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DsoSearchPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageDsoSearchPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImageDsoSearchPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioDsoSearchPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AudioDsoSearchPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniRuntimeSettings.h" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SessionType_MetaData[] = {
		{ "Category", "Session" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------\n// Session options.\n//-------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Session options." },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, SessionType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SessionType_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SessionType_MetaData) }; // 600178616
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_NumSessions_MetaData[] = {
		{ "Category", "Session" },
		{ "ClampMax", "128" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The number of threaded sessions to be used to send/receive data (default: 1)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of threaded sessions to be used to send/receive data (default: 1)" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_NumSessions = { "NumSessions", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, NumSessions), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_NumSessions_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_NumSessions_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerHost_MetaData[] = {
		{ "Category", "Session" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The name of the machine that hosts the houdini server (default: localhost)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the machine that hosts the houdini server (default: localhost)" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerHost = { "ServerHost", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, ServerHost), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerHost_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerHost_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPort_MetaData[] = {
		{ "Category", "Session" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The port to be used for a TCP socket session (default: 9090)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The port to be used for a TCP socket session (default: 9090)" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, ServerPort), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPort_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPort_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPipeName_MetaData[] = {
		{ "Category", "Session" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The name of the server used for Name Pipe or Shared Memory buffer session (default: hapi)\n" },
#endif
		{ "DisplayName", "Server Name" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the server used for Name Pipe or Shared Memory buffer session (default: hapi)" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPipeName = { "ServerPipeName", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, ServerPipeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPipeName_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPipeName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SharedMemoryBufferSize_MetaData[] = {
		{ "Category", "Session" },
		{ "ClampMax", "131072" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The size (in MB) of the Memory buffer used for shared memory buffer sessions (default: 500)\n// Value are clamped between 1MB - 128GB and UI between 1MB and 16GB\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The size (in MB) of the Memory buffer used for shared memory buffer sessions (default: 500)\nValue are clamped between 1MB - 128GB and UI between 1MB and 16GB" },
#endif
		{ "UIMax", "16384" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SharedMemoryBufferSize = { "SharedMemoryBufferSize", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, SharedMemoryBufferSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SharedMemoryBufferSize_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SharedMemoryBufferSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSharedMemoryBufferCyclic_MetaData[] = {
		{ "Category", "Session" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates if the shared memory buffer session use a cyclic (ring) buffer. If disabled, the buffer will be of fixed size. (default: enabled)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates if the shared memory buffer session use a cyclic (ring) buffer. If disabled, the buffer will be of fixed size. (default: enabled)" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSharedMemoryBufferCyclic_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bSharedMemoryBufferCyclic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSharedMemoryBufferCyclic = { "bSharedMemoryBufferCyclic", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSharedMemoryBufferCyclic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSharedMemoryBufferCyclic_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSharedMemoryBufferCyclic_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer_MetaData[] = {
		{ "Category", "Session" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Automatically try to start a HARS process matching the current session settings when restarting the session (default: enabled)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically try to start a HARS process matching the current session settings when restarting the session (default: enabled)" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bStartAutomaticServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer = { "bStartAutomaticServer", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AutomaticServerTimeout_MetaData[] = {
		{ "Category", "Session" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The timeout (in ms) to be used when attempting to create a Houdini Engine Session (default: 3000)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The timeout (in ms) to be used when attempting to create a Houdini Engine Session (default: 3000)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AutomaticServerTimeout = { "AutomaticServerTimeout", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, AutomaticServerTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AutomaticServerTimeout_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AutomaticServerTimeout_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook_MetaData[] = {
		{ "Category", "Session" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, changes made in Houdini, when connected to Houdini running in Session Sync mode will be automatically be pushed to Unreal.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, changes made in Houdini, when connected to Houdini running in Session Sync mode will be automatically be pushed to Unreal." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bSyncWithHoudiniCook = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook = { "bSyncWithHoudiniCook", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime_MetaData[] = {
		{ "Category", "Session" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, the Houdini Timeline time will be used to cook assets.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, the Houdini Timeline time will be used to cook assets." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bCookUsingHoudiniTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime = { "bCookUsingHoudiniTime", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport_MetaData[] = {
		{ "Category", "Session" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enable when wanting to sync the Houdini and Unreal viewport when using Session Sync.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable when wanting to sync the Houdini and Unreal viewport when using Session Sync." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bSyncViewport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport = { "bSyncViewport", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport_MetaData[] = {
		{ "Category", "Session" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, Houdini's viewport will be synchronized to Unreal's when using Session Sync.\n" },
#endif
		{ "DisplayName", "Sync the Houdini Viewport to Unreal's viewport." },
		{ "EditCondition", "bSyncViewport" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, Houdini's viewport will be synchronized to Unreal's when using Session Sync." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bSyncHoudiniViewport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport = { "bSyncHoudiniViewport", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport_MetaData[] = {
		{ "Category", "Session" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, Unreal's viewport will be synchronized to Houdini's when using Session Sync.\n" },
#endif
		{ "DisplayName", "Sync the Unreal Viewport to Houdini's viewport" },
		{ "EditCondition", "bSyncViewport" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, Unreal's viewport will be synchronized to Houdini's when using Session Sync." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bSyncUnrealViewport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport = { "bSyncUnrealViewport", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog_MetaData[] = {
		{ "Category", "Instantiating" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to ask user to select an asset when instantiating an HDA with multiple assets inside. If disabled, will always instantiate first asset.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to ask user to select an asset when instantiating an HDA with multiple assets inside. If disabled, will always instantiate first asset." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bShowMultiAssetDialog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog = { "bShowMultiAssetDialog", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_MetaData[] = {
		{ "Category", "Instantiating" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When enabled, the plugin will always instantiate the memory copy of a HDA stored in the .uasset file \n// instead of using the latest version of the HDA file itself.\n// This helps ensuring consistency between users when using HDAs, but will not work with expanded HDAs.\n// When disabled, the plugin will always instantiate the latest version of the source HDA file if it is \n// available, and will fallback to the memory copy if the source file cannot be found\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, the plugin will always instantiate the memory copy of a HDA stored in the .uasset file\ninstead of using the latest version of the HDA file itself.\nThis helps ensuring consistency between users when using HDAs, but will not work with expanded HDAs.\nWhen disabled, the plugin will always instantiate the latest version of the source HDA file if it is\navailable, and will fallback to the memory copy if the source file cannot be found" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bPreferHdaMemoryCopyOverHdaSourceFile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferHdaMemoryCopyOverHdaSourceFile = { "bPreferHdaMemoryCopyOverHdaSourceFile", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferHdaMemoryCopyOverHdaSourceFile_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart_MetaData[] = {
		{ "Category", "Cooking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether houdini engine cooking is paused or not upon initializing the plugin\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether houdini engine cooking is paused or not upon initializing the plugin" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bPauseCookingOnStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart = { "bPauseCookingOnStart", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications_MetaData[] = {
		{ "Category", "Cooking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to display instantiation and cooking Slate notifications.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to display instantiation and cooking Slate notifications." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bDisplaySlateCookingNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications = { "bDisplaySlateCookingNotifications", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultTemporaryCookFolder_MetaData[] = {
		{ "Category", "Cooking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default content folder storing all the temporary cook data (Static meshes, materials, textures, landscape layer infos...)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default content folder storing all the temporary cook data (Static meshes, materials, textures, landscape layer infos...)" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultTemporaryCookFolder = { "DefaultTemporaryCookFolder", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DefaultTemporaryCookFolder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultTemporaryCookFolder_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultTemporaryCookFolder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBakeFolder_MetaData[] = {
		{ "Category", "Cooking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default content folder used when baking houdini asset data to native unreal objects\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default content folder used when baking houdini asset data to native unreal objects" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBakeFolder = { "DefaultBakeFolder", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DefaultBakeFolder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBakeFolder_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBakeFolder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableDeprecatedInstanceVariations_MetaData[] = {
		{ "Category", "Cooking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------\n// Deprecated instance settings.\n//-------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated instance settings." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableDeprecatedInstanceVariations_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bEnableDeprecatedInstanceVariations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableDeprecatedInstanceVariations = { "bEnableDeprecatedInstanceVariations", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableDeprecatedInstanceVariations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableDeprecatedInstanceVariations_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableDeprecatedInstanceVariations_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling_MetaData[] = {
		{ "Category", "GeometryMarshalling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, generated Landscapes will be marshalled using default unreal scaling. \n// Generated landscape will loose a lot of precision on the Z axis but will use the same transforms\n// as Unreal's default landscape\n" },
#endif
		{ "DisplayName", "Landscape - Use default Unreal scaling." },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, generated Landscapes will be marshalled using default unreal scaling.\nGenerated landscape will loose a lot of precision on the Z axis but will use the same transforms\nas Unreal's default landscape" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->MarshallingLandscapesUseDefaultUnrealScaling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling = { "MarshallingLandscapesUseDefaultUnrealScaling", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution_MetaData[] = {
		{ "Category", "GeometryMarshalling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, generated Landscapes will be using full precision for their ZAxis, \n// allowing for more precision but preventing them from being sculpted higher/lower than their min/max.\n" },
#endif
		{ "DisplayName", "Landscape - Use full resolution for data conversion." },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, generated Landscapes will be using full precision for their ZAxis,\nallowing for more precision but preventing them from being sculpted higher/lower than their min/max." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->MarshallingLandscapesUseFullResolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution = { "MarshallingLandscapesUseFullResolution", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues_MetaData[] = {
		{ "Category", "GeometryMarshalling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, the min/max values used to convert heightfields to landscape will be forced values\n// This is usefull when importing multiple landscapes from different HDAs\n" },
#endif
		{ "DisplayName", "Landscape - Force Min/Max values for data conversion" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the min/max values used to convert heightfields to landscape will be forced values\nThis is usefull when importing multiple landscapes from different HDAs" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->MarshallingLandscapesForceMinMaxValues = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues = { "MarshallingLandscapesForceMinMaxValues", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMinValue_MetaData[] = {
		{ "Category", "GeometryMarshalling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The minimum value to be used for Landscape conversion when MarshallingLandscapesForceMinMaxValues is enabled\n" },
#endif
		{ "DisplayName", "Landscape - Forced min value" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The minimum value to be used for Landscape conversion when MarshallingLandscapesForceMinMaxValues is enabled" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMinValue = { "MarshallingLandscapesForcedMinValue", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingLandscapesForcedMinValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMinValue_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMinValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMaxValue_MetaData[] = {
		{ "Category", "GeometryMarshalling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The maximum value to be used for Landscape conversion when MarshallingLandscapesForceMinMaxValues is enabled\n" },
#endif
		{ "DisplayName", "Landscape - Forced max value" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum value to be used for Landscape conversion when MarshallingLandscapesForceMinMaxValues is enabled" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMaxValue = { "MarshallingLandscapesForcedMaxValue", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingLandscapesForcedMaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMaxValue_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMaxValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_MetaData[] = {
		{ "Category", "GeometryMarshalling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If this is enabled, additional rot & scale attributes are added on curve inputs\n" },
#endif
		{ "DisplayName", "Curves - Add rot & scale attributes on curve inputs" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If this is enabled, additional rot & scale attributes are added on curve inputs" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bAddRotAndScaleAttributesOnCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves = { "bAddRotAndScaleAttributesOnCurves", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseLegacyInputCurves_MetaData[] = {
		{ "Category", "GeometryMarshalling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If this is enabled, additional rot & scale attributes are added on curve inputs\n" },
#endif
		{ "DisplayName", "Curves - Use Legacy Input Curves" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If this is enabled, additional rot & scale attributes are added on curve inputs" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseLegacyInputCurves_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bUseLegacyInputCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseLegacyInputCurves = { "bUseLegacyInputCurves", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseLegacyInputCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseLegacyInputCurves_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseLegacyInputCurves_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingSplineResolution_MetaData[] = {
		{ "Category", "GeometryMarshalling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default resolution used when converting Unreal Spline Components to Houdini Curves (step in cm between control points, 0 only send the control points)\n" },
#endif
		{ "DisplayName", "Curves - Default spline resolution (cm)" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default resolution used when converting Unreal Spline Components to Houdini Curves (step in cm between control points, 0 only send the control points)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingSplineResolution = { "MarshallingSplineResolution", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingSplineResolution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingSplineResolution_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingSplineResolution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh_MetaData[] = {
		{ "Category", "Static Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For StaticMesh outputs: should a fast proxy be created first?\n" },
#endif
		{ "DisplayName", "Enable Proxy Static Mesh" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For StaticMesh outputs: should a fast proxy be created first?" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bEnableProxyStaticMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh = { "bEnableProxyStaticMesh", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh_MetaData[] = {
		{ "Category", "Static Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For static mesh outputs and socket actors: should spawn a default actor if the reference is invalid?\n" },
#endif
		{ "DisplayName", "Show Default Mesh" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For static mesh outputs and socket actors: should spawn a default actor if the reference is invalid?" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bShowDefaultMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh = { "bShowDefaultMesh", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferNaniteFallbackMesh_MetaData[] = {
		{ "Category", "Static Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Prefer the Nanite fallback mesh when a Nanite asset is used as Houdini input.\n" },
#endif
		{ "DisplayName", "Prefer Nanite Fallback Mesh" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prefer the Nanite fallback mesh when a Nanite asset is used as Houdini input." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferNaniteFallbackMesh_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bPreferNaniteFallbackMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferNaniteFallbackMesh = { "bPreferNaniteFallbackMesh", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferNaniteFallbackMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferNaniteFallbackMesh_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferNaniteFallbackMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer_MetaData[] = {
		{ "Category", "Static Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If fast proxy meshes are being created, must it be baked as a StaticMesh after a period of no updates?\n" },
#endif
		{ "DisplayName", "Refine Proxy Static Meshes After a Timeout" },
		{ "EditCondition", "bEnableProxyStaticMesh" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If fast proxy meshes are being created, must it be baked as a StaticMesh after a period of no updates?" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bEnableProxyStaticMeshRefinementByTimer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer = { "bEnableProxyStaticMeshRefinementByTimer", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ProxyMeshAutoRefineTimeoutSeconds_MetaData[] = {
		{ "Category", "Static Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If the option to automatically refine the proxy mesh via a timer has been selected, this controls the timeout in seconds.\n" },
#endif
		{ "DisplayName", "Proxy Mesh Auto Refine Timeout Seconds" },
		{ "EditCondition", "bEnableProxyStaticMesh && bEnableProxyStaticMeshRefinementByTimer" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the option to automatically refine the proxy mesh via a timer has been selected, this controls the timeout in seconds." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ProxyMeshAutoRefineTimeoutSeconds = { "ProxyMeshAutoRefineTimeoutSeconds", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, ProxyMeshAutoRefineTimeoutSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ProxyMeshAutoRefineTimeoutSeconds_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ProxyMeshAutoRefineTimeoutSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_MetaData[] = {
		{ "Category", "Static Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Automatically refine proxy meshes to UStaticMesh before the map is saved\n" },
#endif
		{ "DisplayName", "Refine Proxy Static Meshes When Saving a Map" },
		{ "EditCondition", "bEnableProxyStaticMesh" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically refine proxy meshes to UStaticMesh before the map is saved" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bEnableProxyStaticMeshRefinementOnPreSaveWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld = { "bEnableProxyStaticMeshRefinementOnPreSaveWorld", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_MetaData[] = {
		{ "Category", "Static Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Automatically refine proxy meshes to UStaticMesh before starting a play in editor session\n" },
#endif
		{ "DisplayName", "Refine Proxy Static Meshes On PIE" },
		{ "EditCondition", "bEnableProxyStaticMesh" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically refine proxy meshes to UStaticMesh before starting a play in editor session" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bEnableProxyStaticMeshRefinementOnPreBeginPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE = { "bEnableProxyStaticMeshRefinementOnPreBeginPIE", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDoubleSidedGeometry_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// If true, the physics triangle mesh will use double sided faces for new Houdini Assets when doing scene queries.\n" },
#endif
		{ "DisplayName", "Double Sided Geometry" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the physics triangle mesh will use double sided faces for new Houdini Assets when doing scene queries." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDoubleSidedGeometry_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bDoubleSidedGeometry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDoubleSidedGeometry = { "bDoubleSidedGeometry", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDoubleSidedGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDoubleSidedGeometry_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDoubleSidedGeometry_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_PhysMaterial_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Physical material to use for simple collision of new Houdini Assets. Encodes information about density, friction etc.\n" },
#endif
		{ "DisplayName", "Simple Collision Physical Material" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Physical material to use for simple collision of new Houdini Assets. Encodes information about density, friction etc." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_PhysMaterial_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_PhysMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBodyInstance_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Default properties of the body instance\n" },
#endif
		{ "FullyExpand", "true" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default properties of the body instance" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBodyInstance = { "DefaultBodyInstance", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DefaultBodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBodyInstance_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBodyInstance_MetaData) }; // 90350867
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CollisionTraceFlag_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Collision Trace behavior - by default, it will keep simple(convex)/complex(per-poly) separate for new Houdini Assets.\n" },
#endif
		{ "DisplayName", "Collision Complexity" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision Trace behavior - by default, it will keep simple(convex)/complex(per-poly) separate for new Houdini Assets." },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CollisionTraceFlag = { "CollisionTraceFlag", nullptr, (EPropertyFlags)0x0010000000074001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, CollisionTraceFlag), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CollisionTraceFlag_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CollisionTraceFlag_MetaData) }; // 2608406128
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapResolution_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Resolution of lightmap for baked lighting.\n" },
#endif
		{ "DisplayName", "Light Map Resolution" },
		{ "FixedIncrement", "4.0" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resolution of lightmap for baked lighting." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapResolution = { "LightMapResolution", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, LightMapResolution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapResolution_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapResolution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LpvBiasMultiplier_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Bias multiplier for Light Propagation Volume lighting for new Houdini Assets.\n" },
#endif
		{ "DisplayName", "Lpv Bias Multiplier" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bias multiplier for Light Propagation Volume lighting for new Houdini Assets." },
#endif
		{ "UIMax", "3.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LpvBiasMultiplier = { "LpvBiasMultiplier", nullptr, (EPropertyFlags)0x0010000000044015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, LpvBiasMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LpvBiasMultiplier_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LpvBiasMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GeneratedDistanceFieldResolutionScale_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Default Mesh distance field resolution, setting it to 0 will prevent the mesh distance field generation while editing the asset\n" },
#endif
		{ "DisplayName", "Distance Field Resolution Scale" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default Mesh distance field resolution, setting it to 0 will prevent the mesh distance field generation while editing the asset" },
#endif
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GeneratedDistanceFieldResolutionScale = { "GeneratedDistanceFieldResolutionScale", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, GeneratedDistanceFieldResolutionScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GeneratedDistanceFieldResolutionScale_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GeneratedDistanceFieldResolutionScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_WalkableSlopeOverride_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Custom walkable slope setting for bodies of new Houdini Assets.\n" },
#endif
		{ "DisplayName", "Walkable Slope Override" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom walkable slope setting for bodies of new Houdini Assets." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_WalkableSlopeOverride = { "WalkableSlopeOverride", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, WalkableSlopeOverride), Z_Construct_UScriptStruct_FWalkableSlopeOverride, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_WalkableSlopeOverride_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_WalkableSlopeOverride_MetaData) }; // 1010563615
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapCoordinateIndex_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// The UV coordinate index of lightmap \n" },
#endif
		{ "DisplayName", "Light map coordinate index" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The UV coordinate index of lightmap" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapCoordinateIndex = { "LightMapCoordinateIndex", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, LightMapCoordinateIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapCoordinateIndex_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapCoordinateIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMaximumStreamingTexelRatio_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// True if mesh should use a less-conservative method of mip LOD texture factor computation for new Houdini Assets.\n" },
#endif
		{ "DisplayName", "Use Maximum Streaming Texel Ratio" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if mesh should use a less-conservative method of mip LOD texture factor computation for new Houdini Assets." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMaximumStreamingTexelRatio_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bUseMaximumStreamingTexelRatio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMaximumStreamingTexelRatio = { "bUseMaximumStreamingTexelRatio", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMaximumStreamingTexelRatio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMaximumStreamingTexelRatio_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMaximumStreamingTexelRatio_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_StreamingDistanceMultiplier_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Allows artists to adjust the distance where textures using UV 0 are streamed in/out for new Houdini Assets.\n" },
#endif
		{ "DisplayName", "Streaming Distance Multiplier" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows artists to adjust the distance where textures using UV 0 are streamed in/out for new Houdini Assets." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_StreamingDistanceMultiplier = { "StreamingDistanceMultiplier", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, StreamingDistanceMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_StreamingDistanceMultiplier_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_StreamingDistanceMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_FoliageDefaultSettings_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Default settings when using new Houdini Asset mesh for instanced foliage.\n" },
#endif
		{ "DisplayName", "Foliage Default Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default settings when using new Houdini Asset mesh for instanced foliage." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_FoliageDefaultSettings = { "FoliageDefaultSettings", nullptr, (EPropertyFlags)0x0012040000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, FoliageDefaultSettings), Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_FoliageDefaultSettings_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_FoliageDefaultSettings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Array of user data stored with the new Houdini Asset.\n" },
#endif
		{ "DisplayName", "Asset User Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of user data stored with the new Houdini Asset." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData_Inner_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Category", "GeneratedStaticMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Array of user data stored with the new Houdini Asset.\n" },
#endif
		{ "DisplayName", "Asset User Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of user data stored with the new Houdini Asset." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x0010048000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseFullPrecisionUVs_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, UVs will be stored at full floating point precision.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, UVs will be stored at full floating point precision." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseFullPrecisionUVs_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bUseFullPrecisionUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseFullPrecisionUVs = { "bUseFullPrecisionUVs", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseFullPrecisionUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseFullPrecisionUVs_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseFullPrecisionUVs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SrcLightmapIndex_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Source UV set for generated lightmap.\n" },
#endif
		{ "DisplayName", "Source Lightmap Index" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Source UV set for generated lightmap." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SrcLightmapIndex = { "SrcLightmapIndex", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, SrcLightmapIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SrcLightmapIndex_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SrcLightmapIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DstLightmapIndex_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Destination UV set for generated lightmap.\n" },
#endif
		{ "DisplayName", "Destination Lightmap Index" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destination UV set for generated lightmap." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DstLightmapIndex = { "DstLightmapIndex", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DstLightmapIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DstLightmapIndex_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DstLightmapIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MinLightmapResolution_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Target lightmap resolution to for generated lightmap.  Determines the padding between UV shells in a packed lightmap.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target lightmap resolution to for generated lightmap.  Determines the padding between UV shells in a packed lightmap." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MinLightmapResolution = { "MinLightmapResolution", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, MinLightmapResolution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MinLightmapResolution_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MinLightmapResolution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bRemoveDegenerates_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, degenerate triangles will be removed.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, degenerate triangles will be removed." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bRemoveDegenerates_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bRemoveDegenerates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bRemoveDegenerates = { "bRemoveDegenerates", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bRemoveDegenerates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bRemoveDegenerates_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bRemoveDegenerates_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GenerateLightmapUVsFlag_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Lightmap UV generation\n" },
#endif
		{ "DisplayName", "Generate Lightmap UVs" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lightmap UV generation" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GenerateLightmapUVsFlag = { "GenerateLightmapUVsFlag", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, GenerateLightmapUVsFlag), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GenerateLightmapUVsFlag_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GenerateLightmapUVsFlag_MetaData) }; // 1587717611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeNormalsFlag_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Normals generation\n" },
#endif
		{ "DisplayName", "Recompute Normals" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normals generation" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeNormalsFlag = { "RecomputeNormalsFlag", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, RecomputeNormalsFlag), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeNormalsFlag_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeNormalsFlag_MetaData) }; // 1587717611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeTangentsFlag_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tangents generation\n" },
#endif
		{ "DisplayName", "Recompute Tangents" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tangents generation" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeTangentsFlag = { "RecomputeTangentsFlag", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, RecomputeTangentsFlag), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeTangentsFlag_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeTangentsFlag_MetaData) }; // 1587717611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMikkTSpace_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, recomputed tangents and normals will be calculated using MikkT Space.  This method does require properly laid out UVs though otherwise you'll get a degenerate tangent warning\n" },
#endif
		{ "DisplayName", "Generate Using MikkT Space" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, recomputed tangents and normals will be calculated using MikkT Space.  This method does require properly laid out UVs though otherwise you'll get a degenerate tangent warning" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMikkTSpace_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bUseMikkTSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMikkTSpace = { "bUseMikkTSpace", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMikkTSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMikkTSpace_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMikkTSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildAdjacencyBuffer_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Required for PNT tessellation but can be slow. Recommend disabling for larger meshes.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Required for PNT tessellation but can be slow. Recommend disabling for larger meshes." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildAdjacencyBuffer_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bBuildAdjacencyBuffer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildAdjacencyBuffer = { "bBuildAdjacencyBuffer", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildAdjacencyBuffer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildAdjacencyBuffer_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildAdjacencyBuffer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bComputeWeightedNormals_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, we will use the surface area and the corner angle of the triangle as a ratio when computing the normals.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, we will use the surface area and the corner angle of the triangle as a ratio when computing the normals." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bComputeWeightedNormals_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bComputeWeightedNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bComputeWeightedNormals = { "bComputeWeightedNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bComputeWeightedNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bComputeWeightedNormals_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bComputeWeightedNormals_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildReversedIndexBuffer_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Required to optimize mesh in mirrored transform. Double index buffer size.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Required to optimize mesh in mirrored transform. Double index buffer size." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildReversedIndexBuffer_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bBuildReversedIndexBuffer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildReversedIndexBuffer = { "bBuildReversedIndexBuffer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildReversedIndexBuffer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildReversedIndexBuffer_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildReversedIndexBuffer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseHighPrecisionTangentBasis_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, Tangents will be stored at 16 bit vs 8 bit precision.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, Tangents will be stored at 16 bit vs 8 bit precision." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseHighPrecisionTangentBasis_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bUseHighPrecisionTangentBasis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseHighPrecisionTangentBasis = { "bUseHighPrecisionTangentBasis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseHighPrecisionTangentBasis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseHighPrecisionTangentBasis_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseHighPrecisionTangentBasis_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DistanceFieldResolutionScale_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scale to apply to the mesh when allocating the distance field volume texture.\n// The default scale is 1, which is assuming that the mesh will be placed unscaled in the world.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale to apply to the mesh when allocating the distance field volume texture.\nThe default scale is 1, which is assuming that the mesh will be placed unscaled in the world." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DistanceFieldResolutionScale = { "DistanceFieldResolutionScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DistanceFieldResolutionScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DistanceFieldResolutionScale_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DistanceFieldResolutionScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to generate the distance field treating every triangle hit as a front face.\n// When enabled prevents the distance field from being discarded due to the mesh being open, but also lowers Distance Field AO quality.\n" },
#endif
		{ "DisplayName", "Two-Sided Distance Field Generation" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to generate the distance field treating every triangle hit as a front face.\nWhen enabled prevents the distance field from being discarded due to the mesh being open, but also lowers Distance Field AO quality." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bGenerateDistanceFieldAsIfTwoSided = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided = { "bGenerateDistanceFieldAsIfTwoSided", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSupportFaceRemap_MetaData[] = {
		{ "Category", "StaticMeshBuildSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enable the Physical Material Mask\n" },
#endif
		{ "DisplayName", "Enable Physical Material Mask" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable the Physical Material Mask" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSupportFaceRemap_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bSupportFaceRemap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSupportFaceRemap = { "bSupportFaceRemap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSupportFaceRemap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSupportFaceRemap_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSupportFaceRemap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled_MetaData[] = {
		{ "Category", "PDG Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------\n// PDG Commandlet import\n//-------------------------------------------------------------------------------------------------------------\n// Is the PDG commandlet enabled? \n" },
#endif
		{ "DisplayName", "Async Importer Enabled" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PDG Commandlet import\n-------------------------------------------------------------------------------------------------------------\nIs the PDG commandlet enabled?" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bPDGAsyncCommandletImportEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled = { "bPDGAsyncCommandletImportEnabled", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniToolsSearchPath_Inner = { "HoudiniToolsSearchPath", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniToolsSearchPath_MetaData[] = {
		{ "Category", "HoudiniTools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Project-specific search paths should be search for HoudiniTools packages, inside of Unreal.\n// Each subdirectory will be considered for a HoudiniTools package.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Project-specific search paths should be search for HoudiniTools packages, inside of Unreal.\nEach subdirectory will be considered for a HoudiniTools package." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniToolsSearchPath = { "HoudiniToolsSearchPath", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, HoudiniToolsSearchPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniToolsSearchPath_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniToolsSearchPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation_MetaData[] = {
		{ "Category", "HoudiniLocation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to use custom Houdini location.\n" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Use custom Houdini location (requires restart)" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to use custom Houdini location." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation_SetBit(void* Obj)
	{
		((UHoudiniRuntimeSettings*)Obj)->bUseCustomHoudiniLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation = { "bUseCustomHoudiniLocation", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniRuntimeSettings), &Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniLocation_MetaData[] = {
		{ "Category", "HoudiniLocation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Custom Houdini location (where HAPI library is located).\n" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Custom Houdini location" },
		{ "EditCondition", "bUseCustomHoudiniLocation" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom Houdini location (where HAPI library is located)." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniLocation = { "CustomHoudiniLocation", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, CustomHoudiniLocation), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniLocation_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniExecutable_MetaData[] = {
		{ "Category", "HoudiniLocation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Select the Houdini executable to be used when opening session sync or opening hip files\n" },
#endif
		{ "DisplayName", "Houdini Executable" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Select the Houdini executable to be used when opening session sync or opening hip files" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniExecutable = { "HoudiniExecutable", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, HoudiniExecutable), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniExecutableType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniExecutable_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniExecutable_MetaData) }; // 4130463057
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniHomeLocation_MetaData[] = {
		{ "Category", "HoudiniLocation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Custom directory to be used for $HOME\n" },
#endif
		{ "DisplayName", "Custom Houdini Home Location" },
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom directory to be used for $HOME" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniHomeLocation = { "CustomHoudiniHomeLocation", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, CustomHoudiniHomeLocation), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniHomeLocation_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniHomeLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CookingThreadStackSize_MetaData[] = {
		{ "Category", "HoudiniEngineInitialization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------\n// HAPI_Initialize\n//-------------------------------------------------------------------------------------------------------------\n// Evaluation thread stack size in bytes.  -1 for default \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HAPI_Initialize\n-------------------------------------------------------------------------------------------------------------\nEvaluation thread stack size in bytes.  -1 for default" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CookingThreadStackSize = { "CookingThreadStackSize", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, CookingThreadStackSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CookingThreadStackSize_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CookingThreadStackSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniEnvironmentFiles_MetaData[] = {
		{ "Category", "HoudiniEngineInitialization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of paths to Houdini-compatible .env files (; separated on Windows, : otherwise)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of paths to Houdini-compatible .env files (; separated on Windows, : otherwise)" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniEnvironmentFiles = { "HoudiniEnvironmentFiles", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, HoudiniEnvironmentFiles), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniEnvironmentFiles_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniEnvironmentFiles_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_OtlSearchPath_MetaData[] = {
		{ "Category", "HoudiniEngineInitialization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Path to find other OTL/HDA files\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Path to find other OTL/HDA files" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_OtlSearchPath = { "OtlSearchPath", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, OtlSearchPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_OtlSearchPath_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_OtlSearchPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DsoSearchPath_MetaData[] = {
		{ "Category", "HoudiniEngineInitialization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets HOUDINI_DSO_PATH\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets HOUDINI_DSO_PATH" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DsoSearchPath = { "DsoSearchPath", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, DsoSearchPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DsoSearchPath_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DsoSearchPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ImageDsoSearchPath_MetaData[] = {
		{ "Category", "HoudiniEngineInitialization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets HOUDINI_IMAGE_DSO_PATH\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets HOUDINI_IMAGE_DSO_PATH" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ImageDsoSearchPath = { "ImageDsoSearchPath", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, ImageDsoSearchPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ImageDsoSearchPath_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ImageDsoSearchPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AudioDsoSearchPath_MetaData[] = {
		{ "Category", "HoudiniEngineInitialization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets HOUDINI_AUDIO_DSO_PATH\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets HOUDINI_AUDIO_DSO_PATH" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AudioDsoSearchPath = { "AudioDsoSearchPath", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniRuntimeSettings, AudioDsoSearchPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AudioDsoSearchPath_MetaData), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AudioDsoSearchPath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SessionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_NumSessions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerHost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ServerPipeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SharedMemoryBufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSharedMemoryBufferCyclic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bStartAutomaticServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AutomaticServerTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncWithHoudiniCook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bCookUsingHoudiniTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncViewport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncHoudiniViewport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSyncUnrealViewport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowMultiAssetDialog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferHdaMemoryCopyOverHdaSourceFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPauseCookingOnStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDisplaySlateCookingNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultTemporaryCookFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBakeFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableDeprecatedInstanceVariations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseDefaultUnrealScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesUseFullResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForceMinMaxValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMinValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingLandscapesForcedMaxValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseLegacyInputCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MarshallingSplineResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bShowDefaultMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPreferNaniteFallbackMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ProxyMeshAutoRefineTimeoutSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bDoubleSidedGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_PhysMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DefaultBodyInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CollisionTraceFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LpvBiasMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GeneratedDistanceFieldResolutionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_WalkableSlopeOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_LightMapCoordinateIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMaximumStreamingTexelRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_StreamingDistanceMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_FoliageDefaultSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AssetUserData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseFullPrecisionUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_SrcLightmapIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DstLightmapIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_MinLightmapResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bRemoveDegenerates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_GenerateLightmapUVsFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeNormalsFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_RecomputeTangentsFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseMikkTSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildAdjacencyBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bComputeWeightedNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bBuildReversedIndexBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseHighPrecisionTangentBasis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DistanceFieldResolutionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bSupportFaceRemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bPDGAsyncCommandletImportEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniToolsSearchPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniToolsSearchPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_bUseCustomHoudiniLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniExecutable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CustomHoudiniHomeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_CookingThreadStackSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_HoudiniEnvironmentFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_OtlSearchPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_DsoSearchPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_ImageDsoSearchPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::NewProp_AudioDsoSearchPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniRuntimeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::ClassParams = {
		&UHoudiniRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::PropPointers),
		0,
		0x009000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniRuntimeSettings()
	{
		if (!Z_Registration_Info_UClass_UHoudiniRuntimeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniRuntimeSettings.OuterSingleton, Z_Construct_UClass_UHoudiniRuntimeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniRuntimeSettings.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniRuntimeSettings>()
	{
		return UHoudiniRuntimeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniRuntimeSettings);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h_Statics::EnumInfo[] = {
		{ EHoudiniRuntimeSettingsSessionType_StaticEnum, TEXT("EHoudiniRuntimeSettingsSessionType"), &Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsSessionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 600178616U) },
		{ EHoudiniRuntimeSettingsRecomputeFlag_StaticEnum, TEXT("EHoudiniRuntimeSettingsRecomputeFlag"), &Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsRecomputeFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1587717611U) },
		{ EHoudiniExecutableType_StaticEnum, TEXT("EHoudiniExecutableType"), &Z_Registration_Info_UEnum_EHoudiniExecutableType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4130463057U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h_Statics::ScriptStructInfo[] = {
		{ FHoudiniStaticMeshGenerationProperties::StaticStruct, Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics::NewStructOps, TEXT("HoudiniStaticMeshGenerationProperties"), &Z_Registration_Info_UScriptStruct_HoudiniStaticMeshGenerationProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniStaticMeshGenerationProperties), 1000537116U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniRuntimeSettings, UHoudiniRuntimeSettings::StaticClass, TEXT("UHoudiniRuntimeSettings"), &Z_Registration_Info_UClass_UHoudiniRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniRuntimeSettings), 2637874405U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h_3440098831(TEXT("/Script/HoudiniEngineRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
