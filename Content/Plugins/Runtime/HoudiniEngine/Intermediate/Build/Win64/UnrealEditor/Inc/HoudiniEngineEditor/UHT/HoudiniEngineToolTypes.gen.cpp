// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/HoudiniEngineToolTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEngineToolTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPackageToolType();
	HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolCategoryType();
	HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniToolCategory();
	HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniToolDirectory();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniToolDirectory;
class UScriptStruct* FHoudiniToolDirectory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniToolDirectory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniToolDirectory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniToolDirectory, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("HoudiniToolDirectory"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniToolDirectory.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<FHoudiniToolDirectory>()
{
	return FHoudiniToolDirectory::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentDirID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentDirID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/HoudiniEngineToolTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniToolDirectory>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Tool" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the tool directory */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniEngineToolTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the tool directory" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniToolDirectory, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "Tool" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Path of the tool directory */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniEngineToolTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Path of the tool directory" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniToolDirectory, Path), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::NewProp_Path_MetaData), Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::NewProp_Path_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::NewProp_ContentDirID_MetaData[] = {
		{ "Category", "Tool" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Unique generated ID used to store the imported uasset for the tools */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniEngineToolTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unique generated ID used to store the imported uasset for the tools" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::NewProp_ContentDirID = { "ContentDirID", nullptr, (EPropertyFlags)0x0010000000074001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniToolDirectory, ContentDirID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::NewProp_ContentDirID_MetaData), Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::NewProp_ContentDirID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::NewProp_ContentDirID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		nullptr,
		&NewStructOps,
		"HoudiniToolDirectory",
		Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::PropPointers),
		sizeof(FHoudiniToolDirectory),
		alignof(FHoudiniToolDirectory),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniToolDirectory()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniToolDirectory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniToolDirectory.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniToolDirectory.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniToolCategoryType;
	static UEnum* EHoudiniToolCategoryType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniToolCategoryType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniToolCategoryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolCategoryType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("EHoudiniToolCategoryType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniToolCategoryType.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniToolCategoryType>()
	{
		return EHoudiniToolCategoryType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolCategoryType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolCategoryType_Statics::Enumerators[] = {
		{ "EHoudiniToolCategoryType::Package", (int64)EHoudiniToolCategoryType::Package },
		{ "EHoudiniToolCategoryType::User", (int64)EHoudiniToolCategoryType::User },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolCategoryType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniEngineToolTypes.h" },
		{ "Package.Name", "EHoudiniToolCategoryType::Package" },
		{ "User.Name", "EHoudiniToolCategoryType::User" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolCategoryType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		nullptr,
		"EHoudiniToolCategoryType",
		"EHoudiniToolCategoryType",
		Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolCategoryType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolCategoryType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolCategoryType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolCategoryType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolCategoryType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniToolCategoryType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniToolCategoryType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolCategoryType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniToolCategoryType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniPackageToolType;
	static UEnum* EHoudiniPackageToolType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniPackageToolType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniPackageToolType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPackageToolType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("EHoudiniPackageToolType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniPackageToolType.OuterSingleton;
	}
	template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPackageToolType>()
	{
		return EHoudiniPackageToolType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPackageToolType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPackageToolType_Statics::Enumerators[] = {
		{ "EHoudiniPackageToolType::HoudiniAsset", (int64)EHoudiniPackageToolType::HoudiniAsset },
		{ "EHoudiniPackageToolType::Preset", (int64)EHoudiniPackageToolType::Preset },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPackageToolType_Statics::Enum_MetaDataParams[] = {
		{ "HoudiniAsset.Name", "EHoudiniPackageToolType::HoudiniAsset" },
		{ "ModuleRelativePath", "Private/HoudiniEngineToolTypes.h" },
		{ "Preset.Name", "EHoudiniPackageToolType::Preset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPackageToolType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		nullptr,
		"EHoudiniPackageToolType",
		"EHoudiniPackageToolType",
		Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPackageToolType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPackageToolType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPackageToolType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPackageToolType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPackageToolType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniPackageToolType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniPackageToolType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPackageToolType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniPackageToolType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniToolCategory;
class UScriptStruct* FHoudiniToolCategory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniToolCategory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniToolCategory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniToolCategory, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("HoudiniToolCategory"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniToolCategory.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<FHoudiniToolCategory>()
{
	return FHoudiniToolCategory::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniToolCategory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniToolCategory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/HoudiniEngineToolTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniToolCategory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniToolCategory>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniToolCategory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		nullptr,
		&NewStructOps,
		"HoudiniToolCategory",
		nullptr,
		0,
		sizeof(FHoudiniToolCategory),
		alignof(FHoudiniToolCategory),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniToolCategory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniToolCategory_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniToolCategory()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniToolCategory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniToolCategory.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniToolCategory_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniToolCategory.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEngineToolTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEngineToolTypes_h_Statics::EnumInfo[] = {
		{ EHoudiniToolCategoryType_StaticEnum, TEXT("EHoudiniToolCategoryType"), &Z_Registration_Info_UEnum_EHoudiniToolCategoryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1834979331U) },
		{ EHoudiniPackageToolType_StaticEnum, TEXT("EHoudiniPackageToolType"), &Z_Registration_Info_UEnum_EHoudiniPackageToolType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2827595790U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEngineToolTypes_h_Statics::ScriptStructInfo[] = {
		{ FHoudiniToolDirectory::StaticStruct, Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics::NewStructOps, TEXT("HoudiniToolDirectory"), &Z_Registration_Info_UScriptStruct_HoudiniToolDirectory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniToolDirectory), 2484982476U) },
		{ FHoudiniToolCategory::StaticStruct, Z_Construct_UScriptStruct_FHoudiniToolCategory_Statics::NewStructOps, TEXT("HoudiniToolCategory"), &Z_Registration_Info_UScriptStruct_HoudiniToolCategory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniToolCategory), 739423255U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEngineToolTypes_h_37406702(TEXT("/Script/HoudiniEngineEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEngineToolTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEngineToolTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEngineToolTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEngineToolTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
