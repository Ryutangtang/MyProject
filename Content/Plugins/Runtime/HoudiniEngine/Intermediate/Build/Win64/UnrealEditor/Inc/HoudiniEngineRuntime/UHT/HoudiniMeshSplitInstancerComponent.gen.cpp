// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniMeshSplitInstancerComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniMeshSplitInstancerComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	void UHoudiniMeshSplitInstancerComponent::StaticRegisterNativesUHoudiniMeshSplitInstancerComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniMeshSplitInstancerComponent);
	UClass* Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_NoRegister()
	{
		return UHoudiniMeshSplitInstancerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Instances;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* UHoudiniMeshSplitInstancerComponent is used to manage a single static mesh being\n* 'instanced' multiple times by multiple UStaticMeshComponents.  This is as opposed to the\n* UInstancedStaticMeshComponent wherein a single mesh is instanced multiple times by one component.\n*/" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "HoudiniMeshSplitInstancerComponent.h" },
		{ "ModuleRelativePath", "Private/HoudiniMeshSplitInstancerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UHoudiniMeshSplitInstancerComponent is used to manage a single static mesh being\n'instanced' multiple times by multiple UStaticMeshComponents.  This is as opposed to the\nUInstancedStaticMeshComponent wherein a single mesh is instanced multiple times by one component." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_Instances_Inner = { "Instances", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_Instances_MetaData[] = {
		{ "Category", "Instances" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniMeshSplitInstancerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_Instances = { "Instances", nullptr, (EPropertyFlags)0x0040008000020809, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniMeshSplitInstancerComponent, Instances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_Instances_MetaData), Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_Instances_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "Instances" },
		{ "ModuleRelativePath", "Private/HoudiniMeshSplitInstancerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0040000000020801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniMeshSplitInstancerComponent, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_OverrideMaterials_MetaData), Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_OverrideMaterials_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_InstancedMesh_MetaData[] = {
		{ "Category", "Instances" },
		{ "ModuleRelativePath", "Private/HoudiniMeshSplitInstancerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_InstancedMesh = { "InstancedMesh", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniMeshSplitInstancerComponent, InstancedMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_InstancedMesh_MetaData), Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_InstancedMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_Instances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_Instances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_OverrideMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_OverrideMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::NewProp_InstancedMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniMeshSplitInstancerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::ClassParams = {
		&UHoudiniMeshSplitInstancerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent()
	{
		if (!Z_Registration_Info_UClass_UHoudiniMeshSplitInstancerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniMeshSplitInstancerComponent.OuterSingleton, Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniMeshSplitInstancerComponent.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniMeshSplitInstancerComponent>()
	{
		return UHoudiniMeshSplitInstancerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniMeshSplitInstancerComponent);
	UHoudiniMeshSplitInstancerComponent::~UHoudiniMeshSplitInstancerComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UHoudiniMeshSplitInstancerComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniMeshSplitInstancerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniMeshSplitInstancerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent, UHoudiniMeshSplitInstancerComponent::StaticClass, TEXT("UHoudiniMeshSplitInstancerComponent"), &Z_Registration_Info_UClass_UHoudiniMeshSplitInstancerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniMeshSplitInstancerComponent), 1534346555U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniMeshSplitInstancerComponent_h_3672094840(TEXT("/Script/HoudiniEngineRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniMeshSplitInstancerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniMeshSplitInstancerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
