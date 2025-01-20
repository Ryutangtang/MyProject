// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/HoudiniToolsEditorUISubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniToolsEditorUISubsystem() {}
// Cross Module References
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UAssetEditorUISubsystem();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniToolsEditorUISubsystem();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniToolsEditorUISubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References
	void UHoudiniToolsEditorUISubsystem::StaticRegisterNativesUHoudiniToolsEditorUISubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniToolsEditorUISubsystem);
	UClass* Z_Construct_UClass_UHoudiniToolsEditorUISubsystem_NoRegister()
	{
		return UHoudiniToolsEditorUISubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniToolsEditorUISubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniToolsEditorUISubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetEditorUISubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolsEditorUISubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniToolsEditorUISubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniToolsEditorUISubsystem.h" },
		{ "ModuleRelativePath", "Private/HoudiniToolsEditorUISubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniToolsEditorUISubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniToolsEditorUISubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniToolsEditorUISubsystem_Statics::ClassParams = {
		&UHoudiniToolsEditorUISubsystem::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolsEditorUISubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniToolsEditorUISubsystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHoudiniToolsEditorUISubsystem()
	{
		if (!Z_Registration_Info_UClass_UHoudiniToolsEditorUISubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniToolsEditorUISubsystem.OuterSingleton, Z_Construct_UClass_UHoudiniToolsEditorUISubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniToolsEditorUISubsystem.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniToolsEditorUISubsystem>()
	{
		return UHoudiniToolsEditorUISubsystem::StaticClass();
	}
	UHoudiniToolsEditorUISubsystem::UHoudiniToolsEditorUISubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniToolsEditorUISubsystem);
	UHoudiniToolsEditorUISubsystem::~UHoudiniToolsEditorUISubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniToolsEditorUISubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniToolsEditorUISubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniToolsEditorUISubsystem, UHoudiniToolsEditorUISubsystem::StaticClass, TEXT("UHoudiniToolsEditorUISubsystem"), &Z_Registration_Info_UClass_UHoudiniToolsEditorUISubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniToolsEditorUISubsystem), 1229730425U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniToolsEditorUISubsystem_h_2503333005(TEXT("/Script/HoudiniEngineEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniToolsEditorUISubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniToolsEditorUISubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
