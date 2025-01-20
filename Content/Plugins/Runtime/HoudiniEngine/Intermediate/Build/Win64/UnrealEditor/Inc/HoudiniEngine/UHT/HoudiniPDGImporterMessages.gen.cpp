// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniPDGImporterMessages.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "HoudiniEngine/Private/HoudiniInstanceTranslator.h"
#include "HoudiniEngine/Private/HoudiniPackageParams.h"
#include "HoudiniEngineRuntime/Private/HoudiniGenericAttribute.h"
#include "HoudiniEngineRuntime/Private/HoudiniGeoPartObject.h"
#include "HoudiniEngineRuntime/Private/HoudiniOutput.h"
#include "HoudiniEngineRuntime/Private/HoudiniRuntimeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPDGImporterMessages() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshBuildSettings();
	HOUDINIENGINE_API UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttributes();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPackageParams();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttribute();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGeoPartObject();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEODiscoverMessage;
class UScriptStruct* FHoudiniPDGImportBGEODiscoverMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEODiscoverMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEODiscoverMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniPDGImportBGEODiscoverMessage"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEODiscoverMessage.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniPDGImportBGEODiscoverMessage>()
{
	return FHoudiniPDGImportBGEODiscoverMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandletGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommandletGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Message used to find/discover running commandlets\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Message used to find/discover running commandlets" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPDGImportBGEODiscoverMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::NewProp_CommandletGuid_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The GUID of the commandlet we are looking for\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The GUID of the commandlet we are looking for" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::NewProp_CommandletGuid = { "CommandletGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEODiscoverMessage, CommandletGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::NewProp_CommandletGuid_MetaData), Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::NewProp_CommandletGuid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::NewProp_CommandletGuid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniPDGImportBGEODiscoverMessage",
		Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::PropPointers),
		sizeof(FHoudiniPDGImportBGEODiscoverMessage),
		alignof(FHoudiniPDGImportBGEODiscoverMessage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEODiscoverMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEODiscoverMessage.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEODiscoverMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOMessage;
class UScriptStruct* FHoudiniPDGImportBGEOMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniPDGImportBGEOMessage"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOMessage.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniPDGImportBGEOMessage>()
{
	return FHoudiniPDGImportBGEOMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TOPNodeId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TOPNodeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkItemId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WorkItemId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PackageParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshGenerationProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshGenerationProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshBuildSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshBuildSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPDGImportBGEOMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_FilePath_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// BGEO file path\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BGEO file path" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_FilePath_MetaData), Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_FilePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_Name_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PDG work item name\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PDG work item name" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_TOPNodeId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TOP/PDG info\n// TOP node ID\n// HAPI_NodeId TOPNodeId;\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TOP/PDG info\nTOP node ID\nHAPI_NodeId TOPNodeId;" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_TOPNodeId = { "TOPNodeId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, TOPNodeId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_TOPNodeId_MetaData), Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_TOPNodeId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_WorkItemId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Work item id\n// HAPI_PDG_WorkItemId WorkItemId;\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Work item id\nHAPI_PDG_WorkItemId WorkItemId;" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_WorkItemId = { "WorkItemId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, WorkItemId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_WorkItemId_MetaData), Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_WorkItemId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_PackageParams_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Package params for the asset \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Package params for the asset" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_PackageParams = { "PackageParams", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, PackageParams), Z_Construct_UScriptStruct_FHoudiniPackageParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_PackageParams_MetaData), Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_PackageParams_MetaData) }; // 447026882
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_StaticMeshGenerationProperties_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Settings used during static mesh generation\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings used during static mesh generation" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_StaticMeshGenerationProperties = { "StaticMeshGenerationProperties", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, StaticMeshGenerationProperties), Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_StaticMeshGenerationProperties_MetaData), Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_StaticMeshGenerationProperties_MetaData) }; // 1000537116
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_MeshBuildSettings_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Static mesh build settings used during mesh builds\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static mesh build settings used during mesh builds" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_MeshBuildSettings = { "MeshBuildSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, MeshBuildSettings), Z_Construct_UScriptStruct_FMeshBuildSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_MeshBuildSettings_MetaData), Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_MeshBuildSettings_MetaData) }; // 355218355
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_TOPNodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_WorkItemId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_PackageParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_StaticMeshGenerationProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_MeshBuildSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniPDGImportBGEOMessage",
		Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::PropPointers),
		sizeof(FHoudiniPDGImportBGEOMessage),
		alignof(FHoudiniPDGImportBGEOMessage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOMessage.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOMessage.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniPDGImportBGEOResult;
	static UEnum* EHoudiniPDGImportBGEOResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniPDGImportBGEOResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniPDGImportBGEOResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("EHoudiniPDGImportBGEOResult"));
		}
		return Z_Registration_Info_UEnum_EHoudiniPDGImportBGEOResult.OuterSingleton;
	}
	template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniPDGImportBGEOResult>()
	{
		return EHoudiniPDGImportBGEOResult_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Statics::Enumerators[] = {
		{ "EHoudiniPDGImportBGEOResult::HPIBR_Failed", (int64)EHoudiniPDGImportBGEOResult::HPIBR_Failed },
		{ "EHoudiniPDGImportBGEOResult::HPIBR_Success", (int64)EHoudiniPDGImportBGEOResult::HPIBR_Success },
		{ "EHoudiniPDGImportBGEOResult::HPIBR_PartialSuccess", (int64)EHoudiniPDGImportBGEOResult::HPIBR_PartialSuccess },
		{ "EHoudiniPDGImportBGEOResult::HIBPR_MAX", (int64)EHoudiniPDGImportBGEOResult::HIBPR_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Statics::Enum_MetaDataParams[] = {
		{ "HIBPR_MAX.Name", "EHoudiniPDGImportBGEOResult::HIBPR_MAX" },
		{ "HPIBR_Failed.Comment", "// Create uassets from the bgeo completely failed.\n" },
		{ "HPIBR_Failed.DisplayName", "Failed" },
		{ "HPIBR_Failed.Name", "EHoudiniPDGImportBGEOResult::HPIBR_Failed" },
		{ "HPIBR_Failed.ToolTip", "Create uassets from the bgeo completely failed." },
		{ "HPIBR_PartialSuccess.Comment", "// Some uassets were created, but there were unsupported objects in the bgeo as well\n" },
		{ "HPIBR_PartialSuccess.DisplayName", "Partial Success" },
		{ "HPIBR_PartialSuccess.Name", "EHoudiniPDGImportBGEOResult::HPIBR_PartialSuccess" },
		{ "HPIBR_PartialSuccess.ToolTip", "Some uassets were created, but there were unsupported objects in the bgeo as well" },
		{ "HPIBR_Success.Comment", "// Successfully created uassets for all content in the bgeo\n" },
		{ "HPIBR_Success.DisplayName", "Success" },
		{ "HPIBR_Success.Name", "EHoudiniPDGImportBGEOResult::HPIBR_Success" },
		{ "HPIBR_Success.ToolTip", "Successfully created uassets for all content in the bgeo" },
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		"EHoudiniPDGImportBGEOResult",
		"EHoudiniPDGImportBGEOResult",
		Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniPDGImportBGEOResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniPDGImportBGEOResult.InnerSingleton, Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniPDGImportBGEOResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniGenericAttributes;
class UScriptStruct* FHoudiniGenericAttributes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniGenericAttributes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniGenericAttributes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniGenericAttributes, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniGenericAttributes"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniGenericAttributes.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniGenericAttributes>()
{
	return FHoudiniGenericAttributes::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyAttributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniGenericAttributes>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewProp_PropertyAttributes_Inner = { "PropertyAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniGenericAttribute, METADATA_PARAMS(0, nullptr) }; // 633736567
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewProp_PropertyAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewProp_PropertyAttributes = { "PropertyAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGenericAttributes, PropertyAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewProp_PropertyAttributes_MetaData), Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewProp_PropertyAttributes_MetaData) }; // 633736567
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewProp_PropertyAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewProp_PropertyAttributes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniGenericAttributes",
		Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::PropPointers),
		sizeof(FHoudiniGenericAttributes),
		alignof(FHoudiniGenericAttributes),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttributes()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniGenericAttributes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniGenericAttributes.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniGenericAttributes.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutputObject;
class UScriptStruct* FHoudiniPDGImportNodeOutputObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutputObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutputObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniPDGImportNodeOutputObject"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutputObject.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniPDGImportNodeOutputObject>()
{
	return FHoudiniPDGImportNodeOutputObject::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackagePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenericAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GenericAttributes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CachedAttributes_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CachedAttributes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CachedAttributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPDGImportNodeOutputObject>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_Identifier_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportNodeOutputObject, Identifier), Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_Identifier_MetaData), Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_Identifier_MetaData) }; // 927978414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_PackagePath_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportNodeOutputObject, PackagePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_PackagePath_MetaData), Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_PackagePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_GenericAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_GenericAttributes = { "GenericAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportNodeOutputObject, GenericAttributes), Z_Construct_UScriptStruct_FHoudiniGenericAttributes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_GenericAttributes_MetaData), Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_GenericAttributes_MetaData) }; // 1688330738
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes_ValueProp = { "CachedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes_Key_KeyProp = { "CachedAttributes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes = { "CachedAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportNodeOutputObject, CachedAttributes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes_MetaData), Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_PackagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_GenericAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniPDGImportNodeOutputObject",
		Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::PropPointers),
		sizeof(FHoudiniPDGImportNodeOutputObject),
		alignof(FHoudiniPDGImportNodeOutputObject),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutputObject.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutputObject.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutputObject.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutput;
class UScriptStruct* FHoudiniPDGImportNodeOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniPDGImportNodeOutput"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutput.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniPDGImportNodeOutput>()
{
	return FHoudiniPDGImportNodeOutput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniGeoPartObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniGeoPartObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HoudiniGeoPartObjects;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputObjects;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedOutputPartData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedOutputPartData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancedOutputPartData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPDGImportNodeOutput>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_HoudiniGeoPartObjects_Inner = { "HoudiniGeoPartObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniGeoPartObject, METADATA_PARAMS(0, nullptr) }; // 296226419
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_HoudiniGeoPartObjects_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_HoudiniGeoPartObjects = { "HoudiniGeoPartObjects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportNodeOutput, HoudiniGeoPartObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_HoudiniGeoPartObjects_MetaData), Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_HoudiniGeoPartObjects_MetaData) }; // 296226419
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_OutputObjects_Inner = { "OutputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject, METADATA_PARAMS(0, nullptr) }; // 926828009
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_OutputObjects_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_OutputObjects = { "OutputObjects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportNodeOutput, OutputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_OutputObjects_MetaData), Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_OutputObjects_MetaData) }; // 926828009
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_InstancedOutputPartData_Inner = { "InstancedOutputPartData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData, METADATA_PARAMS(0, nullptr) }; // 1080075274
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_InstancedOutputPartData_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_InstancedOutputPartData = { "InstancedOutputPartData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportNodeOutput, InstancedOutputPartData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_InstancedOutputPartData_MetaData), Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_InstancedOutputPartData_MetaData) }; // 1080075274
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_HoudiniGeoPartObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_HoudiniGeoPartObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_OutputObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_OutputObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_InstancedOutputPartData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_InstancedOutputPartData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniPDGImportNodeOutput",
		Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::PropPointers),
		sizeof(FHoudiniPDGImportNodeOutput),
		alignof(FHoudiniPDGImportNodeOutput),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutput.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutput.InnerSingleton;
	}

static_assert(std::is_polymorphic<FHoudiniPDGImportBGEOResultMessage>() == std::is_polymorphic<FHoudiniPDGImportBGEOMessage>(), "USTRUCT FHoudiniPDGImportBGEOResultMessage cannot be polymorphic unless super FHoudiniPDGImportBGEOMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOResultMessage;
class UScriptStruct* FHoudiniPDGImportBGEOResultMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOResultMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOResultMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniPDGImportBGEOResultMessage"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOResultMessage.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniPDGImportBGEOResultMessage>()
{
	return FHoudiniPDGImportBGEOResultMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImportResult_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportResult_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ImportResult;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Outputs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPDGImportBGEOResultMessage>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_ImportResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_ImportResult_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Result of the bgeo import -> uassets\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Result of the bgeo import -> uassets" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_ImportResult = { "ImportResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEOResultMessage, ImportResult), Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_ImportResult_MetaData), Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_ImportResult_MetaData) }; // 2284371136
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput, METADATA_PARAMS(0, nullptr) }; // 1208360773
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_Outputs_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEOResultMessage, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_Outputs_MetaData), Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_Outputs_MetaData) }; // 1208360773
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_ImportResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_ImportResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_Outputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_Outputs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage,
		&NewStructOps,
		"HoudiniPDGImportBGEOResultMessage",
		Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::PropPointers),
		sizeof(FHoudiniPDGImportBGEOResultMessage),
		alignof(FHoudiniPDGImportBGEOResultMessage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOResultMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOResultMessage.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOResultMessage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_Statics::EnumInfo[] = {
		{ EHoudiniPDGImportBGEOResult_StaticEnum, TEXT("EHoudiniPDGImportBGEOResult"), &Z_Registration_Info_UEnum_EHoudiniPDGImportBGEOResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2284371136U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_Statics::ScriptStructInfo[] = {
		{ FHoudiniPDGImportBGEODiscoverMessage::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::NewStructOps, TEXT("HoudiniPDGImportBGEODiscoverMessage"), &Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEODiscoverMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPDGImportBGEODiscoverMessage), 1128887807U) },
		{ FHoudiniPDGImportBGEOMessage::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewStructOps, TEXT("HoudiniPDGImportBGEOMessage"), &Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPDGImportBGEOMessage), 1980446546U) },
		{ FHoudiniGenericAttributes::StaticStruct, Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewStructOps, TEXT("HoudiniGenericAttributes"), &Z_Registration_Info_UScriptStruct_HoudiniGenericAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniGenericAttributes), 1688330738U) },
		{ FHoudiniPDGImportNodeOutputObject::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewStructOps, TEXT("HoudiniPDGImportNodeOutputObject"), &Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutputObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPDGImportNodeOutputObject), 926828009U) },
		{ FHoudiniPDGImportNodeOutput::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewStructOps, TEXT("HoudiniPDGImportNodeOutput"), &Z_Registration_Info_UScriptStruct_HoudiniPDGImportNodeOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPDGImportNodeOutput), 1208360773U) },
		{ FHoudiniPDGImportBGEOResultMessage::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewStructOps, TEXT("HoudiniPDGImportBGEOResultMessage"), &Z_Registration_Info_UScriptStruct_HoudiniPDGImportBGEOResultMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPDGImportBGEOResultMessage), 1463118931U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_2130166118(TEXT("/Script/HoudiniEngine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
