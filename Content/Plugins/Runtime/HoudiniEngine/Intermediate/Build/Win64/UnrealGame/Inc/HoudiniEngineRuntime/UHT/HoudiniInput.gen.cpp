// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniInput.h"
#include "HoudiniEngineRuntime/Private/HoudiniInputTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInput() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInput();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInput_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputObject_NoRegister();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInputObjectSettings();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	void UHoudiniInput::StaticRegisterNativesUHoudiniInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInput);
	UClass* Z_Construct_UClass_UHoudiniInput_NoRegister()
	{
		return UHoudiniInput::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeUIAdvancedIsExpanded_MetaData[];
#endif
		static void NewProp_bLandscapeUIAdvancedIsExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeUIAdvancedIsExpanded;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviousType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetNodeId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AssetNodeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputNodeId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputNodeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParmId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParmId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsObjectPathParameter_MetaData[];
#endif
		static void NewProp_bIsObjectPathParameter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsObjectPathParameter;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CreatedDataNodeIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedDataNodeIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CreatedDataNodeIds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasChanged_MetaData[];
#endif
		static void NewProp_bHasChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsToTriggerUpdate_MetaData[];
#endif
		static void NewProp_bNeedsToTriggerUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsToTriggerUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Help_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Help;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPackBeforeMerge_MetaData[];
#endif
		static void NewProp_bPackBeforeMerge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPackBeforeMerge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDirectlyConnectHdas_MetaData[];
#endif
		static void NewProp_bDirectlyConnectHdas_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDirectlyConnectHdas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportOptionsMenuExpanded_MetaData[];
#endif
		static void NewProp_bExportOptionsMenuExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportOptionsMenuExpanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGeometryInputsMenuExpanded_MetaData[];
#endif
		static void NewProp_bGeometryInputsMenuExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGeometryInputsMenuExpanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeOptionsMenuExpanded_MetaData[];
#endif
		static void NewProp_bLandscapeOptionsMenuExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeOptionsMenuExpanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWorldInputsMenuExpanded_MetaData[];
#endif
		static void NewProp_bWorldInputsMenuExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldInputsMenuExpanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCurveInputsMenuExpanded_MetaData[];
#endif
		static void NewProp_bCurveInputsMenuExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCurveInputsMenuExpanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCurvePointSelectionMenuExpanded_MetaData[];
#endif
		static void NewProp_bCurvePointSelectionMenuExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCurvePointSelectionMenuExpanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCurvePointSelectionUseAbsLocation_MetaData[];
#endif
		static void NewProp_bCurvePointSelectionUseAbsLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCurvePointSelectionUseAbsLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCurvePointSelectionUseAbsRotation_MetaData[];
#endif
		static void NewProp_bCurvePointSelectionUseAbsRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCurvePointSelectionUseAbsRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCookOnCurveChanged_MetaData[];
#endif
		static void NewProp_bCookOnCurveChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookOnCurveChanged;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryInputObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryInputObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeometryInputObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStaticMeshChanged_MetaData[];
#endif
		static void NewProp_bStaticMeshChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStaticMeshChanged;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TransformUIExpanded_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformUIExpanded_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformUIExpanded;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInputAssetConnectedInHoudini_MetaData[];
#endif
		static void NewProp_bInputAssetConnectedInHoudini_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInputAssetConnectedInHoudini;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveInputObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveInputObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveInputObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCurveOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultCurveOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeHasExportTypeChanged_MetaData[];
#endif
		static void NewProp_bLandscapeHasExportTypeChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeHasExportTypeChanged;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldInputObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldInputObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldInputObjects;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldInputBoundSelectorObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldInputBoundSelectorObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldInputBoundSelectorObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsWorldInputBoundSelector_MetaData[];
#endif
		static void NewProp_bIsWorldInputBoundSelector_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWorldInputBoundSelector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWorldInputBoundSelectorAutoUpdate_MetaData[];
#endif
		static void NewProp_bWorldInputBoundSelectorAutoUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldInputBoundSelectorAutoUpdate;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeSelectedComponents_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeSelectedComponents_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_LandscapeSelectedComponents;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputNodesPendingDelete_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputNodesPendingDelete_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_InputNodesPendingDelete;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastInsertedInputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInsertedInputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LastInsertedInputs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastUndoDeletedInputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastUndoDeletedInputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LastUndoDeletedInputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeControlVisiblity_MetaData[];
#endif
		static void NewProp_bLandscapeControlVisiblity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeControlVisiblity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanDeleteHoudiniNodes_MetaData[];
#endif
		static void NewProp_bCanDeleteHoudiniNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDeleteHoudiniNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeSplinesExportOptionsMenuExpanded_MetaData[];
#endif
		static void NewProp_bLandscapeSplinesExportOptionsMenuExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeSplinesExportOptionsMenuExpanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniInput.h" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeUIAdvancedIsExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeUIAdvancedIsExpanded_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bLandscapeUIAdvancedIsExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeUIAdvancedIsExpanded = { "bLandscapeUIAdvancedIsExpanded", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeUIAdvancedIsExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeUIAdvancedIsExpanded_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeUIAdvancedIsExpanded_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Name_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name of the input / Object path parameter\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the input / Object path parameter" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Label_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Label of the SOP input or of the object path parameter\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Label of the SOP input or of the object path parameter" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, Label), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Label_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Label_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input type\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input type" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, Type), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Type_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Type_MetaData) }; // 1680800299
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_PreviousType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_PreviousType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Previous type, used to detect input type changes\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Previous type, used to detect input type changes" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_PreviousType = { "PreviousType", nullptr, (EPropertyFlags)0x0020080000202000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, PreviousType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_PreviousType_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_PreviousType_MetaData) }; // 1680800299
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_AssetNodeId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NodeId of the asset / object merge we are associated with\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NodeId of the asset / object merge we are associated with" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_AssetNodeId = { "AssetNodeId", nullptr, (EPropertyFlags)0x0020080000202000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, AssetNodeId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_AssetNodeId_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_AssetNodeId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodeId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NodeId of the created input node \n// when there is multiple inputs objects, this will be the merge node.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NodeId of the created input node\nwhen there is multiple inputs objects, this will be the merge node." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodeId = { "InputNodeId", nullptr, (EPropertyFlags)0x0020080400202000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, InputNodeId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodeId_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodeId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// SOP input index (-1 if we're an object path input)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SOP input index (-1 if we're an object path input)" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputIndex = { "InputIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, InputIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputIndex_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_ParmId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Parameter Id of the associated object path parameter (-1 if we're a SOP input)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parameter Id of the associated object path parameter (-1 if we're a SOP input)" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_ParmId = { "ParmId", nullptr, (EPropertyFlags)0x0020080400202000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, ParmId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_ParmId_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_ParmId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsObjectPathParameter_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates if we're an object path parameter input\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates if we're an object path parameter input" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsObjectPathParameter_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bIsObjectPathParameter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsObjectPathParameter = { "bIsObjectPathParameter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsObjectPathParameter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsObjectPathParameter_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsObjectPathParameter_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CreatedDataNodeIds_Inner = { "CreatedDataNodeIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CreatedDataNodeIds_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array containing all the node Ids created by this input\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array containing all the node Ids created by this input" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CreatedDataNodeIds = { "CreatedDataNodeIds", nullptr, (EPropertyFlags)0x0020080400202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, CreatedDataNodeIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CreatedDataNodeIds_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CreatedDataNodeIds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bHasChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates data connected to this input should be uploaded\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates data connected to this input should be uploaded" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bHasChanged_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bHasChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bHasChanged = { "bHasChanged", nullptr, (EPropertyFlags)0x0020080000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bHasChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bHasChanged_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bHasChanged_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bNeedsToTriggerUpdate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates this input should trigger an HDA update/cook\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates this input should trigger an HDA update/cook" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bNeedsToTriggerUpdate_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bNeedsToTriggerUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bNeedsToTriggerUpdate = { "bNeedsToTriggerUpdate", nullptr, (EPropertyFlags)0x0020080000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bNeedsToTriggerUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bNeedsToTriggerUpdate_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bNeedsToTriggerUpdate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CachedBounds_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached Bounds of this input\n// Used when we cannot access the input objects (ie, during GC)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached Bounds of this input\nUsed when we cannot access the input objects (ie, during GC)" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CachedBounds = { "CachedBounds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, CachedBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CachedBounds_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CachedBounds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Help_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Help for this parameter/input\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Help for this parameter/input" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Help = { "Help", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, Help), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Help_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Help_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bPackBeforeMerge_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates that the geometry must be packed before merging it into the input\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates that the geometry must be packed before merging it into the input" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bPackBeforeMerge_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bPackBeforeMerge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bPackBeforeMerge = { "bPackBeforeMerge", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bPackBeforeMerge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bPackBeforeMerge_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bPackBeforeMerge_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bDirectlyConnectHdas_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates whether HDAs are directly connected in Houdini\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether HDAs are directly connected in Houdini" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bDirectlyConnectHdas_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bDirectlyConnectHdas = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bDirectlyConnectHdas = { "bDirectlyConnectHdas", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bDirectlyConnectHdas_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bDirectlyConnectHdas_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bDirectlyConnectHdas_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportOptionsMenuExpanded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates whether the export options menu is initially collapsed\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether the export options menu is initially collapsed" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportOptionsMenuExpanded_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bExportOptionsMenuExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportOptionsMenuExpanded = { "bExportOptionsMenuExpanded", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportOptionsMenuExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportOptionsMenuExpanded_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportOptionsMenuExpanded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bGeometryInputsMenuExpanded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates whether the input selection list in the NewGeometry UI is collapsed\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether the input selection list in the NewGeometry UI is collapsed" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bGeometryInputsMenuExpanded_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bGeometryInputsMenuExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bGeometryInputsMenuExpanded = { "bGeometryInputsMenuExpanded", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bGeometryInputsMenuExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bGeometryInputsMenuExpanded_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bGeometryInputsMenuExpanded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeOptionsMenuExpanded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates whether the landscape options menu is collapsed\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether the landscape options menu is collapsed" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeOptionsMenuExpanded_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bLandscapeOptionsMenuExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeOptionsMenuExpanded = { "bLandscapeOptionsMenuExpanded", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeOptionsMenuExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeOptionsMenuExpanded_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeOptionsMenuExpanded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputsMenuExpanded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates whether the input selection menu in the NewWorld UI is collapsed\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether the input selection menu in the NewWorld UI is collapsed" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputsMenuExpanded_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bWorldInputsMenuExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputsMenuExpanded = { "bWorldInputsMenuExpanded", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputsMenuExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputsMenuExpanded_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputsMenuExpanded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurveInputsMenuExpanded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates whether the input selection menu in the new Curve UI is collapsed\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether the input selection menu in the new Curve UI is collapsed" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurveInputsMenuExpanded_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bCurveInputsMenuExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurveInputsMenuExpanded = { "bCurveInputsMenuExpanded", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurveInputsMenuExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurveInputsMenuExpanded_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurveInputsMenuExpanded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionMenuExpanded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates whether the spline component point selection control menu in the\n// new Curve input UI is collapsed\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether the spline component point selection control menu in the\nnew Curve input UI is collapsed" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionMenuExpanded_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bCurvePointSelectionMenuExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionMenuExpanded = { "bCurvePointSelectionMenuExpanded", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionMenuExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionMenuExpanded_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionMenuExpanded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionUseAbsLocation_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates whether the spline component point selection control menu\n// uses absolute location\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether the spline component point selection control menu\nuses absolute location" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionUseAbsLocation_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bCurvePointSelectionUseAbsLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionUseAbsLocation = { "bCurvePointSelectionUseAbsLocation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionUseAbsLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionUseAbsLocation_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionUseAbsLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionUseAbsRotation_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates whether the spline component point selection control menu\n// uses absolute rotation\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether the spline component point selection control menu\nuses absolute rotation" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionUseAbsRotation_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bCurvePointSelectionUseAbsRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionUseAbsRotation = { "bCurvePointSelectionUseAbsRotation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionUseAbsRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionUseAbsRotation_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionUseAbsRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCookOnCurveChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates that if trigger cook automatically on curve Input spline modified\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates that if trigger cook automatically on curve Input spline modified" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCookOnCurveChanged_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bCookOnCurveChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCookOnCurveChanged = { "bCookOnCurveChanged", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCookOnCurveChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCookOnCurveChanged_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCookOnCurveChanged_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryInputObjects_Inner = { "GeometryInputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniInputObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryInputObjects_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------------------\n// Geometry objects\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Geometry objects" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryInputObjects = { "GeometryInputObjects", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, GeometryInputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryInputObjects_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryInputObjects_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bStaticMeshChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is set to true when static mesh used for geometry input has changed.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is set to true when static mesh used for geometry input has changed." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bStaticMeshChanged_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bStaticMeshChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bStaticMeshChanged = { "bStaticMeshChanged", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bStaticMeshChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bStaticMeshChanged_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bStaticMeshChanged_MetaData) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_TransformUIExpanded_Inner = { "TransformUIExpanded", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_TransformUIExpanded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Are the transform UI expanded ?\n// Values default to false and are actually added to the array in OnTransformUIExpand()\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Are the transform UI expanded ?\nValues default to false and are actually added to the array in OnTransformUIExpand()" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_TransformUIExpanded = { "TransformUIExpanded", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, TransformUIExpanded), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_TransformUIExpanded_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_TransformUIExpanded_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bInputAssetConnectedInHoudini_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is set to true if the asset input is actually connected inside Houdini.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is set to true if the asset input is actually connected inside Houdini." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bInputAssetConnectedInHoudini_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bInputAssetConnectedInHoudini = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bInputAssetConnectedInHoudini = { "bInputAssetConnectedInHoudini", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bInputAssetConnectedInHoudini_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bInputAssetConnectedInHoudini_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bInputAssetConnectedInHoudini_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CurveInputObjects_Inner = { "CurveInputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniInputObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CurveInputObjects_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------------------\n// Curve/Spline inputs\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve/Spline inputs" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CurveInputObjects = { "CurveInputObjects", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, CurveInputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CurveInputObjects_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CurveInputObjects_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_DefaultCurveOffset_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Offset used when using muiltiple curves\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset used when using muiltiple curves" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_DefaultCurveOffset = { "DefaultCurveOffset", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, DefaultCurveOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_DefaultCurveOffset_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_DefaultCurveOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeHasExportTypeChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------------------\n// Landscape inputs\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Landscape inputs" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeHasExportTypeChanged_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bLandscapeHasExportTypeChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeHasExportTypeChanged = { "bLandscapeHasExportTypeChanged", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeHasExportTypeChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeHasExportTypeChanged_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeHasExportTypeChanged_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputObjects_Inner = { "WorldInputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniInputObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputObjects_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------------------\n// World inputs\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World inputs" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputObjects = { "WorldInputObjects", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, WorldInputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputObjects_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputObjects_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputBoundSelectorObjects_Inner = { "WorldInputBoundSelectorObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputBoundSelectorObjects_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Objects used for automatic bound selection\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Objects used for automatic bound selection" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputBoundSelectorObjects = { "WorldInputBoundSelectorObjects", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, WorldInputBoundSelectorObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputBoundSelectorObjects_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputBoundSelectorObjects_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsWorldInputBoundSelector_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates that this world input is in \"BoundSelector\" mode\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates that this world input is in \"BoundSelector\" mode" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsWorldInputBoundSelector_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bIsWorldInputBoundSelector = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsWorldInputBoundSelector = { "bIsWorldInputBoundSelector", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsWorldInputBoundSelector_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsWorldInputBoundSelector_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsWorldInputBoundSelector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates that selected actors by the bound selectors should update automatically\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates that selected actors by the bound selectors should update automatically" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bWorldInputBoundSelectorAutoUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate = { "bWorldInputBoundSelectorAutoUpdate", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeSelectedComponents_ElementProp = { "LandscapeSelectedComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeSelectedComponents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A cache of the selected landscape components so that it is saved across levels\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A cache of the selected landscape components so that it is saved across levels" },
#endif
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeSelectedComponents = { "LandscapeSelectedComponents", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, LandscapeSelectedComponents), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeSelectedComponents_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeSelectedComponents_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodesPendingDelete_ElementProp = { "InputNodesPendingDelete", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodesPendingDelete_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The node ids of InputNodeIds previously used by this input that are pending delete\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The node ids of InputNodeIds previously used by this input that are pending delete" },
#endif
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodesPendingDelete = { "InputNodesPendingDelete", nullptr, (EPropertyFlags)0x0020080400202000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, InputNodesPendingDelete), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodesPendingDelete_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodesPendingDelete_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastInsertedInputs_Inner = { "LastInsertedInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastInsertedInputs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This array is to record the last insert action, for undo input insertion actions.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This array is to record the last insert action, for undo input insertion actions." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastInsertedInputs = { "LastInsertedInputs", nullptr, (EPropertyFlags)0x0010000000202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, LastInsertedInputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastInsertedInputs_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastInsertedInputs_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastUndoDeletedInputs_Inner = { "LastUndoDeletedInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniInputObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastUndoDeletedInputs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This array is to cache the action of last undo delete action, and redo that action.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This array is to cache the action of last undo delete action, and redo that action." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastUndoDeletedInputs = { "LastUndoDeletedInputs", nullptr, (EPropertyFlags)0x0010000400202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, LastUndoDeletedInputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastUndoDeletedInputs_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastUndoDeletedInputs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeControlVisiblity_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is set to true when layer visibility is controlled by the plugin.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is set to true when layer visibility is controlled by the plugin." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeControlVisiblity_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bLandscapeControlVisiblity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeControlVisiblity = { "bLandscapeControlVisiblity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeControlVisiblity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeControlVisiblity_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeControlVisiblity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCanDeleteHoudiniNodes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCanDeleteHoudiniNodes_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bCanDeleteHoudiniNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCanDeleteHoudiniNodes = { "bCanDeleteHoudiniNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCanDeleteHoudiniNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCanDeleteHoudiniNodes_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCanDeleteHoudiniNodes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeSplinesExportOptionsMenuExpanded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, then the landscape spline export options menu is expanded\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, then the landscape spline export options menu is expanded" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeSplinesExportOptionsMenuExpanded_SetBit(void* Obj)
	{
		((UHoudiniInput*)Obj)->bLandscapeSplinesExportOptionsMenuExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeSplinesExportOptionsMenuExpanded = { "bLandscapeSplinesExportOptionsMenuExpanded", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInput), &Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeSplinesExportOptionsMenuExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeSplinesExportOptionsMenuExpanded_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeSplinesExportOptionsMenuExpanded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputSettings_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Various input settings, such as bExportLODs, bExportSockets etc.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Various input settings, such as bExportLODs, bExportSockets etc." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputSettings = { "InputSettings", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInput, InputSettings), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputSettings_MetaData), Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputSettings_MetaData) }; // 1498337739
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInput_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeUIAdvancedIsExpanded,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_PreviousType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_PreviousType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_AssetNodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_ParmId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsObjectPathParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CreatedDataNodeIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CreatedDataNodeIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bHasChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bNeedsToTriggerUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CachedBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_Help,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bPackBeforeMerge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bDirectlyConnectHdas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bExportOptionsMenuExpanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bGeometryInputsMenuExpanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeOptionsMenuExpanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputsMenuExpanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurveInputsMenuExpanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionMenuExpanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionUseAbsLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCurvePointSelectionUseAbsRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCookOnCurveChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryInputObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_GeometryInputObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bStaticMeshChanged,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_TransformUIExpanded_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_TransformUIExpanded,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bInputAssetConnectedInHoudini,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CurveInputObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_CurveInputObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_DefaultCurveOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeHasExportTypeChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputBoundSelectorObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_WorldInputBoundSelectorObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bIsWorldInputBoundSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeSelectedComponents_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LandscapeSelectedComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodesPendingDelete_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputNodesPendingDelete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastInsertedInputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastInsertedInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastUndoDeletedInputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_LastUndoDeletedInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeControlVisiblity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bCanDeleteHoudiniNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_bLandscapeSplinesExportOptionsMenuExpanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInput_Statics::NewProp_InputSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInput_Statics::ClassParams = {
		&UHoudiniInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInput_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInput_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniInput()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInput.OuterSingleton, Z_Construct_UClass_UHoudiniInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInput.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInput>()
	{
		return UHoudiniInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInput);
	UHoudiniInput::~UHoudiniInput() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UHoudiniInput)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniInput, UHoudiniInput::StaticClass, TEXT("UHoudiniInput"), &Z_Registration_Info_UClass_UHoudiniInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInput), 3972549100U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInput_h_2067750403(TEXT("/Script/HoudiniEngineRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
