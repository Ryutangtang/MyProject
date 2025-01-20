// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniInputObject.h"
#include "../../Source/Runtime/Engine/Classes/Components/SplineMeshComponent.h"
#include "HoudiniEngineRuntime/Private/HoudiniInputTypes.h"
#include "LandscapeSplineSegment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ABrush_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UModel();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBrushType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESplineMeshAxis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSplineMeshParams();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputActor();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputActor_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputAnimation();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputAnimation_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputBlueprint();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputBlueprint_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputBrush();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputBrush_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputCameraComponent();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputCameraComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputDataTable();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputDataTable_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputGeometryCollection();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputGeometryCollection_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputHoudiniAsset();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputHoudiniAsset_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputInstancedMeshComponent();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputLandscape();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputLandscape_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputLandscapeSplineActor();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputLandscapeSplineActor_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputLevelInstance();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputLevelInstance_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputMeshComponent();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputMeshComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputObject();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputObject_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputPackedLevelActor();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputPackedLevelActor_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSceneComponent();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSceneComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSkeletalMesh();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSkeletalMesh_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSkeletalMeshComponent();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSkeletalMeshComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSplineComponent();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSplineComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSplineMeshComponent();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSplineMeshComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputStaticMesh();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputStaticMesh_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniSplineComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBrushInfo();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInputObjectSettings();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniInputObjectType;
	static UEnum* EHoudiniInputObjectType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniInputObjectType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniInputObjectType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniInputObjectType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniInputObjectType.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniInputObjectType>()
	{
		return EHoudiniInputObjectType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType_Statics::Enumerators[] = {
		{ "EHoudiniInputObjectType::Invalid", (int64)EHoudiniInputObjectType::Invalid },
		{ "EHoudiniInputObjectType::Object", (int64)EHoudiniInputObjectType::Object },
		{ "EHoudiniInputObjectType::StaticMesh", (int64)EHoudiniInputObjectType::StaticMesh },
		{ "EHoudiniInputObjectType::SkeletalMesh", (int64)EHoudiniInputObjectType::SkeletalMesh },
		{ "EHoudiniInputObjectType::SceneComponent", (int64)EHoudiniInputObjectType::SceneComponent },
		{ "EHoudiniInputObjectType::StaticMeshComponent", (int64)EHoudiniInputObjectType::StaticMeshComponent },
		{ "EHoudiniInputObjectType::InstancedStaticMeshComponent", (int64)EHoudiniInputObjectType::InstancedStaticMeshComponent },
		{ "EHoudiniInputObjectType::SplineComponent", (int64)EHoudiniInputObjectType::SplineComponent },
		{ "EHoudiniInputObjectType::HoudiniSplineComponent", (int64)EHoudiniInputObjectType::HoudiniSplineComponent },
		{ "EHoudiniInputObjectType::HoudiniAssetComponent", (int64)EHoudiniInputObjectType::HoudiniAssetComponent },
		{ "EHoudiniInputObjectType::Actor", (int64)EHoudiniInputObjectType::Actor },
		{ "EHoudiniInputObjectType::Landscape", (int64)EHoudiniInputObjectType::Landscape },
		{ "EHoudiniInputObjectType::Brush", (int64)EHoudiniInputObjectType::Brush },
		{ "EHoudiniInputObjectType::CameraComponent", (int64)EHoudiniInputObjectType::CameraComponent },
		{ "EHoudiniInputObjectType::DataTable", (int64)EHoudiniInputObjectType::DataTable },
		{ "EHoudiniInputObjectType::HoudiniAssetActor", (int64)EHoudiniInputObjectType::HoudiniAssetActor },
		{ "EHoudiniInputObjectType::FoliageType_InstancedStaticMesh", (int64)EHoudiniInputObjectType::FoliageType_InstancedStaticMesh },
		{ "EHoudiniInputObjectType::GeometryCollection", (int64)EHoudiniInputObjectType::GeometryCollection },
		{ "EHoudiniInputObjectType::GeometryCollectionComponent", (int64)EHoudiniInputObjectType::GeometryCollectionComponent },
		{ "EHoudiniInputObjectType::GeometryCollectionActor_Deprecated", (int64)EHoudiniInputObjectType::GeometryCollectionActor_Deprecated },
		{ "EHoudiniInputObjectType::SkeletalMeshComponent", (int64)EHoudiniInputObjectType::SkeletalMeshComponent },
		{ "EHoudiniInputObjectType::LandscapeSplineActor", (int64)EHoudiniInputObjectType::LandscapeSplineActor },
		{ "EHoudiniInputObjectType::LandscapeSplinesComponent", (int64)EHoudiniInputObjectType::LandscapeSplinesComponent },
		{ "EHoudiniInputObjectType::Blueprint", (int64)EHoudiniInputObjectType::Blueprint },
		{ "EHoudiniInputObjectType::Animation", (int64)EHoudiniInputObjectType::Animation },
		{ "EHoudiniInputObjectType::SplineMeshComponent", (int64)EHoudiniInputObjectType::SplineMeshComponent },
		{ "EHoudiniInputObjectType::LevelInstance", (int64)EHoudiniInputObjectType::LevelInstance },
		{ "EHoudiniInputObjectType::PackedLevelActor", (int64)EHoudiniInputObjectType::PackedLevelActor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType_Statics::Enum_MetaDataParams[] = {
		{ "Actor.Name", "EHoudiniInputObjectType::Actor" },
		{ "Animation.Name", "EHoudiniInputObjectType::Animation" },
		{ "Blueprint.Name", "EHoudiniInputObjectType::Blueprint" },
		{ "Brush.Name", "EHoudiniInputObjectType::Brush" },
		{ "CameraComponent.Name", "EHoudiniInputObjectType::CameraComponent" },
		{ "DataTable.Name", "EHoudiniInputObjectType::DataTable" },
		{ "FoliageType_InstancedStaticMesh.Name", "EHoudiniInputObjectType::FoliageType_InstancedStaticMesh" },
		{ "GeometryCollection.Name", "EHoudiniInputObjectType::GeometryCollection" },
		{ "GeometryCollectionActor_Deprecated.Name", "EHoudiniInputObjectType::GeometryCollectionActor_Deprecated" },
		{ "GeometryCollectionComponent.Name", "EHoudiniInputObjectType::GeometryCollectionComponent" },
		{ "HoudiniAssetActor.Name", "EHoudiniInputObjectType::HoudiniAssetActor" },
		{ "HoudiniAssetComponent.Name", "EHoudiniInputObjectType::HoudiniAssetComponent" },
		{ "HoudiniSplineComponent.Name", "EHoudiniInputObjectType::HoudiniSplineComponent" },
		{ "InstancedStaticMeshComponent.Name", "EHoudiniInputObjectType::InstancedStaticMeshComponent" },
		{ "Invalid.Name", "EHoudiniInputObjectType::Invalid" },
		{ "Landscape.Name", "EHoudiniInputObjectType::Landscape" },
		{ "LandscapeSplineActor.Name", "EHoudiniInputObjectType::LandscapeSplineActor" },
		{ "LandscapeSplinesComponent.Name", "EHoudiniInputObjectType::LandscapeSplinesComponent" },
		{ "LevelInstance.Name", "EHoudiniInputObjectType::LevelInstance" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
		{ "Object.Name", "EHoudiniInputObjectType::Object" },
		{ "PackedLevelActor.Name", "EHoudiniInputObjectType::PackedLevelActor" },
		{ "SceneComponent.Name", "EHoudiniInputObjectType::SceneComponent" },
		{ "SkeletalMesh.Name", "EHoudiniInputObjectType::SkeletalMesh" },
		{ "SkeletalMeshComponent.Name", "EHoudiniInputObjectType::SkeletalMeshComponent" },
		{ "SplineComponent.Name", "EHoudiniInputObjectType::SplineComponent" },
		{ "SplineMeshComponent.Name", "EHoudiniInputObjectType::SplineMeshComponent" },
		{ "StaticMesh.Name", "EHoudiniInputObjectType::StaticMesh" },
		{ "StaticMeshComponent.Name", "EHoudiniInputObjectType::StaticMeshComponent" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EHoudiniInputObjectType",
		"EHoudiniInputObjectType",
		Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniInputObjectType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniInputObjectType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniInputObjectType.InnerSingleton;
	}
	void UHoudiniInputObject::StaticRegisterNativesUHoudiniInputObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputObject);
	UClass* Z_Construct_UClass_UHoudiniInputObject_NoRegister()
	{
		return UHoudiniInputObject::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputObject_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InputObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTransformChanged_MetaData[];
#endif
		static void NewProp_bTransformChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransformChanged;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialReferences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialReferences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialReferences;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUniformScaleLocked_MetaData[];
#endif
		static void NewProp_bUniformScaleLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUniformScaleLocked;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedInputSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedInputSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanDeleteHoudiniNodes_MetaData[];
#endif
		static void NewProp_bCanDeleteHoudiniNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDeleteHoudiniNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInputNodeHandleOverridesNodeIds_MetaData[];
#endif
		static void NewProp_bInputNodeHandleOverridesNodeIds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInputNodeHandleOverridesNodeIds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserInputRotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserInputRotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputNodeId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputNodeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputObjectNodeId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputObjectNodeId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// UObjects input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UObjects input" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputObject_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The object referenced by this input\n// This property should be protected. Don't access this directly. Use GetObject() / Update() instead.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The object referenced by this input\nThis property should be protected. Don't access this directly. Use GetObject() / Update() instead." },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputObject = { "InputObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputObject, InputObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputObject_MetaData), Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputObject_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The type of Object this input refers to\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of Object this input refers to" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputObject, Type), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Type_MetaData), Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Type_MetaData) }; // 2363815860
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Guid_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Guid that uniquely identifies this input object.\n// Also useful to correlate inputs between blueprint component templates and instances.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Guid that uniquely identifies this input object.\nAlso useful to correlate inputs between blueprint component templates and instances." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000200000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputObject, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Guid_MetaData), Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Guid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bHasChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates this input object has changed\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates this input object has changed" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bHasChanged_SetBit(void* Obj)
	{
		((UHoudiniInputObject*)Obj)->bHasChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bHasChanged = { "bHasChanged", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInputObject), &Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bHasChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bHasChanged_MetaData), Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bHasChanged_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bNeedsToTriggerUpdate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates this input object should trigger an input update/cook\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates this input object should trigger an input update/cook" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bNeedsToTriggerUpdate_SetBit(void* Obj)
	{
		((UHoudiniInputObject*)Obj)->bNeedsToTriggerUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bNeedsToTriggerUpdate = { "bNeedsToTriggerUpdate", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInputObject), &Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bNeedsToTriggerUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bNeedsToTriggerUpdate_MetaData), Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bNeedsToTriggerUpdate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bTransformChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates that this input transform should be updated\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates that this input transform should be updated" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bTransformChanged_SetBit(void* Obj)
	{
		((UHoudiniInputObject*)Obj)->bTransformChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bTransformChanged = { "bTransformChanged", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInputObject), &Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bTransformChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bTransformChanged_MetaData), Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bTransformChanged_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_MaterialReferences_Inner = { "MaterialReferences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_MaterialReferences_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// String References to the materials on the input object.\n// This is used when sending input by reference to Houdini.\n// These strings are in the form of: Material'/path/to/reference'\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "String References to the materials on the input object.\nThis is used when sending input by reference to Houdini.\nThese strings are in the form of: Material'/path/to/reference'" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_MaterialReferences = { "MaterialReferences", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputObject, MaterialReferences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_MaterialReferences_MetaData), Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_MaterialReferences_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bUniformScaleLocked_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bUniformScaleLocked_SetBit(void* Obj)
	{
		((UHoudiniInputObject*)Obj)->bUniformScaleLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bUniformScaleLocked = { "bUniformScaleLocked", nullptr, (EPropertyFlags)0x0020080c00202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInputObject), &Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bUniformScaleLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bUniformScaleLocked_MetaData), Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bUniformScaleLocked_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_CachedInputSettings_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The settings cached from the Input at the last Update() call.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The settings cached from the Input at the last Update() call." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_CachedInputSettings = { "CachedInputSettings", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputObject, CachedInputSettings), Z_Construct_UScriptStruct_FHoudiniInputObjectSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_CachedInputSettings_MetaData), Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_CachedInputSettings_MetaData) }; // 1498337739
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bCanDeleteHoudiniNodes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bCanDeleteHoudiniNodes_SetBit(void* Obj)
	{
		((UHoudiniInputObject*)Obj)->bCanDeleteHoudiniNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bCanDeleteHoudiniNodes = { "bCanDeleteHoudiniNodes", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInputObject), &Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bCanDeleteHoudiniNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bCanDeleteHoudiniNodes_MetaData), Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bCanDeleteHoudiniNodes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bInputNodeHandleOverridesNodeIds_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true then this input object uses the InputNodeHandle instead of InputNodeId and InputObjectNodeId if the\n// ref counted input system is enabled.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then this input object uses the InputNodeHandle instead of InputNodeId and InputObjectNodeId if the\nref counted input system is enabled." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bInputNodeHandleOverridesNodeIds_SetBit(void* Obj)
	{
		((UHoudiniInputObject*)Obj)->bInputNodeHandleOverridesNodeIds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bInputNodeHandleOverridesNodeIds = { "bInputNodeHandleOverridesNodeIds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInputObject), &Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bInputNodeHandleOverridesNodeIds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bInputNodeHandleOverridesNodeIds_MetaData), Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bInputNodeHandleOverridesNodeIds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Transform_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The object's transform/transform offset\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The object's transform/transform offset" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputObject, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Transform_MetaData), Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Transform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_UserInputRotator_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// While the Transform property represents the transform, we need to keep a human readable version of the Rotation\n// ie. not just a Quaternion, or the UI becomes non-sensical to humans, since converting too and from Roll,Pitch,Yaw\n// and Quaternion ends up with different results.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "While the Transform property represents the transform, we need to keep a human readable version of the Rotation\nie. not just a Quaternion, or the UI becomes non-sensical to humans, since converting too and from Roll,Pitch,Yaw\nand Quaternion ends up with different results." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_UserInputRotator = { "UserInputRotator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputObject, UserInputRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_UserInputRotator_MetaData), Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_UserInputRotator_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputNodeId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This input object's \"main\" (SOP) NodeId\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This input object's \"main\" (SOP) NodeId" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputNodeId = { "InputNodeId", nullptr, (EPropertyFlags)0x0040000400202000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputObject, InputNodeId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputNodeId_MetaData), Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputNodeId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputObjectNodeId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This input object's \"container\" (OBJ) NodeId\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This input object's \"container\" (OBJ) NodeId" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputObjectNodeId = { "InputObjectNodeId", nullptr, (EPropertyFlags)0x0040000400202000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputObject, InputObjectNodeId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputObjectNodeId_MetaData), Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputObjectNodeId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bHasChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bNeedsToTriggerUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bTransformChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_MaterialReferences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_MaterialReferences,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bUniformScaleLocked,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_CachedInputSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bCanDeleteHoudiniNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_bInputNodeHandleOverridesNodeIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_UserInputRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputNodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputObject_Statics::NewProp_InputObjectNodeId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputObject_Statics::ClassParams = {
		&UHoudiniInputObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputObject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputObject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniInputObject()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInputObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputObject.OuterSingleton, Z_Construct_UClass_UHoudiniInputObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInputObject.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputObject>()
	{
		return UHoudiniInputObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputObject);
	UHoudiniInputObject::~UHoudiniInputObject() {}
	void UHoudiniInputStaticMesh::StaticRegisterNativesUHoudiniInputStaticMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputStaticMesh);
	UClass* Z_Construct_UClass_UHoudiniInputStaticMesh_NoRegister()
	{
		return UHoudiniInputStaticMesh::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputStaticMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// UStaticMesh input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UStaticMesh input" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputStaticMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::ClassParams = {
		&UHoudiniInputStaticMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHoudiniInputStaticMesh()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInputStaticMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputStaticMesh.OuterSingleton, Z_Construct_UClass_UHoudiniInputStaticMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInputStaticMesh.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputStaticMesh>()
	{
		return UHoudiniInputStaticMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputStaticMesh);
	UHoudiniInputStaticMesh::~UHoudiniInputStaticMesh() {}
	void UHoudiniInputSkeletalMesh::StaticRegisterNativesUHoudiniInputSkeletalMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputSkeletalMesh);
	UClass* Z_Construct_UClass_UHoudiniInputSkeletalMesh_NoRegister()
	{
		return UHoudiniInputSkeletalMesh::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputSkeletalMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputSkeletalMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSkeletalMesh_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSkeletalMesh_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// USkeletalMesh input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "USkeletalMesh input" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputSkeletalMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputSkeletalMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputSkeletalMesh_Statics::ClassParams = {
		&UHoudiniInputSkeletalMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSkeletalMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputSkeletalMesh_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHoudiniInputSkeletalMesh()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInputSkeletalMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputSkeletalMesh.OuterSingleton, Z_Construct_UClass_UHoudiniInputSkeletalMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInputSkeletalMesh.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputSkeletalMesh>()
	{
		return UHoudiniInputSkeletalMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputSkeletalMesh);
	UHoudiniInputSkeletalMesh::~UHoudiniInputSkeletalMesh() {}
	void UHoudiniInputAnimation::StaticRegisterNativesUHoudiniInputAnimation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputAnimation);
	UClass* Z_Construct_UClass_UHoudiniInputAnimation_NoRegister()
	{
		return UHoudiniInputAnimation::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputAnimation_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputAnimation_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// UAnimSequence input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAnimSequence input" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputAnimation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputAnimation_Statics::ClassParams = {
		&UHoudiniInputAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputAnimation_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputAnimation_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHoudiniInputAnimation()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInputAnimation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputAnimation.OuterSingleton, Z_Construct_UClass_UHoudiniInputAnimation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInputAnimation.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputAnimation>()
	{
		return UHoudiniInputAnimation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputAnimation);
	UHoudiniInputAnimation::~UHoudiniInputAnimation() {}
	void UHoudiniInputGeometryCollection::StaticRegisterNativesUHoudiniInputGeometryCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputGeometryCollection);
	UClass* Z_Construct_UClass_UHoudiniInputGeometryCollection_NoRegister()
	{
		return UHoudiniInputGeometryCollection::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputGeometryCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputGeometryCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputGeometryCollection_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputGeometryCollection_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// UGeometryCollection input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UGeometryCollection input" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputGeometryCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputGeometryCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputGeometryCollection_Statics::ClassParams = {
		&UHoudiniInputGeometryCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputGeometryCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputGeometryCollection_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHoudiniInputGeometryCollection()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInputGeometryCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputGeometryCollection.OuterSingleton, Z_Construct_UClass_UHoudiniInputGeometryCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInputGeometryCollection.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputGeometryCollection>()
	{
		return UHoudiniInputGeometryCollection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputGeometryCollection);
	UHoudiniInputGeometryCollection::~UHoudiniInputGeometryCollection() {}
	void UHoudiniInputSceneComponent::StaticRegisterNativesUHoudiniInputSceneComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputSceneComponent);
	UClass* Z_Construct_UClass_UHoudiniInputSceneComponent_NoRegister()
	{
		return UHoudiniInputSceneComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputSceneComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentInputActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentInputActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// USceneComponent input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "USceneComponent input" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::NewProp_ActorTransform_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This component's parent Actor transform\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This component's parent Actor transform" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::NewProp_ActorTransform = { "ActorTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSceneComponent, ActorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::NewProp_ActorTransform_MetaData), Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::NewProp_ActorTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::NewProp_ParentInputActor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The input object of the parent actor of the component\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The input object of the parent actor of the component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::NewProp_ParentInputActor = { "ParentInputActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSceneComponent, ParentInputActor), Z_Construct_UClass_UHoudiniInputActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::NewProp_ParentInputActor_MetaData), Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::NewProp_ParentInputActor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::NewProp_ActorTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::NewProp_ParentInputActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputSceneComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::ClassParams = {
		&UHoudiniInputSceneComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniInputSceneComponent()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInputSceneComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputSceneComponent.OuterSingleton, Z_Construct_UClass_UHoudiniInputSceneComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInputSceneComponent.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputSceneComponent>()
	{
		return UHoudiniInputSceneComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputSceneComponent);
	UHoudiniInputSceneComponent::~UHoudiniInputSceneComponent() {}
	void UHoudiniInputMeshComponent::StaticRegisterNativesUHoudiniInputMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputMeshComponent);
	UClass* Z_Construct_UClass_UHoudiniInputMeshComponent_NoRegister()
	{
		return UHoudiniInputMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputSceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// UStaticMeshComponent input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UStaticMeshComponent input" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::NewProp_StaticMesh_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Keep track of the selected Static Mesh\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keep track of the selected Static Mesh" },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputMeshComponent, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::NewProp_StaticMesh_MetaData), Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::NewProp_StaticMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::NewProp_StaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::ClassParams = {
		&UHoudiniInputMeshComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniInputMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInputMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputMeshComponent.OuterSingleton, Z_Construct_UClass_UHoudiniInputMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInputMeshComponent.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputMeshComponent>()
	{
		return UHoudiniInputMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputMeshComponent);
	UHoudiniInputMeshComponent::~UHoudiniInputMeshComponent() {}
	void UHoudiniInputInstancedMeshComponent::StaticRegisterNativesUHoudiniInputInstancedMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputInstancedMeshComponent);
	UClass* Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_NoRegister()
	{
		return UHoudiniInputInstancedMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceTransforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// UInstancedStaticMeshComponent input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UInstancedStaticMeshComponent input" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::NewProp_InstanceTransforms_Inner = { "InstanceTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::NewProp_InstanceTransforms_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array of transform for this ISMC's instances\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of transform for this ISMC's instances" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::NewProp_InstanceTransforms = { "InstanceTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputInstancedMeshComponent, InstanceTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::NewProp_InstanceTransforms_MetaData), Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::NewProp_InstanceTransforms_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::NewProp_InstanceTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::NewProp_InstanceTransforms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputInstancedMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::ClassParams = {
		&UHoudiniInputInstancedMeshComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniInputInstancedMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInputInstancedMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputInstancedMeshComponent.OuterSingleton, Z_Construct_UClass_UHoudiniInputInstancedMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInputInstancedMeshComponent.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputInstancedMeshComponent>()
	{
		return UHoudiniInputInstancedMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputInstancedMeshComponent);
	UHoudiniInputInstancedMeshComponent::~UHoudiniInputInstancedMeshComponent() {}
	void UHoudiniInputSplineComponent::StaticRegisterNativesUHoudiniInputSplineComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputSplineComponent);
	UClass* Z_Construct_UClass_UHoudiniInputSplineComponent_NoRegister()
	{
		return UHoudiniInputSplineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputSplineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfSplineControlPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfSplineControlPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineResolution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineClosed_MetaData[];
#endif
		static void NewProp_SplineClosed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SplineClosed;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplineControlPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineControlPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SplineControlPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputSceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// USplineComponent input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "USplineComponent input" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_NumberOfSplineControlPoints_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of CVs used by the spline component, used to detect modification\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of CVs used by the spline component, used to detect modification" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_NumberOfSplineControlPoints = { "NumberOfSplineControlPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSplineComponent, NumberOfSplineControlPoints), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_NumberOfSplineControlPoints_MetaData), Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_NumberOfSplineControlPoints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineLength_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spline Length, used for fast detection of modifications of the spline..\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spline Length, used for fast detection of modifications of the spline.." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineLength = { "SplineLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSplineComponent, SplineLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineLength_MetaData), Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineResolution_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spline resolution used to generate the asset, used to detect setting modification\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spline resolution used to generate the asset, used to detect setting modification" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineResolution = { "SplineResolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSplineComponent, SplineResolution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineResolution_MetaData), Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineResolution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineClosed_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is the spline closed?\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the spline closed?" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineClosed_SetBit(void* Obj)
	{
		((UHoudiniInputSplineComponent*)Obj)->SplineClosed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineClosed = { "SplineClosed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInputSplineComponent), &Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineClosed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineClosed_MetaData), Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineClosed_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineControlPoints_Inner = { "SplineControlPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineControlPoints_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Transforms of each of the spline's control points\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transforms of each of the spline's control points" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineControlPoints = { "SplineControlPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSplineComponent, SplineControlPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineControlPoints_MetaData), Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineControlPoints_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_NumberOfSplineControlPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineClosed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineControlPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::NewProp_SplineControlPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputSplineComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::ClassParams = {
		&UHoudiniInputSplineComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniInputSplineComponent()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInputSplineComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputSplineComponent.OuterSingleton, Z_Construct_UClass_UHoudiniInputSplineComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInputSplineComponent.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputSplineComponent>()
	{
		return UHoudiniInputSplineComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputSplineComponent);
	UHoudiniInputSplineComponent::~UHoudiniInputSplineComponent() {}
	void UHoudiniInputGeometryCollectionComponent::StaticRegisterNativesUHoudiniInputGeometryCollectionComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputGeometryCollectionComponent);
	UClass* Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent_NoRegister()
	{
		return UHoudiniInputGeometryCollectionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputSceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// UGeometryCollectionComponent input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UGeometryCollectionComponent input" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputGeometryCollectionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent_Statics::ClassParams = {
		&UHoudiniInputGeometryCollectionComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInputGeometryCollectionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputGeometryCollectionComponent.OuterSingleton, Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInputGeometryCollectionComponent.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputGeometryCollectionComponent>()
	{
		return UHoudiniInputGeometryCollectionComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputGeometryCollectionComponent);
	UHoudiniInputGeometryCollectionComponent::~UHoudiniInputGeometryCollectionComponent() {}
	void UHoudiniInputSkeletalMeshComponent::StaticRegisterNativesUHoudiniInputSkeletalMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputSkeletalMeshComponent);
	UClass* Z_Construct_UClass_UHoudiniInputSkeletalMeshComponent_NoRegister()
	{
		return UHoudiniInputSkeletalMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputSkeletalMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputSkeletalMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputSceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSkeletalMeshComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSkeletalMeshComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// UHoudiniInputSkeletalMeshComponent input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UHoudiniInputSkeletalMeshComponent input" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputSkeletalMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputSkeletalMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputSkeletalMeshComponent_Statics::ClassParams = {
		&UHoudiniInputSkeletalMeshComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSkeletalMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputSkeletalMeshComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHoudiniInputSkeletalMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInputSkeletalMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputSkeletalMeshComponent.OuterSingleton, Z_Construct_UClass_UHoudiniInputSkeletalMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInputSkeletalMeshComponent.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputSkeletalMeshComponent>()
	{
		return UHoudiniInputSkeletalMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputSkeletalMeshComponent);
	UHoudiniInputSkeletalMeshComponent::~UHoudiniInputSkeletalMeshComponent() {}
	void UHoudiniInputHoudiniSplineComponent::StaticRegisterNativesUHoudiniInputHoudiniSplineComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputHoudiniSplineComponent);
	UClass* Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_NoRegister()
	{
		return UHoudiniInputHoudiniSplineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reversed_MetaData[];
#endif
		static void NewProp_Reversed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Reversed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// UHoudiniSplineComponent input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UHoudiniSplineComponent input" },
#endif
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The type of curve (polygon, NURBS, bezier)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of curve (polygon, NURBS, bezier)" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputHoudiniSplineComponent, CurveType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveType_MetaData), Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveType_MetaData) }; // 3147282130
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveMethod_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The curve's method (CVs, Breakpoint, Freehand)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The curve's method (CVs, Breakpoint, Freehand)" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveMethod = { "CurveMethod", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputHoudiniSplineComponent, CurveMethod), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveMethod_MetaData), Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveMethod_MetaData) }; // 1598599947
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_Reversed_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_Reversed_SetBit(void* Obj)
	{
		((UHoudiniInputHoudiniSplineComponent*)Obj)->Reversed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_Reversed = { "Reversed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInputHoudiniSplineComponent), &Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_Reversed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_Reversed_MetaData), Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_Reversed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CachedComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NOTE: We are using this reference to the component since the component, for now,\n// lives on the same actor as this input object. If we use a Soft Object Reference instead the editor\n// will complain about breaking references everytime we try to delete the actor.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NOTE: We are using this reference to the component since the component, for now,\nlives on the same actor as this input object. If we use a Soft Object Reference instead the editor\nwill complain about breaking references everytime we try to delete the actor." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CachedComponent = { "CachedComponent", nullptr, (EPropertyFlags)0x0022080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputHoudiniSplineComponent, CachedComponent), Z_Construct_UClass_UHoudiniSplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CachedComponent_MetaData), Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CachedComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CurveMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_Reversed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::NewProp_CachedComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputHoudiniSplineComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::ClassParams = {
		&UHoudiniInputHoudiniSplineComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInputHoudiniSplineComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputHoudiniSplineComponent.OuterSingleton, Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInputHoudiniSplineComponent.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputHoudiniSplineComponent>()
	{
		return UHoudiniInputHoudiniSplineComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputHoudiniSplineComponent);
	UHoudiniInputHoudiniSplineComponent::~UHoudiniInputHoudiniSplineComponent() {}
	void UHoudiniInputCameraComponent::StaticRegisterNativesUHoudiniInputCameraComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputCameraComponent);
	UClass* Z_Construct_UClass_UHoudiniInputCameraComponent_NoRegister()
	{
		return UHoudiniInputCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOrthographic_MetaData[];
#endif
		static void NewProp_bIsOrthographic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOrthographic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrthoWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrthoNearClipPlane_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoNearClipPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrthoFarClipPlane_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoFarClipPlane;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputSceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// UCameraComponent input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UCameraComponent input" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_FOV_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputCameraComponent, FOV), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_FOV_MetaData), Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_FOV_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_AspectRatio_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputCameraComponent, AspectRatio), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_AspectRatio_MetaData), Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_AspectRatio_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_bIsOrthographic_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TEnumAsByte<ECameraProjectionMode::Type> ProjectionType;\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TEnumAsByte<ECameraProjectionMode::Type> ProjectionType;" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_bIsOrthographic_SetBit(void* Obj)
	{
		((UHoudiniInputCameraComponent*)Obj)->bIsOrthographic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_bIsOrthographic = { "bIsOrthographic", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInputCameraComponent), &Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_bIsOrthographic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_bIsOrthographic_MetaData), Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_bIsOrthographic_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoWidth_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoWidth = { "OrthoWidth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputCameraComponent, OrthoWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoWidth_MetaData), Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoNearClipPlane_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoNearClipPlane = { "OrthoNearClipPlane", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputCameraComponent, OrthoNearClipPlane), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoNearClipPlane_MetaData), Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoNearClipPlane_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoFarClipPlane_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoFarClipPlane = { "OrthoFarClipPlane", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputCameraComponent, OrthoFarClipPlane), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoFarClipPlane_MetaData), Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoFarClipPlane_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_FOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_AspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_bIsOrthographic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoNearClipPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::NewProp_OrthoFarClipPlane,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputCameraComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::ClassParams = {
		&UHoudiniInputCameraComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniInputCameraComponent()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInputCameraComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputCameraComponent.OuterSingleton, Z_Construct_UClass_UHoudiniInputCameraComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInputCameraComponent.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputCameraComponent>()
	{
		return UHoudiniInputCameraComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputCameraComponent);
	UHoudiniInputCameraComponent::~UHoudiniInputCameraComponent() {}
	void UHoudiniInputHoudiniAsset::StaticRegisterNativesUHoudiniInputHoudiniAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputHoudiniAsset);
	UClass* Z_Construct_UClass_UHoudiniInputHoudiniAsset_NoRegister()
	{
		return UHoudiniInputHoudiniAsset::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetOutputIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AssetOutputIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AssetId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// UHoudiniAssetComponent input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UHoudiniAssetComponent input" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::NewProp_AssetOutputIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The output index of the node that we want to use as input\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The output index of the node that we want to use as input" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::NewProp_AssetOutputIndex = { "AssetOutputIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputHoudiniAsset, AssetOutputIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::NewProp_AssetOutputIndex_MetaData), Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::NewProp_AssetOutputIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::NewProp_AssetId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The asset ID recorded at the last Update().\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The asset ID recorded at the last Update()." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputHoudiniAsset, AssetId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::NewProp_AssetId_MetaData), Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::NewProp_AssetId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::NewProp_AssetOutputIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::NewProp_AssetId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputHoudiniAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::ClassParams = {
		&UHoudiniInputHoudiniAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniInputHoudiniAsset()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInputHoudiniAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputHoudiniAsset.OuterSingleton, Z_Construct_UClass_UHoudiniInputHoudiniAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInputHoudiniAsset.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputHoudiniAsset>()
	{
		return UHoudiniInputHoudiniAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputHoudiniAsset);
	UHoudiniInputHoudiniAsset::~UHoudiniInputHoudiniAsset() {}
	void UHoudiniInputActor::StaticRegisterNativesUHoudiniInputActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputActor);
	UClass* Z_Construct_UClass_UHoudiniInputActor_NoRegister()
	{
		return UHoudiniInputActor::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplinesMeshObjectNodeId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SplinesMeshObjectNodeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplinesMeshNodeId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SplinesMeshNodeId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorComponents;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ActorSceneComponents_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorSceneComponents_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ActorSceneComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdateNumComponentsAdded_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastUpdateNumComponentsAdded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdateNumComponentsRemoved_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastUpdateNumComponentsRemoved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSplineMeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSplineMeshComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedSplinesMeshPackageGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedSplinesMeshPackageGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedSplinesMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeneratedSplinesMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsedMergeSplinesMeshAtLastTranslate_MetaData[];
#endif
		static void NewProp_bUsedMergeSplinesMeshAtLastTranslate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedMergeSplinesMeshAtLastTranslate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputActor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// AActor input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AActor input" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_SplinesMeshObjectNodeId_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_SplinesMeshObjectNodeId = { "SplinesMeshObjectNodeId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputActor, SplinesMeshObjectNodeId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_SplinesMeshObjectNodeId_MetaData), Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_SplinesMeshObjectNodeId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_SplinesMeshNodeId_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_SplinesMeshNodeId = { "SplinesMeshNodeId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputActor, SplinesMeshNodeId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_SplinesMeshNodeId_MetaData), Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_SplinesMeshNodeId_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorComponents_Inner = { "ActorComponents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniInputSceneComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorComponents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The actor's components that can be sent as inputs\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The actor's components that can be sent as inputs" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorComponents = { "ActorComponents", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputActor, ActorComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorComponents_MetaData), Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorComponents_MetaData) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorSceneComponents_ElementProp = { "ActorSceneComponents", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorSceneComponents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The USceneComponents the actor had the last time we called Update (matches the ones in ActorComponents).\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The USceneComponents the actor had the last time we called Update (matches the ones in ActorComponents)." },
#endif
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorSceneComponents = { "ActorSceneComponents", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputActor, ActorSceneComponents), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorSceneComponents_MetaData), Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorSceneComponents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsAdded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The number of components added with the last call to Update\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of components added with the last call to Update" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsAdded = { "LastUpdateNumComponentsAdded", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputActor, LastUpdateNumComponentsAdded), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsAdded_MetaData), Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsAdded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsRemoved_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The number of components remove with the last call to Update\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of components remove with the last call to Update" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsRemoved = { "LastUpdateNumComponentsRemoved", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputActor, LastUpdateNumComponentsRemoved), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsRemoved_MetaData), Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsRemoved_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_NumSplineMeshComponents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The number of spline mesh components in ActorComponents the last time this object was updated.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of spline mesh components in ActorComponents the last time this object was updated." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_NumSplineMeshComponents = { "NumSplineMeshComponents", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputActor, NumSplineMeshComponents), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_NumSplineMeshComponents_MetaData), Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_NumSplineMeshComponents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_GeneratedSplinesMeshPackageGuid_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Package GUID for temp static mesh for the merged spline mesh components (if any).\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Package GUID for temp static mesh for the merged spline mesh components (if any)." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_GeneratedSplinesMeshPackageGuid = { "GeneratedSplinesMeshPackageGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputActor, GeneratedSplinesMeshPackageGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_GeneratedSplinesMeshPackageGuid_MetaData), Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_GeneratedSplinesMeshPackageGuid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_GeneratedSplinesMesh_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The merged static mesh generated for the spline mesh components.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The merged static mesh generated for the spline mesh components." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_GeneratedSplinesMesh = { "GeneratedSplinesMesh", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputActor, GeneratedSplinesMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_GeneratedSplinesMesh_MetaData), Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_GeneratedSplinesMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_bUsedMergeSplinesMeshAtLastTranslate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True if the merged spline mesh was sent at the last translation.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if the merged spline mesh was sent at the last translation." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_bUsedMergeSplinesMeshAtLastTranslate_SetBit(void* Obj)
	{
		((UHoudiniInputActor*)Obj)->bUsedMergeSplinesMeshAtLastTranslate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_bUsedMergeSplinesMeshAtLastTranslate = { "bUsedMergeSplinesMeshAtLastTranslate", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInputActor), &Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_bUsedMergeSplinesMeshAtLastTranslate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_bUsedMergeSplinesMeshAtLastTranslate_MetaData), Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_bUsedMergeSplinesMeshAtLastTranslate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_SplinesMeshObjectNodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_SplinesMeshNodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorSceneComponents_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorSceneComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsRemoved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_NumSplineMeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_GeneratedSplinesMeshPackageGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_GeneratedSplinesMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_bUsedMergeSplinesMeshAtLastTranslate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputActor_Statics::ClassParams = {
		&UHoudiniInputActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniInputActor()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInputActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputActor.OuterSingleton, Z_Construct_UClass_UHoudiniInputActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInputActor.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputActor>()
	{
		return UHoudiniInputActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputActor);
	UHoudiniInputActor::~UHoudiniInputActor() {}
	void UHoudiniInputLevelInstance::StaticRegisterNativesUHoudiniInputLevelInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputLevelInstance);
	UClass* Z_Construct_UClass_UHoudiniInputLevelInstance_NoRegister()
	{
		return UHoudiniInputLevelInstance::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputLevelInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedActorObjects_ValueProp;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TrackedActorObjects_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackedActorObjects_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TrackedActorObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumActorsAddedLastUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumActorsAddedLastUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumActorsRemovedLastUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumActorsRemovedLastUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// ALevelInstance input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ALevelInstance input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_TrackedActorObjects_ValueProp = { "TrackedActorObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UHoudiniInputObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_TrackedActorObjects_Key_KeyProp = { "TrackedActorObjects_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_TrackedActorObjects_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_TrackedActorObjects = { "TrackedActorObjects", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputLevelInstance, TrackedActorObjects), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_TrackedActorObjects_MetaData), Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_TrackedActorObjects_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_NumActorsAddedLastUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_NumActorsAddedLastUpdate = { "NumActorsAddedLastUpdate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputLevelInstance, NumActorsAddedLastUpdate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_NumActorsAddedLastUpdate_MetaData), Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_NumActorsAddedLastUpdate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_NumActorsRemovedLastUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_NumActorsRemovedLastUpdate = { "NumActorsRemovedLastUpdate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputLevelInstance, NumActorsRemovedLastUpdate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_NumActorsRemovedLastUpdate_MetaData), Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_NumActorsRemovedLastUpdate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_TrackedActorObjects_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_TrackedActorObjects_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_TrackedActorObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_NumActorsAddedLastUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::NewProp_NumActorsRemovedLastUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputLevelInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::ClassParams = {
		&UHoudiniInputLevelInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniInputLevelInstance()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInputLevelInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputLevelInstance.OuterSingleton, Z_Construct_UClass_UHoudiniInputLevelInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInputLevelInstance.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputLevelInstance>()
	{
		return UHoudiniInputLevelInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputLevelInstance);
	UHoudiniInputLevelInstance::~UHoudiniInputLevelInstance() {}
	void UHoudiniInputLandscape::StaticRegisterNativesUHoudiniInputLandscape()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputLandscape);
	UClass* Z_Construct_UClass_UHoudiniInputLandscape_NoRegister()
	{
		return UHoudiniInputLandscape::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputLandscape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedNumLandscapeComponents_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CachedNumLandscapeComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputLandscape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscape_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputLandscape_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// ALandscapeProxy input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ALandscapeProxy input" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputLandscape_Statics::NewProp_CachedNumLandscapeComponents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The number of landscape components that was processed. If this count changes, .e.g, levels have been\n// loaded / unloaded then the input content has changed.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of landscape components that was processed. If this count changes, .e.g, levels have been\nloaded / unloaded then the input content has changed." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputLandscape_Statics::NewProp_CachedNumLandscapeComponents = { "CachedNumLandscapeComponents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputLandscape, CachedNumLandscapeComponents), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscape_Statics::NewProp_CachedNumLandscapeComponents_MetaData), Z_Construct_UClass_UHoudiniInputLandscape_Statics::NewProp_CachedNumLandscapeComponents_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputLandscape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLandscape_Statics::NewProp_CachedNumLandscapeComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputLandscape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputLandscape>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputLandscape_Statics::ClassParams = {
		&UHoudiniInputLandscape::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputLandscape_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscape_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscape_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputLandscape_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscape_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniInputLandscape()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInputLandscape.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputLandscape.OuterSingleton, Z_Construct_UClass_UHoudiniInputLandscape_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInputLandscape.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputLandscape>()
	{
		return UHoudiniInputLandscape::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputLandscape);
	UHoudiniInputLandscape::~UHoudiniInputLandscape() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniBrushInfo;
class UScriptStruct* FHoudiniBrushInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniBrushInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniBrushInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniBrushInfo, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniBrushInfo"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniBrushInfo.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniBrushInfo>()
{
	return FHoudiniBrushInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushActor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_BrushActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedBrushType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CachedBrushType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedSurfaceHash_MetaData[];
#endif
		static const UECodeGen_Private::FUInt64PropertyParams NewProp_CachedSurfaceHash;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniBrushInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_BrushActor_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_BrushActor = { "BrushActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBrushInfo, BrushActor), Z_Construct_UClass_ABrush_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_BrushActor_MetaData), Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_BrushActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedTransform_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedTransform = { "CachedTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBrushInfo, CachedTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedTransform_MetaData), Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedOrigin_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedOrigin = { "CachedOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBrushInfo, CachedOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedOrigin_MetaData), Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedOrigin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedExtent_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedExtent = { "CachedExtent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBrushInfo, CachedExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedExtent_MetaData), Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedExtent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedBrushType_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedBrushType = { "CachedBrushType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBrushInfo, CachedBrushType), Z_Construct_UEnum_Engine_EBrushType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedBrushType_MetaData), Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedBrushType_MetaData) }; // 2972127381
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedSurfaceHash_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedSurfaceHash = { "CachedSurfaceHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBrushInfo, CachedSurfaceHash), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedSurfaceHash_MetaData), Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedSurfaceHash_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_BrushActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedBrushType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewProp_CachedSurfaceHash,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniBrushInfo",
		Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::PropPointers),
		sizeof(FHoudiniBrushInfo),
		alignof(FHoudiniBrushInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBrushInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniBrushInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniBrushInfo.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniBrushInfo.InnerSingleton;
	}
	void UHoudiniInputBrush::StaticRegisterNativesUHoudiniInputBrush()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputBrush);
	UClass* Z_Construct_UClass_UHoudiniInputBrush_NoRegister()
	{
		return UHoudiniInputBrush::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputBrush_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BrushesInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushesInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BrushesInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombinedModel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CombinedModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreInputObject_MetaData[];
#endif
		static void NewProp_bIgnoreInputObject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreInputObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedInputBrushType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CachedInputBrushType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputBrush_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBrush_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputBrush_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_BrushesInfo_Inner = { "BrushesInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniBrushInfo, METADATA_PARAMS(0, nullptr) }; // 1498003446
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_BrushesInfo_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_BrushesInfo = { "BrushesInfo", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputBrush, BrushesInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_BrushesInfo_MetaData), Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_BrushesInfo_MetaData) }; // 1498003446
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CombinedModel_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CombinedModel = { "CombinedModel", nullptr, (EPropertyFlags)0x0020080000202000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputBrush, CombinedModel), Z_Construct_UClass_UModel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CombinedModel_MetaData), Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CombinedModel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_bIgnoreInputObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_bIgnoreInputObject_SetBit(void* Obj)
	{
		((UHoudiniInputBrush*)Obj)->bIgnoreInputObject = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_bIgnoreInputObject = { "bIgnoreInputObject", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniInputBrush), &Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_bIgnoreInputObject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_bIgnoreInputObject_MetaData), Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_bIgnoreInputObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CachedInputBrushType_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CachedInputBrushType = { "CachedInputBrushType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputBrush, CachedInputBrushType), Z_Construct_UEnum_Engine_EBrushType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CachedInputBrushType_MetaData), Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CachedInputBrushType_MetaData) }; // 2972127381
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_BrushesInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_BrushesInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CombinedModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_bIgnoreInputObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CachedInputBrushType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputBrush_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputBrush>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputBrush_Statics::ClassParams = {
		&UHoudiniInputBrush::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputBrush_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBrush_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBrush_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputBrush_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBrush_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniInputBrush()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInputBrush.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputBrush.OuterSingleton, Z_Construct_UClass_UHoudiniInputBrush_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInputBrush.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputBrush>()
	{
		return UHoudiniInputBrush::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputBrush);
	UHoudiniInputBrush::~UHoudiniInputBrush() {}
	void UHoudiniInputDataTable::StaticRegisterNativesUHoudiniInputDataTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputDataTable);
	UClass* Z_Construct_UClass_UHoudiniInputDataTable_NoRegister()
	{
		return UHoudiniInputDataTable::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputDataTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputDataTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputDataTable_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputDataTable_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// UDataTable input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UDataTable input" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputDataTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputDataTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputDataTable_Statics::ClassParams = {
		&UHoudiniInputDataTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputDataTable_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputDataTable_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHoudiniInputDataTable()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInputDataTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputDataTable.OuterSingleton, Z_Construct_UClass_UHoudiniInputDataTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInputDataTable.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputDataTable>()
	{
		return UHoudiniInputDataTable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputDataTable);
	UHoudiniInputDataTable::~UHoudiniInputDataTable() {}
	void UHoudiniInputFoliageType_InstancedStaticMesh::StaticRegisterNativesUHoudiniInputFoliageType_InstancedStaticMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputFoliageType_InstancedStaticMesh);
	UClass* Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_NoRegister()
	{
		return UHoudiniInputFoliageType_InstancedStaticMesh::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputStaticMesh,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// UFoliageType_InstancedStaticMesh input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFoliageType_InstancedStaticMesh input" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputFoliageType_InstancedStaticMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_Statics::ClassParams = {
		&UHoudiniInputFoliageType_InstancedStaticMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInputFoliageType_InstancedStaticMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputFoliageType_InstancedStaticMesh.OuterSingleton, Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInputFoliageType_InstancedStaticMesh.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputFoliageType_InstancedStaticMesh>()
	{
		return UHoudiniInputFoliageType_InstancedStaticMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputFoliageType_InstancedStaticMesh);
	UHoudiniInputFoliageType_InstancedStaticMesh::~UHoudiniInputFoliageType_InstancedStaticMesh() {}
	void UHoudiniInputBlueprint::StaticRegisterNativesUHoudiniInputBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputBlueprint);
	UClass* Z_Construct_UClass_UHoudiniInputBlueprint_NoRegister()
	{
		return UHoudiniInputBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BPComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BPComponents;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BPSceneComponents_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPSceneComponents_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_BPSceneComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdateNumComponentsAdded_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastUpdateNumComponentsAdded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdateNumComponentsRemoved_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastUpdateNumComponentsRemoved;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBlueprint_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputBlueprint_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// Blueprint input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPComponents_Inner = { "BPComponents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniInputSceneComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPComponents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The BP's components that can be sent as inputs\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The BP's components that can be sent as inputs" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPComponents = { "BPComponents", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputBlueprint, BPComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPComponents_MetaData), Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPComponents_MetaData) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPSceneComponents_ElementProp = { "BPSceneComponents", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPSceneComponents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The USceneComponents the BP had the last time we called Update (matches the ones in BPComponents).\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The USceneComponents the BP had the last time we called Update (matches the ones in BPComponents)." },
#endif
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPSceneComponents = { "BPSceneComponents", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputBlueprint, BPSceneComponents), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPSceneComponents_MetaData), Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPSceneComponents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_LastUpdateNumComponentsAdded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The number of components added with the last call to Update\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of components added with the last call to Update" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_LastUpdateNumComponentsAdded = { "LastUpdateNumComponentsAdded", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputBlueprint, LastUpdateNumComponentsAdded), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_LastUpdateNumComponentsAdded_MetaData), Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_LastUpdateNumComponentsAdded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_LastUpdateNumComponentsRemoved_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The number of components remove with the last call to Update\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of components remove with the last call to Update" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_LastUpdateNumComponentsRemoved = { "LastUpdateNumComponentsRemoved", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputBlueprint, LastUpdateNumComponentsRemoved), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_LastUpdateNumComponentsRemoved_MetaData), Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_LastUpdateNumComponentsRemoved_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPSceneComponents_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_BPSceneComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_LastUpdateNumComponentsAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBlueprint_Statics::NewProp_LastUpdateNumComponentsRemoved,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputBlueprint_Statics::ClassParams = {
		&UHoudiniInputBlueprint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputBlueprint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBlueprint_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputBlueprint_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBlueprint_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniInputBlueprint()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInputBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputBlueprint.OuterSingleton, Z_Construct_UClass_UHoudiniInputBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInputBlueprint.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputBlueprint>()
	{
		return UHoudiniInputBlueprint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputBlueprint);
	UHoudiniInputBlueprint::~UHoudiniInputBlueprint() {}
	void UHoudiniInputPackedLevelActor::StaticRegisterNativesUHoudiniInputPackedLevelActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputPackedLevelActor);
	UClass* Z_Construct_UClass_UHoudiniInputPackedLevelActor_NoRegister()
	{
		return UHoudiniInputPackedLevelActor::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintInputObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueprintInputObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// APackedLevelActor input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "APackedLevelActor input" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::NewProp_BlueprintInputObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::NewProp_BlueprintInputObject = { "BlueprintInputObject", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputPackedLevelActor, BlueprintInputObject), Z_Construct_UClass_UHoudiniInputBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::NewProp_BlueprintInputObject_MetaData), Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::NewProp_BlueprintInputObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::NewProp_BlueprintInputObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputPackedLevelActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::ClassParams = {
		&UHoudiniInputPackedLevelActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniInputPackedLevelActor()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInputPackedLevelActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputPackedLevelActor.OuterSingleton, Z_Construct_UClass_UHoudiniInputPackedLevelActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInputPackedLevelActor.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputPackedLevelActor>()
	{
		return UHoudiniInputPackedLevelActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputPackedLevelActor);
	UHoudiniInputPackedLevelActor::~UHoudiniInputPackedLevelActor() {}
	void UHoudiniInputLandscapeSplineActor::StaticRegisterNativesUHoudiniInputLandscapeSplineActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputLandscapeSplineActor);
	UClass* Z_Construct_UClass_UHoudiniInputLandscapeSplineActor_NoRegister()
	{
		return UHoudiniInputLandscapeSplineActor::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputLandscapeSplineActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputLandscapeSplineActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscapeSplineActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputLandscapeSplineActor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// ALandscapeSplinesActor input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ALandscapeSplinesActor input" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputLandscapeSplineActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputLandscapeSplineActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputLandscapeSplineActor_Statics::ClassParams = {
		&UHoudiniInputLandscapeSplineActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscapeSplineActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputLandscapeSplineActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHoudiniInputLandscapeSplineActor()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInputLandscapeSplineActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputLandscapeSplineActor.OuterSingleton, Z_Construct_UClass_UHoudiniInputLandscapeSplineActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInputLandscapeSplineActor.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputLandscapeSplineActor>()
	{
		return UHoudiniInputLandscapeSplineActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputLandscapeSplineActor);
	UHoudiniInputLandscapeSplineActor::~UHoudiniInputLandscapeSplineActor() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineControlPointData;
class UScriptStruct* FHoudiniLandscapeSplineControlPointData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineControlPointData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineControlPointData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniLandscapeSplineControlPointData"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineControlPointData.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniLandscapeSplineControlPointData>()
{
	return FHoudiniLandscapeSplineControlPointData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentMeshOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SegmentMeshOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRaiseTerrain_MetaData[];
#endif
		static void NewProp_bRaiseTerrain_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRaiseTerrain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLowerTerrain_MetaData[];
#endif
		static void NewProp_bLowerTerrain_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLowerTerrain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialOverrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshScale;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct for caching landscape spline control points. ULandscapeSplineControlPoint cannot be duplicated with\n * an outer other than ULandscapeSplinesComponent. * \n */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct for caching landscape spline control points. ULandscapeSplineControlPoint cannot be duplicated with\nan outer other than ULandscapeSplinesComponent. *" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniLandscapeSplineControlPointData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Location_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Location in Landscape-space */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Location in Landscape-space" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniLandscapeSplineControlPointData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Location_MetaData), Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Rotation_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rotation of tangent vector at this point (in landscape-space) */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation of tangent vector at this point (in landscape-space)" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniLandscapeSplineControlPointData, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Rotation_MetaData), Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Width_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Half-Width of the spline at this point. */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Half-Width of the spline at this point." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniLandscapeSplineControlPointData, Width), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Width_MetaData), Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Width_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_SegmentMeshOffset_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vertical offset of the spline segment mesh. Useful for a river's surface, among other things. */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertical offset of the spline segment mesh. Useful for a river's surface, among other things." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_SegmentMeshOffset = { "SegmentMeshOffset", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniLandscapeSplineControlPointData, SegmentMeshOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_SegmentMeshOffset_MetaData), Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_SegmentMeshOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_LayerName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Name of blend layer to paint when applying spline to landscape\n\x09 * If \"none\", no layer is painted\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of blend layer to paint when applying spline to landscape\nIf \"none\", no layer is painted" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniLandscapeSplineControlPointData, LayerName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_LayerName_MetaData), Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_LayerName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_bRaiseTerrain_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If the spline is above the terrain, whether to raise the terrain up to the level of the spline when applying it to the landscape. */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the spline is above the terrain, whether to raise the terrain up to the level of the spline when applying it to the landscape." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_bRaiseTerrain_SetBit(void* Obj)
	{
		((FHoudiniLandscapeSplineControlPointData*)Obj)->bRaiseTerrain = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_bRaiseTerrain = { "bRaiseTerrain", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FHoudiniLandscapeSplineControlPointData), &Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_bRaiseTerrain_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_bRaiseTerrain_MetaData), Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_bRaiseTerrain_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_bLowerTerrain_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If the spline is below the terrain, whether to lower the terrain down to the level of the spline when applying it to the landscape. */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the spline is below the terrain, whether to lower the terrain down to the level of the spline when applying it to the landscape." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_bLowerTerrain_SetBit(void* Obj)
	{
		((FHoudiniLandscapeSplineControlPointData*)Obj)->bLowerTerrain = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_bLowerTerrain = { "bLowerTerrain", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FHoudiniLandscapeSplineControlPointData), &Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_bLowerTerrain_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_bLowerTerrain_MetaData), Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_bLowerTerrain_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Mesh_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mesh to use on the control point */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh to use on the control point" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniLandscapeSplineControlPointData, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Mesh_MetaData), Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Mesh_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_MaterialOverrides_Inner = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_MaterialOverrides_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Overrides mesh's materials */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overrides mesh's materials" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_MaterialOverrides = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniLandscapeSplineControlPointData, MaterialOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_MaterialOverrides_MetaData), Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_MaterialOverrides_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_MeshScale_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scale of the control point mesh */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale of the control point mesh" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_MeshScale = { "MeshScale", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniLandscapeSplineControlPointData, MeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_MeshScale_MetaData), Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_MeshScale_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Width,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_SegmentMeshOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_LayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_bRaiseTerrain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_bLowerTerrain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_MaterialOverrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_MaterialOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewProp_MeshScale,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniLandscapeSplineControlPointData",
		Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::PropPointers),
		sizeof(FHoudiniLandscapeSplineControlPointData),
		alignof(FHoudiniLandscapeSplineControlPointData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineControlPointData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineControlPointData.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineControlPointData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineSegmentData;
class UScriptStruct* FHoudiniLandscapeSplineSegmentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineSegmentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineSegmentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniLandscapeSplineSegmentData"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineSegmentData.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniLandscapeSplineSegmentData>()
{
	return FHoudiniLandscapeSplineSegmentData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRaiseTerrain_MetaData[];
#endif
		static void NewProp_bRaiseTerrain_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRaiseTerrain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLowerTerrain_MetaData[];
#endif
		static void NewProp_bLowerTerrain_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLowerTerrain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplineMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SplineMeshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct for caching landscape spline control points. ULandscapeSplineSegment cannot be duplicated with\n * an outer other than ULandscapeSplinesComponent. * \n */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct for caching landscape spline control points. ULandscapeSplineSegment cannot be duplicated with\nan outer other than ULandscapeSplinesComponent. *" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniLandscapeSplineSegmentData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_LayerName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Name of blend layer to paint when applying spline to landscape\n\x09 * If \"none\", no layer is painted\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of blend layer to paint when applying spline to landscape\nIf \"none\", no layer is painted" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniLandscapeSplineSegmentData, LayerName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_LayerName_MetaData), Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_LayerName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_bRaiseTerrain_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If the spline is above the terrain, whether to raise the terrain up to the level of the spline when applying it to the landscape. */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the spline is above the terrain, whether to raise the terrain up to the level of the spline when applying it to the landscape." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_bRaiseTerrain_SetBit(void* Obj)
	{
		((FHoudiniLandscapeSplineSegmentData*)Obj)->bRaiseTerrain = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_bRaiseTerrain = { "bRaiseTerrain", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FHoudiniLandscapeSplineSegmentData), &Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_bRaiseTerrain_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_bRaiseTerrain_MetaData), Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_bRaiseTerrain_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_bLowerTerrain_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If the spline is below the terrain, whether to lower the terrain down to the level of the spline when applying it to the landscape. */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the spline is below the terrain, whether to lower the terrain down to the level of the spline when applying it to the landscape." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_bLowerTerrain_SetBit(void* Obj)
	{
		((FHoudiniLandscapeSplineSegmentData*)Obj)->bLowerTerrain = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_bLowerTerrain = { "bLowerTerrain", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FHoudiniLandscapeSplineSegmentData), &Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_bLowerTerrain_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_bLowerTerrain_MetaData), Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_bLowerTerrain_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_SplineMeshes_Inner = { "SplineMeshes", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry, METADATA_PARAMS(0, nullptr) }; // 2066017991
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_SplineMeshes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spline meshes from this list are used in random order along the spline. */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spline meshes from this list are used in random order along the spline." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_SplineMeshes = { "SplineMeshes", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniLandscapeSplineSegmentData, SplineMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_SplineMeshes_MetaData), Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_SplineMeshes_MetaData) }; // 2066017991
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_LayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_bRaiseTerrain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_bLowerTerrain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_SplineMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewProp_SplineMeshes,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniLandscapeSplineSegmentData",
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::PropPointers), 0),
		sizeof(FHoudiniLandscapeSplineSegmentData),
		alignof(FHoudiniLandscapeSplineSegmentData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::Struct_MetaDataParams)
	};
#if WITH_EDITORONLY_DATA
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::PropPointers) < 2048);
#endif
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineSegmentData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineSegmentData.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineSegmentData.InnerSingleton;
	}
	void UHoudiniInputLandscapeSplinesComponent::StaticRegisterNativesUHoudiniInputLandscapeSplinesComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputLandscapeSplinesComponent);
	UClass* Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_NoRegister()
	{
		return UHoudiniInputLandscapeSplinesComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedControlPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedSegments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedSegments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedSegments;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControlPointIdMap_ValueProp;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ControlPointIdMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlPointIdMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ControlPointIdMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextControlPointId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NextControlPointId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputSceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_CachedControlPoints_Inner = { "CachedControlPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData, METADATA_PARAMS(0, nullptr) }; // 974625187
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_CachedControlPoints_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A copy of the control points of the spline the last time this object was updated. */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A copy of the control points of the spline the last time this object was updated." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_CachedControlPoints = { "CachedControlPoints", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputLandscapeSplinesComponent, CachedControlPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_CachedControlPoints_MetaData), Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_CachedControlPoints_MetaData) }; // 974625187
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_CachedSegments_Inner = { "CachedSegments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData, METADATA_PARAMS(0, nullptr) }; // 1503620624
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_CachedSegments_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A copy of the segments of the landscape spline the last time this was object was updated. */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A copy of the segments of the landscape spline the last time this was object was updated." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_CachedSegments = { "CachedSegments", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputLandscapeSplinesComponent, CachedSegments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_CachedSegments_MetaData), Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_CachedSegments_MetaData) }; // 1503620624
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_ControlPointIdMap_ValueProp = { "ControlPointIdMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_ControlPointIdMap_Key_KeyProp = { "ControlPointIdMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_ControlPointIdMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The generated ids for the control points from the last time this object was updated. */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The generated ids for the control points from the last time this object was updated." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_ControlPointIdMap = { "ControlPointIdMap", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputLandscapeSplinesComponent, ControlPointIdMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_ControlPointIdMap_MetaData), Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_ControlPointIdMap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_NextControlPointId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The id to assign the next new control point we encounter. */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The id to assign the next new control point we encounter." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_NextControlPointId = { "NextControlPointId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputLandscapeSplinesComponent, NextControlPointId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_NextControlPointId_MetaData), Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_NextControlPointId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_CachedControlPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_CachedControlPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_CachedSegments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_CachedSegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_ControlPointIdMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_ControlPointIdMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_ControlPointIdMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::NewProp_NextControlPointId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputLandscapeSplinesComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::ClassParams = {
		&UHoudiniInputLandscapeSplinesComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInputLandscapeSplinesComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputLandscapeSplinesComponent.OuterSingleton, Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInputLandscapeSplinesComponent.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputLandscapeSplinesComponent>()
	{
		return UHoudiniInputLandscapeSplinesComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputLandscapeSplinesComponent);
	UHoudiniInputLandscapeSplinesComponent::~UHoudiniInputLandscapeSplinesComponent() {}
	void UHoudiniInputSplineMeshComponent::StaticRegisterNativesUHoudiniInputSplineMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniInputSplineMeshComponent);
	UClass* Z_Construct_UClass_UHoudiniInputSplineMeshComponent_NoRegister()
	{
		return UHoudiniInputSplineMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshPackageGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshPackageGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeneratedMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedForwardAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CachedForwardAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedSplineParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedSplineParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedSplineUpDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedSplineUpDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedSplineBoundaryMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedSplineBoundaryMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedSplineBoundaryMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedSplineBoundaryMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedbSmoothInterpRollScale_MetaData[];
#endif
		static void NewProp_CachedbSmoothInterpRollScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CachedbSmoothInterpRollScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------------------------------------------------------------------------------------------------\n// USplineMeshComponent input\n//-----------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "HoudiniInputObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "USplineMeshComponent input" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_MeshPackageGuid_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_MeshPackageGuid = { "MeshPackageGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSplineMeshComponent, MeshPackageGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_MeshPackageGuid_MetaData), Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_MeshPackageGuid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_GeneratedMesh_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_GeneratedMesh = { "GeneratedMesh", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSplineMeshComponent, GeneratedMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_GeneratedMesh_MetaData), Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_GeneratedMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedForwardAxis_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedForwardAxis = { "CachedForwardAxis", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSplineMeshComponent, CachedForwardAxis), Z_Construct_UEnum_Engine_ESplineMeshAxis, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedForwardAxis_MetaData), Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedForwardAxis_MetaData) }; // 2338763530
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineParams_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineParams = { "CachedSplineParams", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSplineMeshComponent, CachedSplineParams), Z_Construct_UScriptStruct_FSplineMeshParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineParams_MetaData), Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineParams_MetaData) }; // 85178533
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineUpDir_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineUpDir = { "CachedSplineUpDir", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSplineMeshComponent, CachedSplineUpDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineUpDir_MetaData), Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineUpDir_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineBoundaryMax_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineBoundaryMax = { "CachedSplineBoundaryMax", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSplineMeshComponent, CachedSplineBoundaryMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineBoundaryMax_MetaData), Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineBoundaryMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineBoundaryMin_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineBoundaryMin = { "CachedSplineBoundaryMin", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniInputSplineMeshComponent, CachedSplineBoundaryMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineBoundaryMin_MetaData), Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineBoundaryMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedbSmoothInterpRollScale_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputObject.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedbSmoothInterpRollScale_SetBit(void* Obj)
	{
		((UHoudiniInputSplineMeshComponent*)Obj)->CachedbSmoothInterpRollScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedbSmoothInterpRollScale = { "CachedbSmoothInterpRollScale", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHoudiniInputSplineMeshComponent), &Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedbSmoothInterpRollScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedbSmoothInterpRollScale_MetaData), Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedbSmoothInterpRollScale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_MeshPackageGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_GeneratedMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedForwardAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineUpDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineBoundaryMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedSplineBoundaryMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::NewProp_CachedbSmoothInterpRollScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputSplineMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::ClassParams = {
		&UHoudiniInputSplineMeshComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniInputSplineMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UHoudiniInputSplineMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniInputSplineMeshComponent.OuterSingleton, Z_Construct_UClass_UHoudiniInputSplineMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniInputSplineMeshComponent.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputSplineMeshComponent>()
	{
		return UHoudiniInputSplineMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputSplineMeshComponent);
	UHoudiniInputSplineMeshComponent::~UHoudiniInputSplineMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputObject_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputObject_h_Statics::EnumInfo[] = {
		{ EHoudiniInputObjectType_StaticEnum, TEXT("EHoudiniInputObjectType"), &Z_Registration_Info_UEnum_EHoudiniInputObjectType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2363815860U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputObject_h_Statics::ScriptStructInfo[] = {
		{ FHoudiniBrushInfo::StaticStruct, Z_Construct_UScriptStruct_FHoudiniBrushInfo_Statics::NewStructOps, TEXT("HoudiniBrushInfo"), &Z_Registration_Info_UScriptStruct_HoudiniBrushInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniBrushInfo), 1498003446U) },
		{ FHoudiniLandscapeSplineControlPointData::StaticStruct, Z_Construct_UScriptStruct_FHoudiniLandscapeSplineControlPointData_Statics::NewStructOps, TEXT("HoudiniLandscapeSplineControlPointData"), &Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineControlPointData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniLandscapeSplineControlPointData), 974625187U) },
		{ FHoudiniLandscapeSplineSegmentData::StaticStruct, Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewStructOps, TEXT("HoudiniLandscapeSplineSegmentData"), &Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineSegmentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniLandscapeSplineSegmentData), 1503620624U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniInputObject, UHoudiniInputObject::StaticClass, TEXT("UHoudiniInputObject"), &Z_Registration_Info_UClass_UHoudiniInputObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputObject), 733427436U) },
		{ Z_Construct_UClass_UHoudiniInputStaticMesh, UHoudiniInputStaticMesh::StaticClass, TEXT("UHoudiniInputStaticMesh"), &Z_Registration_Info_UClass_UHoudiniInputStaticMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputStaticMesh), 3907151297U) },
		{ Z_Construct_UClass_UHoudiniInputSkeletalMesh, UHoudiniInputSkeletalMesh::StaticClass, TEXT("UHoudiniInputSkeletalMesh"), &Z_Registration_Info_UClass_UHoudiniInputSkeletalMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputSkeletalMesh), 4079879755U) },
		{ Z_Construct_UClass_UHoudiniInputAnimation, UHoudiniInputAnimation::StaticClass, TEXT("UHoudiniInputAnimation"), &Z_Registration_Info_UClass_UHoudiniInputAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputAnimation), 1145628428U) },
		{ Z_Construct_UClass_UHoudiniInputGeometryCollection, UHoudiniInputGeometryCollection::StaticClass, TEXT("UHoudiniInputGeometryCollection"), &Z_Registration_Info_UClass_UHoudiniInputGeometryCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputGeometryCollection), 3866366594U) },
		{ Z_Construct_UClass_UHoudiniInputSceneComponent, UHoudiniInputSceneComponent::StaticClass, TEXT("UHoudiniInputSceneComponent"), &Z_Registration_Info_UClass_UHoudiniInputSceneComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputSceneComponent), 3753800796U) },
		{ Z_Construct_UClass_UHoudiniInputMeshComponent, UHoudiniInputMeshComponent::StaticClass, TEXT("UHoudiniInputMeshComponent"), &Z_Registration_Info_UClass_UHoudiniInputMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputMeshComponent), 3072246266U) },
		{ Z_Construct_UClass_UHoudiniInputInstancedMeshComponent, UHoudiniInputInstancedMeshComponent::StaticClass, TEXT("UHoudiniInputInstancedMeshComponent"), &Z_Registration_Info_UClass_UHoudiniInputInstancedMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputInstancedMeshComponent), 3650115357U) },
		{ Z_Construct_UClass_UHoudiniInputSplineComponent, UHoudiniInputSplineComponent::StaticClass, TEXT("UHoudiniInputSplineComponent"), &Z_Registration_Info_UClass_UHoudiniInputSplineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputSplineComponent), 2044897210U) },
		{ Z_Construct_UClass_UHoudiniInputGeometryCollectionComponent, UHoudiniInputGeometryCollectionComponent::StaticClass, TEXT("UHoudiniInputGeometryCollectionComponent"), &Z_Registration_Info_UClass_UHoudiniInputGeometryCollectionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputGeometryCollectionComponent), 3921576679U) },
		{ Z_Construct_UClass_UHoudiniInputSkeletalMeshComponent, UHoudiniInputSkeletalMeshComponent::StaticClass, TEXT("UHoudiniInputSkeletalMeshComponent"), &Z_Registration_Info_UClass_UHoudiniInputSkeletalMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputSkeletalMeshComponent), 84020142U) },
		{ Z_Construct_UClass_UHoudiniInputHoudiniSplineComponent, UHoudiniInputHoudiniSplineComponent::StaticClass, TEXT("UHoudiniInputHoudiniSplineComponent"), &Z_Registration_Info_UClass_UHoudiniInputHoudiniSplineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputHoudiniSplineComponent), 301137986U) },
		{ Z_Construct_UClass_UHoudiniInputCameraComponent, UHoudiniInputCameraComponent::StaticClass, TEXT("UHoudiniInputCameraComponent"), &Z_Registration_Info_UClass_UHoudiniInputCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputCameraComponent), 3764341158U) },
		{ Z_Construct_UClass_UHoudiniInputHoudiniAsset, UHoudiniInputHoudiniAsset::StaticClass, TEXT("UHoudiniInputHoudiniAsset"), &Z_Registration_Info_UClass_UHoudiniInputHoudiniAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputHoudiniAsset), 4226055178U) },
		{ Z_Construct_UClass_UHoudiniInputActor, UHoudiniInputActor::StaticClass, TEXT("UHoudiniInputActor"), &Z_Registration_Info_UClass_UHoudiniInputActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputActor), 3664099493U) },
		{ Z_Construct_UClass_UHoudiniInputLevelInstance, UHoudiniInputLevelInstance::StaticClass, TEXT("UHoudiniInputLevelInstance"), &Z_Registration_Info_UClass_UHoudiniInputLevelInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputLevelInstance), 178027308U) },
		{ Z_Construct_UClass_UHoudiniInputLandscape, UHoudiniInputLandscape::StaticClass, TEXT("UHoudiniInputLandscape"), &Z_Registration_Info_UClass_UHoudiniInputLandscape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputLandscape), 3030369019U) },
		{ Z_Construct_UClass_UHoudiniInputBrush, UHoudiniInputBrush::StaticClass, TEXT("UHoudiniInputBrush"), &Z_Registration_Info_UClass_UHoudiniInputBrush, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputBrush), 2337285386U) },
		{ Z_Construct_UClass_UHoudiniInputDataTable, UHoudiniInputDataTable::StaticClass, TEXT("UHoudiniInputDataTable"), &Z_Registration_Info_UClass_UHoudiniInputDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputDataTable), 1102372434U) },
		{ Z_Construct_UClass_UHoudiniInputFoliageType_InstancedStaticMesh, UHoudiniInputFoliageType_InstancedStaticMesh::StaticClass, TEXT("UHoudiniInputFoliageType_InstancedStaticMesh"), &Z_Registration_Info_UClass_UHoudiniInputFoliageType_InstancedStaticMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputFoliageType_InstancedStaticMesh), 2964539113U) },
		{ Z_Construct_UClass_UHoudiniInputBlueprint, UHoudiniInputBlueprint::StaticClass, TEXT("UHoudiniInputBlueprint"), &Z_Registration_Info_UClass_UHoudiniInputBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputBlueprint), 1550703269U) },
		{ Z_Construct_UClass_UHoudiniInputPackedLevelActor, UHoudiniInputPackedLevelActor::StaticClass, TEXT("UHoudiniInputPackedLevelActor"), &Z_Registration_Info_UClass_UHoudiniInputPackedLevelActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputPackedLevelActor), 445647812U) },
		{ Z_Construct_UClass_UHoudiniInputLandscapeSplineActor, UHoudiniInputLandscapeSplineActor::StaticClass, TEXT("UHoudiniInputLandscapeSplineActor"), &Z_Registration_Info_UClass_UHoudiniInputLandscapeSplineActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputLandscapeSplineActor), 3406637628U) },
		{ Z_Construct_UClass_UHoudiniInputLandscapeSplinesComponent, UHoudiniInputLandscapeSplinesComponent::StaticClass, TEXT("UHoudiniInputLandscapeSplinesComponent"), &Z_Registration_Info_UClass_UHoudiniInputLandscapeSplinesComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputLandscapeSplinesComponent), 3312620581U) },
		{ Z_Construct_UClass_UHoudiniInputSplineMeshComponent, UHoudiniInputSplineMeshComponent::StaticClass, TEXT("UHoudiniInputSplineMeshComponent"), &Z_Registration_Info_UClass_UHoudiniInputSplineMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniInputSplineMeshComponent), 1755491914U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputObject_h_922187690(TEXT("/Script/HoudiniEngineRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputObject_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputObject_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputObject_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputObject_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
