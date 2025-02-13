// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/HoudiniPresetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPresetFactory() {}
// Cross Module References
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPresetFactory();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPresetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References
	void UHoudiniPresetFactory::StaticRegisterNativesUHoudiniPresetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPresetFactory);
	UClass* Z_Construct_UClass_UHoudiniPresetFactory_NoRegister()
	{
		return UHoudiniPresetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPresetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPresetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPresetFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPresetFactory_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --------------------------------------------\n// HoudiniToolsPackageAsset factory\n// --------------------------------------------\n" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "HoudiniPresetFactory.h" },
		{ "ModuleRelativePath", "Private/HoudiniPresetFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HoudiniToolsPackageAsset factory" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPresetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPresetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPresetFactory_Statics::ClassParams = {
		&UHoudiniPresetFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPresetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPresetFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHoudiniPresetFactory()
	{
		if (!Z_Registration_Info_UClass_UHoudiniPresetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPresetFactory.OuterSingleton, Z_Construct_UClass_UHoudiniPresetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniPresetFactory.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPresetFactory>()
	{
		return UHoudiniPresetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPresetFactory);
	UHoudiniPresetFactory::~UHoudiniPresetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPresetFactory, UHoudiniPresetFactory::StaticClass, TEXT("UHoudiniPresetFactory"), &Z_Registration_Info_UClass_UHoudiniPresetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPresetFactory), 3260120117U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetFactory_h_3402853549(TEXT("/Script/HoudiniEngineEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
