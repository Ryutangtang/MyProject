// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HCsgUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHCsgUtils() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UModel();
	HOUDINIENGINE_API UClass* Z_Construct_UClass_UHCsgUtils();
	HOUDINIENGINE_API UClass* Z_Construct_UClass_UHCsgUtils_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References
	void UHCsgUtils::StaticRegisterNativesUHCsgUtils()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHCsgUtils);
	UClass* Z_Construct_UClass_UHCsgUtils_NoRegister()
	{
		return UHCsgUtils::StaticClass();
	}
	struct Z_Construct_UClass_UHCsgUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GModel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TempModel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TempModel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHCsgUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHCsgUtils_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHCsgUtils_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This HCsgUtils is one big fork of the codebase located UnrealEd/Private/EditorBsp.cpp.\n// The main purpose was to remove parts of the code that store state in global/static variables as well\n// as dependency on editor state (such as retrieving selected brushes).\n" },
#endif
		{ "IncludePath", "HCsgUtils.h" },
		{ "ModuleRelativePath", "Private/HCsgUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This HCsgUtils is one big fork of the codebase located UnrealEd/Private/EditorBsp.cpp.\nThe main purpose was to remove parts of the code that store state in global/static variables as well\nas dependency on editor state (such as retrieving selected brushes)." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHCsgUtils_Statics::NewProp_GModel_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of Bsp nodes at start of AddWorldToBrush.\n" },
#endif
		{ "ModuleRelativePath", "Private/HCsgUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of Bsp nodes at start of AddWorldToBrush." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHCsgUtils_Statics::NewProp_GModel = { "GModel", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHCsgUtils, GModel), Z_Construct_UClass_UModel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHCsgUtils_Statics::NewProp_GModel_MetaData), Z_Construct_UClass_UHCsgUtils_Statics::NewProp_GModel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHCsgUtils_Statics::NewProp_TempModel_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Level map Model we're adding to.\n" },
#endif
		{ "ModuleRelativePath", "Private/HCsgUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Level map Model we're adding to." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHCsgUtils_Statics::NewProp_TempModel = { "TempModel", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHCsgUtils, TempModel), Z_Construct_UClass_UModel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHCsgUtils_Statics::NewProp_TempModel_MetaData), Z_Construct_UClass_UHCsgUtils_Statics::NewProp_TempModel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHCsgUtils_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHCsgUtils_Statics::NewProp_GModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHCsgUtils_Statics::NewProp_TempModel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHCsgUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHCsgUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHCsgUtils_Statics::ClassParams = {
		&UHCsgUtils::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHCsgUtils_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHCsgUtils_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHCsgUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UHCsgUtils_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHCsgUtils_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHCsgUtils()
	{
		if (!Z_Registration_Info_UClass_UHCsgUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHCsgUtils.OuterSingleton, Z_Construct_UClass_UHCsgUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHCsgUtils.OuterSingleton;
	}
	template<> HOUDINIENGINE_API UClass* StaticClass<UHCsgUtils>()
	{
		return UHCsgUtils::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHCsgUtils);
	UHCsgUtils::~UHCsgUtils() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HCsgUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HCsgUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHCsgUtils, UHCsgUtils::StaticClass, TEXT("UHCsgUtils"), &Z_Registration_Info_UClass_UHCsgUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHCsgUtils), 667706658U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HCsgUtils_h_9536463(TEXT("/Script/HoudiniEngine"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HCsgUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HCsgUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
