// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniNodeSyncComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniNodeSyncComponent() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniNodeSyncComponent();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniNodeSyncComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniNodeSyncStatus();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniNodeSyncStatus;
	static UEnum* EHoudiniNodeSyncStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniNodeSyncStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniNodeSyncStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniNodeSyncStatus, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniNodeSyncStatus"));
		}
		return Z_Registration_Info_UEnum_EHoudiniNodeSyncStatus.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniNodeSyncStatus>()
	{
		return EHoudiniNodeSyncStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniNodeSyncStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniNodeSyncStatus_Statics::Enumerators[] = {
		{ "EHoudiniNodeSyncStatus::None", (int64)EHoudiniNodeSyncStatus::None },
		{ "EHoudiniNodeSyncStatus::Failed", (int64)EHoudiniNodeSyncStatus::Failed },
		{ "EHoudiniNodeSyncStatus::Success", (int64)EHoudiniNodeSyncStatus::Success },
		{ "EHoudiniNodeSyncStatus::SuccessWithErrors", (int64)EHoudiniNodeSyncStatus::SuccessWithErrors },
		{ "EHoudiniNodeSyncStatus::Running", (int64)EHoudiniNodeSyncStatus::Running },
		{ "EHoudiniNodeSyncStatus::Warning", (int64)EHoudiniNodeSyncStatus::Warning },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniNodeSyncStatus_Statics::Enum_MetaDataParams[] = {
		{ "Failed.Comment", "// Fetch/Send not used yet\n" },
		{ "Failed.Name", "EHoudiniNodeSyncStatus::Failed" },
		{ "Failed.ToolTip", "Fetch/Send not used yet" },
		{ "ModuleRelativePath", "Private/HoudiniNodeSyncComponent.h" },
		{ "None.Name", "EHoudiniNodeSyncStatus::None" },
		{ "Running.Comment", "// Last operation was successful, but reported errors\n" },
		{ "Running.Name", "EHoudiniNodeSyncStatus::Running" },
		{ "Running.ToolTip", "Last operation was successful, but reported errors" },
		{ "Success.Comment", "// Last operation failed\n" },
		{ "Success.Name", "EHoudiniNodeSyncStatus::Success" },
		{ "Success.ToolTip", "Last operation failed" },
		{ "SuccessWithErrors.Comment", "// Last operation was successful\n" },
		{ "SuccessWithErrors.Name", "EHoudiniNodeSyncStatus::SuccessWithErrors" },
		{ "SuccessWithErrors.ToolTip", "Last operation was successful" },
		{ "Warning.Comment", "// Sending/Fetching\n" },
		{ "Warning.Name", "EHoudiniNodeSyncStatus::Warning" },
		{ "Warning.ToolTip", "Sending/Fetching" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniNodeSyncStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EHoudiniNodeSyncStatus",
		"EHoudiniNodeSyncStatus",
		Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniNodeSyncStatus_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniNodeSyncStatus_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniNodeSyncStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniNodeSyncStatus_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniNodeSyncStatus()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniNodeSyncStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniNodeSyncStatus.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniNodeSyncStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniNodeSyncStatus.InnerSingleton;
	}
	void UHoudiniNodeSyncComponent::StaticRegisterNativesUHoudiniNodeSyncComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniNodeSyncComponent);
	UClass* Z_Construct_UClass_UHoudiniNodeSyncComponent_NoRegister()
	{
		return UHoudiniNodeSyncComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FetchNodePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FetchNodePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLiveSyncEnabled_MetaData[];
#endif
		static void NewProp_bLiveSyncEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLiveSyncEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniAssetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering Common" },
		{ "HideCategories", "Object Activation Components|Activation HoudiniAsset Object Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "HoudiniNodeSyncComponent.h" },
		{ "ModuleRelativePath", "Private/HoudiniNodeSyncComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics::NewProp_FetchNodePath_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniNodeSyncComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics::NewProp_FetchNodePath = { "FetchNodePath", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniNodeSyncComponent, FetchNodePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics::NewProp_FetchNodePath_MetaData), Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics::NewProp_FetchNodePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics::NewProp_bLiveSyncEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniNodeSyncComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics::NewProp_bLiveSyncEnabled_SetBit(void* Obj)
	{
		((UHoudiniNodeSyncComponent*)Obj)->bLiveSyncEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics::NewProp_bLiveSyncEnabled = { "bLiveSyncEnabled", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniNodeSyncComponent), &Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics::NewProp_bLiveSyncEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics::NewProp_bLiveSyncEnabled_MetaData), Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics::NewProp_bLiveSyncEnabled_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics::NewProp_FetchNodePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics::NewProp_bLiveSyncEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniNodeSyncComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics::ClassParams = {
		&UHoudiniNodeSyncComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniNodeSyncComponent()
	{
		if (!Z_Registration_Info_UClass_UHoudiniNodeSyncComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniNodeSyncComponent.OuterSingleton, Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniNodeSyncComponent.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniNodeSyncComponent>()
	{
		return UHoudiniNodeSyncComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniNodeSyncComponent);
	UHoudiniNodeSyncComponent::~UHoudiniNodeSyncComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniNodeSyncComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniNodeSyncComponent_h_Statics::EnumInfo[] = {
		{ EHoudiniNodeSyncStatus_StaticEnum, TEXT("EHoudiniNodeSyncStatus"), &Z_Registration_Info_UEnum_EHoudiniNodeSyncStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2720735828U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniNodeSyncComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniNodeSyncComponent, UHoudiniNodeSyncComponent::StaticClass, TEXT("UHoudiniNodeSyncComponent"), &Z_Registration_Info_UClass_UHoudiniNodeSyncComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniNodeSyncComponent), 1775410601U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniNodeSyncComponent_h_1653535041(TEXT("/Script/HoudiniEngineRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniNodeSyncComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniNodeSyncComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniNodeSyncComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniNodeSyncComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
