// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEditorNodeSyncSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "HoudiniEngineRuntime/Private/HoudiniRuntimeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEditorNodeSyncSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UAssetEditorUISubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshBuildSettings();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_NoRegister();
	HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInput_NoRegister();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniNodeSyncOptions;
class UScriptStruct* FHoudiniNodeSyncOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniNodeSyncOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniNodeSyncOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("HoudiniNodeSyncOptions"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniNodeSyncOptions.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<FHoudiniNodeSyncOptions>()
{
	return FHoudiniNodeSyncOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FetchNodePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FetchNodePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendNodePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SendNodePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnrealAssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UnrealAssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnrealAssetFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UnrealAssetFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseOutputNodes_MetaData[];
#endif
		static void NewProp_bUseOutputNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOutputNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFetchToWorld_MetaData[];
#endif
		static void NewProp_bFetchToWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFetchToWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnrealActorName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UnrealActorName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnrealActorFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UnrealActorFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplaceExisting_MetaData[];
#endif
		static void NewProp_bReplaceExisting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceExisting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverwriteSkeleton_MetaData[];
#endif
		static void NewProp_bOverwriteSkeleton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverwriteSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonAssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SkeletonAssetPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoBake_MetaData[];
#endif
		static void NewProp_bAutoBake_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoBake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSyncWorldInput_MetaData[];
#endif
		static void NewProp_bSyncWorldInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncWorldInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshGenerationProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshGenerationProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshBuildSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshBuildSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniEditorNodeSyncSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniNodeSyncOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_FetchNodePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniEditorNodeSyncSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_FetchNodePath = { "FetchNodePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniNodeSyncOptions, FetchNodePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_FetchNodePath_MetaData), Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_FetchNodePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_SendNodePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniEditorNodeSyncSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_SendNodePath = { "SendNodePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniNodeSyncOptions, SendNodePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_SendNodePath_MetaData), Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_SendNodePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_UnrealAssetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniEditorNodeSyncSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_UnrealAssetName = { "UnrealAssetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniNodeSyncOptions, UnrealAssetName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_UnrealAssetName_MetaData), Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_UnrealAssetName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_UnrealAssetFolder_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniEditorNodeSyncSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_UnrealAssetFolder = { "UnrealAssetFolder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniNodeSyncOptions, UnrealAssetFolder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_UnrealAssetFolder_MetaData), Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_UnrealAssetFolder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bUseOutputNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniEditorNodeSyncSubsystem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bUseOutputNodes_SetBit(void* Obj)
	{
		((FHoudiniNodeSyncOptions*)Obj)->bUseOutputNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bUseOutputNodes = { "bUseOutputNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniNodeSyncOptions), &Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bUseOutputNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bUseOutputNodes_MetaData), Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bUseOutputNodes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bFetchToWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniEditorNodeSyncSubsystem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bFetchToWorld_SetBit(void* Obj)
	{
		((FHoudiniNodeSyncOptions*)Obj)->bFetchToWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bFetchToWorld = { "bFetchToWorld", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniNodeSyncOptions), &Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bFetchToWorld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bFetchToWorld_MetaData), Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bFetchToWorld_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_UnrealActorName_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniEditorNodeSyncSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_UnrealActorName = { "UnrealActorName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniNodeSyncOptions, UnrealActorName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_UnrealActorName_MetaData), Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_UnrealActorName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_UnrealActorFolder_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniEditorNodeSyncSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_UnrealActorFolder = { "UnrealActorFolder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniNodeSyncOptions, UnrealActorFolder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_UnrealActorFolder_MetaData), Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_UnrealActorFolder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bReplaceExisting_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniEditorNodeSyncSubsystem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bReplaceExisting_SetBit(void* Obj)
	{
		((FHoudiniNodeSyncOptions*)Obj)->bReplaceExisting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bReplaceExisting = { "bReplaceExisting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniNodeSyncOptions), &Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bReplaceExisting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bReplaceExisting_MetaData), Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bReplaceExisting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bOverwriteSkeleton_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniEditorNodeSyncSubsystem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bOverwriteSkeleton_SetBit(void* Obj)
	{
		((FHoudiniNodeSyncOptions*)Obj)->bOverwriteSkeleton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bOverwriteSkeleton = { "bOverwriteSkeleton", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniNodeSyncOptions), &Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bOverwriteSkeleton_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bOverwriteSkeleton_MetaData), Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bOverwriteSkeleton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_SkeletonAssetPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniEditorNodeSyncSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_SkeletonAssetPath = { "SkeletonAssetPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniNodeSyncOptions, SkeletonAssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_SkeletonAssetPath_MetaData), Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_SkeletonAssetPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bAutoBake_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniEditorNodeSyncSubsystem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bAutoBake_SetBit(void* Obj)
	{
		((FHoudiniNodeSyncOptions*)Obj)->bAutoBake = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bAutoBake = { "bAutoBake", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniNodeSyncOptions), &Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bAutoBake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bAutoBake_MetaData), Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bAutoBake_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bSyncWorldInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniEditorNodeSyncSubsystem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bSyncWorldInput_SetBit(void* Obj)
	{
		((FHoudiniNodeSyncOptions*)Obj)->bSyncWorldInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bSyncWorldInput = { "bSyncWorldInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniNodeSyncOptions), &Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bSyncWorldInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bSyncWorldInput_MetaData), Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bSyncWorldInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_StaticMeshGenerationProperties_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*, meta = (ShowOnlyInnerProperties)*/" },
#endif
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/HoudiniEditorNodeSyncSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ", meta = (ShowOnlyInnerProperties)" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_StaticMeshGenerationProperties = { "StaticMeshGenerationProperties", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniNodeSyncOptions, StaticMeshGenerationProperties), Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_StaticMeshGenerationProperties_MetaData), Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_StaticMeshGenerationProperties_MetaData) }; // 1000537116
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_StaticMeshBuildSettings_MetaData[] = {
		{ "Category", "HoudiniMeshGeneration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Build Settings to be used when generating the Static Meshes for this Houdini Asset\n" },
#endif
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/HoudiniEditorNodeSyncSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Build Settings to be used when generating the Static Meshes for this Houdini Asset" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_StaticMeshBuildSettings = { "StaticMeshBuildSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniNodeSyncOptions, StaticMeshBuildSettings), Z_Construct_UScriptStruct_FMeshBuildSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_StaticMeshBuildSettings_MetaData), Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_StaticMeshBuildSettings_MetaData) }; // 355218355
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_FetchNodePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_SendNodePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_UnrealAssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_UnrealAssetFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bUseOutputNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bFetchToWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_UnrealActorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_UnrealActorFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bReplaceExisting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bOverwriteSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_SkeletonAssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bAutoBake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_bSyncWorldInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_StaticMeshGenerationProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewProp_StaticMeshBuildSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		nullptr,
		&NewStructOps,
		"HoudiniNodeSyncOptions",
		Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::PropPointers),
		sizeof(FHoudiniNodeSyncOptions),
		alignof(FHoudiniNodeSyncOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniNodeSyncOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniNodeSyncOptions.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniNodeSyncOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UHoudiniEditorNodeSyncSubsystem::execSendContentBrowserSelection)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_SelectedAssets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendContentBrowserSelection(Z_Param_Out_SelectedAssets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniEditorNodeSyncSubsystem::execSendWorldSelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendWorldSelection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniEditorNodeSyncSubsystem::execFetchFromHoudini)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FetchFromHoudini();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniEditorNodeSyncSubsystem::execSendToHoudini)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_SelectedAssets);
		P_GET_PROPERTY(FIntProperty,Z_Param_ObjectIndex);
		P_GET_UBOOL_REF(Z_Param_Out_bSendWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendToHoudini(Z_Param_Out_SelectedAssets,Z_Param_ObjectIndex,Z_Param_Out_bSendWorld);
		P_NATIVE_END;
	}
	void UHoudiniEditorNodeSyncSubsystem::StaticRegisterNativesUHoudiniEditorNodeSyncSubsystem()
	{
		UClass* Class = UHoudiniEditorNodeSyncSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FetchFromHoudini", &UHoudiniEditorNodeSyncSubsystem::execFetchFromHoudini },
			{ "SendContentBrowserSelection", &UHoudiniEditorNodeSyncSubsystem::execSendContentBrowserSelection },
			{ "SendToHoudini", &UHoudiniEditorNodeSyncSubsystem::execSendToHoudini },
			{ "SendWorldSelection", &UHoudiniEditorNodeSyncSubsystem::execSendWorldSelection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_FetchFromHoudini_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_FetchFromHoudini_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini" },
		{ "ModuleRelativePath", "Public/HoudiniEditorNodeSyncSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_FetchFromHoudini_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem, nullptr, "FetchFromHoudini", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_FetchFromHoudini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_FetchFromHoudini_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_FetchFromHoudini()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_FetchFromHoudini_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendContentBrowserSelection_Statics
	{
		struct HoudiniEditorNodeSyncSubsystem_eventSendContentBrowserSelection_Parms
		{
			TArray<UObject*> SelectedAssets;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendContentBrowserSelection_Statics::NewProp_SelectedAssets_Inner = { "SelectedAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendContentBrowserSelection_Statics::NewProp_SelectedAssets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendContentBrowserSelection_Statics::NewProp_SelectedAssets = { "SelectedAssets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniEditorNodeSyncSubsystem_eventSendContentBrowserSelection_Parms, SelectedAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendContentBrowserSelection_Statics::NewProp_SelectedAssets_MetaData), Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendContentBrowserSelection_Statics::NewProp_SelectedAssets_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendContentBrowserSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendContentBrowserSelection_Statics::NewProp_SelectedAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendContentBrowserSelection_Statics::NewProp_SelectedAssets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendContentBrowserSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini" },
		{ "ModuleRelativePath", "Public/HoudiniEditorNodeSyncSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendContentBrowserSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem, nullptr, "SendContentBrowserSelection", nullptr, nullptr, Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendContentBrowserSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendContentBrowserSelection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendContentBrowserSelection_Statics::HoudiniEditorNodeSyncSubsystem_eventSendContentBrowserSelection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendContentBrowserSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendContentBrowserSelection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendContentBrowserSelection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendContentBrowserSelection_Statics::HoudiniEditorNodeSyncSubsystem_eventSendContentBrowserSelection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendContentBrowserSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendContentBrowserSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics
	{
		struct HoudiniEditorNodeSyncSubsystem_eventSendToHoudini_Parms
		{
			TArray<UObject*> SelectedAssets;
			int32 ObjectIndex;
			bool bSendWorld;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedAssets;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSendWorld_MetaData[];
#endif
		static void NewProp_bSendWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendWorld;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::NewProp_SelectedAssets_Inner = { "SelectedAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::NewProp_SelectedAssets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::NewProp_SelectedAssets = { "SelectedAssets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniEditorNodeSyncSubsystem_eventSendToHoudini_Parms, SelectedAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::NewProp_SelectedAssets_MetaData), Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::NewProp_SelectedAssets_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::NewProp_ObjectIndex = { "ObjectIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniEditorNodeSyncSubsystem_eventSendToHoudini_Parms, ObjectIndex), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::NewProp_bSendWorld_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::NewProp_bSendWorld_SetBit(void* Obj)
	{
		((HoudiniEditorNodeSyncSubsystem_eventSendToHoudini_Parms*)Obj)->bSendWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::NewProp_bSendWorld = { "bSendWorld", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniEditorNodeSyncSubsystem_eventSendToHoudini_Parms), &Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::NewProp_bSendWorld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::NewProp_bSendWorld_MetaData), Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::NewProp_bSendWorld_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::NewProp_SelectedAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::NewProp_SelectedAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::NewProp_ObjectIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::NewProp_bSendWorld,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini" },
		{ "ModuleRelativePath", "Public/HoudiniEditorNodeSyncSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem, nullptr, "SendToHoudini", nullptr, nullptr, Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::HoudiniEditorNodeSyncSubsystem_eventSendToHoudini_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::HoudiniEditorNodeSyncSubsystem_eventSendToHoudini_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendWorldSelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendWorldSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini" },
		{ "ModuleRelativePath", "Public/HoudiniEditorNodeSyncSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendWorldSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem, nullptr, "SendWorldSelection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendWorldSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendWorldSelection_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendWorldSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendWorldSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniEditorNodeSyncSubsystem);
	UClass* Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_NoRegister()
	{
		return UHoudiniEditorNodeSyncSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeSyncWorldInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeSyncWorldInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeSyncCBInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeSyncCBInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetEditorUISubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_FetchFromHoudini, "FetchFromHoudini" }, // 2155139797
		{ &Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendContentBrowserSelection, "SendContentBrowserSelection" }, // 1241539559
		{ &Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendToHoudini, "SendToHoudini" }, // 2811515101
		{ &Z_Construct_UFunction_UHoudiniEditorNodeSyncSubsystem_SendWorldSelection, "SendWorldSelection" }, // 3489843810
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniEditorNodeSyncSubsystem.h" },
		{ "ModuleRelativePath", "Public/HoudiniEditorNodeSyncSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics::NewProp_NodeSyncWorldInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniEditorNodeSyncSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics::NewProp_NodeSyncWorldInput = { "NodeSyncWorldInput", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniEditorNodeSyncSubsystem, NodeSyncWorldInput), Z_Construct_UClass_UHoudiniInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics::NewProp_NodeSyncWorldInput_MetaData), Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics::NewProp_NodeSyncWorldInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics::NewProp_NodeSyncCBInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniEditorNodeSyncSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics::NewProp_NodeSyncCBInput = { "NodeSyncCBInput", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniEditorNodeSyncSubsystem, NodeSyncCBInput), Z_Construct_UClass_UHoudiniInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics::NewProp_NodeSyncCBInput_MetaData), Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics::NewProp_NodeSyncCBInput_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics::NewProp_NodeSyncWorldInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics::NewProp_NodeSyncCBInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniEditorNodeSyncSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics::ClassParams = {
		&UHoudiniEditorNodeSyncSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem()
	{
		if (!Z_Registration_Info_UClass_UHoudiniEditorNodeSyncSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniEditorNodeSyncSubsystem.OuterSingleton, Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniEditorNodeSyncSubsystem.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniEditorNodeSyncSubsystem>()
	{
		return UHoudiniEditorNodeSyncSubsystem::StaticClass();
	}
	UHoudiniEditorNodeSyncSubsystem::UHoudiniEditorNodeSyncSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniEditorNodeSyncSubsystem);
	UHoudiniEditorNodeSyncSubsystem::~UHoudiniEditorNodeSyncSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FHoudiniNodeSyncOptions::StaticStruct, Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics::NewStructOps, TEXT("HoudiniNodeSyncOptions"), &Z_Registration_Info_UScriptStruct_HoudiniNodeSyncOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniNodeSyncOptions), 304998858U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem, UHoudiniEditorNodeSyncSubsystem::StaticClass, TEXT("UHoudiniEditorNodeSyncSubsystem"), &Z_Registration_Info_UClass_UHoudiniEditorNodeSyncSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniEditorNodeSyncSubsystem), 817893739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_3553131755(TEXT("/Script/HoudiniEngineEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
