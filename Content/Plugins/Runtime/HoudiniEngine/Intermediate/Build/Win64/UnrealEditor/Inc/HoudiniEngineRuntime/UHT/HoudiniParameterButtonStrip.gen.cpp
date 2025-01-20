// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterButtonStrip.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterButtonStrip() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterButtonStrip();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterButtonStrip_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	void UHoudiniParameterButtonStrip::StaticRegisterNativesUHoudiniParameterButtonStrip()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterButtonStrip);
	UClass* Z_Construct_UClass_UHoudiniParameterButtonStrip_NoRegister()
	{
		return UHoudiniParameterButtonStrip::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Labels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Labels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Labels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterButtonStrip.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterButtonStrip.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Labels_Inner = { "Labels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Labels_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterButtonStrip.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Labels = { "Labels", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterButtonStrip, Labels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Labels_MetaData), Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Labels_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Value_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** See @ref SetValue */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterButtonStrip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "See @ref SetValue" },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterButtonStrip, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Value_MetaData), Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Value_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterButtonStrip.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterButtonStrip, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_DefaultValue_MetaData), Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_DefaultValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Labels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Labels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::NewProp_DefaultValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterButtonStrip>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::ClassParams = {
		&UHoudiniParameterButtonStrip::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniParameterButtonStrip()
	{
		if (!Z_Registration_Info_UClass_UHoudiniParameterButtonStrip.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterButtonStrip.OuterSingleton, Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniParameterButtonStrip.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterButtonStrip>()
	{
		return UHoudiniParameterButtonStrip::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterButtonStrip);
	UHoudiniParameterButtonStrip::~UHoudiniParameterButtonStrip() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButtonStrip_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButtonStrip_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniParameterButtonStrip, UHoudiniParameterButtonStrip::StaticClass, TEXT("UHoudiniParameterButtonStrip"), &Z_Registration_Info_UClass_UHoudiniParameterButtonStrip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterButtonStrip), 1808513095U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButtonStrip_h_3193077493(TEXT("/Script/HoudiniEngineRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButtonStrip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButtonStrip_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
