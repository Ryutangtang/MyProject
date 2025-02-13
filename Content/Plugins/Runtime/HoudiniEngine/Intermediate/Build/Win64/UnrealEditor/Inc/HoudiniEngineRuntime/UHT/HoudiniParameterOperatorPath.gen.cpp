// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterOperatorPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterOperatorPath() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInput_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterOperatorPath();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterOperatorPath_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	void UHoudiniParameterOperatorPath::StaticRegisterNativesUHoudiniParameterOperatorPath()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterOperatorPath);
	UClass* Z_Construct_UClass_UHoudiniParameterOperatorPath_NoRegister()
	{
		return UHoudiniParameterOperatorPath::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniInput_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_HoudiniInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterOperatorPath.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterOperatorPath.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::NewProp_HoudiniInput_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterOperatorPath.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::NewProp_HoudiniInput = { "HoudiniInput", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterOperatorPath, HoudiniInput), Z_Construct_UClass_UHoudiniInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::NewProp_HoudiniInput_MetaData), Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::NewProp_HoudiniInput_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::NewProp_HoudiniInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterOperatorPath>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::ClassParams = {
		&UHoudiniParameterOperatorPath::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniParameterOperatorPath()
	{
		if (!Z_Registration_Info_UClass_UHoudiniParameterOperatorPath.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterOperatorPath.OuterSingleton, Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniParameterOperatorPath.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterOperatorPath>()
	{
		return UHoudiniParameterOperatorPath::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterOperatorPath);
	UHoudiniParameterOperatorPath::~UHoudiniParameterOperatorPath() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterOperatorPath_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterOperatorPath_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniParameterOperatorPath, UHoudiniParameterOperatorPath::StaticClass, TEXT("UHoudiniParameterOperatorPath"), &Z_Registration_Info_UClass_UHoudiniParameterOperatorPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterOperatorPath), 932234796U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterOperatorPath_h_716815507(TEXT("/Script/HoudiniEngineRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterOperatorPath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterOperatorPath_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
