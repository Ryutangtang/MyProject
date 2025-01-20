// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterFile() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFile();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	void UHoudiniParameterFile::StaticRegisterNativesUHoudiniParameterFile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterFile);
	UClass* Z_Construct_UClass_UHoudiniParameterFile_NoRegister()
	{
		return UHoudiniParameterFile::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filters_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsReadOnly_MetaData[];
#endif
		static void NewProp_bIsReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFile_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterFile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterFile.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterFile.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_Values_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Values of this property.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Values of this property." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterFile, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_Values_MetaData), Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_Values_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_DefaultValues_Inner = { "DefaultValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_DefaultValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterFile.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_DefaultValues = { "DefaultValues", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterFile, DefaultValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_DefaultValues_MetaData), Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_DefaultValues_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_Filters_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Filters of this property.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Filters of this property." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_Filters = { "Filters", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterFile, Filters), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_Filters_MetaData), Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_Filters_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_bIsReadOnly_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is the file parameter read-only?\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the file parameter read-only?" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_bIsReadOnly_SetBit(void* Obj)
	{
		((UHoudiniParameterFile*)Obj)->bIsReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_bIsReadOnly = { "bIsReadOnly", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterFile), &Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_bIsReadOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_bIsReadOnly_MetaData), Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_bIsReadOnly_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_DefaultValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_DefaultValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_Filters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFile_Statics::NewProp_bIsReadOnly,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterFile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterFile_Statics::ClassParams = {
		&UHoudiniParameterFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterFile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFile_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFile_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniParameterFile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniParameterFile()
	{
		if (!Z_Registration_Info_UClass_UHoudiniParameterFile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterFile.OuterSingleton, Z_Construct_UClass_UHoudiniParameterFile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniParameterFile.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterFile>()
	{
		return UHoudiniParameterFile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterFile);
	UHoudiniParameterFile::~UHoudiniParameterFile() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniParameterFile, UHoudiniParameterFile::StaticClass, TEXT("UHoudiniParameterFile"), &Z_Registration_Info_UClass_UHoudiniParameterFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterFile), 204796783U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFile_h_4286256823(TEXT("/Script/HoudiniEngineRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
