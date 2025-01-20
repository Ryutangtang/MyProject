// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter_NoRegister();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterChoiceListType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniParameterType;
	static UEnum* EHoudiniParameterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniParameterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniParameterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniParameterType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniParameterType.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniParameterType>()
	{
		return EHoudiniParameterType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType_Statics::Enumerators[] = {
		{ "EHoudiniParameterType::Invalid", (int64)EHoudiniParameterType::Invalid },
		{ "EHoudiniParameterType::Button", (int64)EHoudiniParameterType::Button },
		{ "EHoudiniParameterType::ButtonStrip", (int64)EHoudiniParameterType::ButtonStrip },
		{ "EHoudiniParameterType::Color", (int64)EHoudiniParameterType::Color },
		{ "EHoudiniParameterType::ColorRamp", (int64)EHoudiniParameterType::ColorRamp },
		{ "EHoudiniParameterType::File", (int64)EHoudiniParameterType::File },
		{ "EHoudiniParameterType::FileDir", (int64)EHoudiniParameterType::FileDir },
		{ "EHoudiniParameterType::FileGeo", (int64)EHoudiniParameterType::FileGeo },
		{ "EHoudiniParameterType::FileImage", (int64)EHoudiniParameterType::FileImage },
		{ "EHoudiniParameterType::Float", (int64)EHoudiniParameterType::Float },
		{ "EHoudiniParameterType::FloatRamp", (int64)EHoudiniParameterType::FloatRamp },
		{ "EHoudiniParameterType::Folder", (int64)EHoudiniParameterType::Folder },
		{ "EHoudiniParameterType::FolderList", (int64)EHoudiniParameterType::FolderList },
		{ "EHoudiniParameterType::Input", (int64)EHoudiniParameterType::Input },
		{ "EHoudiniParameterType::Int", (int64)EHoudiniParameterType::Int },
		{ "EHoudiniParameterType::IntChoice", (int64)EHoudiniParameterType::IntChoice },
		{ "EHoudiniParameterType::Label", (int64)EHoudiniParameterType::Label },
		{ "EHoudiniParameterType::MultiParm", (int64)EHoudiniParameterType::MultiParm },
		{ "EHoudiniParameterType::Separator", (int64)EHoudiniParameterType::Separator },
		{ "EHoudiniParameterType::String", (int64)EHoudiniParameterType::String },
		{ "EHoudiniParameterType::StringChoice", (int64)EHoudiniParameterType::StringChoice },
		{ "EHoudiniParameterType::StringAssetRef", (int64)EHoudiniParameterType::StringAssetRef },
		{ "EHoudiniParameterType::Toggle", (int64)EHoudiniParameterType::Toggle },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType_Statics::Enum_MetaDataParams[] = {
		{ "Button.Name", "EHoudiniParameterType::Button" },
		{ "ButtonStrip.Name", "EHoudiniParameterType::ButtonStrip" },
		{ "Color.Name", "EHoudiniParameterType::Color" },
		{ "ColorRamp.Name", "EHoudiniParameterType::ColorRamp" },
		{ "File.Name", "EHoudiniParameterType::File" },
		{ "FileDir.Name", "EHoudiniParameterType::FileDir" },
		{ "FileGeo.Name", "EHoudiniParameterType::FileGeo" },
		{ "FileImage.Name", "EHoudiniParameterType::FileImage" },
		{ "Float.Name", "EHoudiniParameterType::Float" },
		{ "FloatRamp.Name", "EHoudiniParameterType::FloatRamp" },
		{ "Folder.Name", "EHoudiniParameterType::Folder" },
		{ "FolderList.Name", "EHoudiniParameterType::FolderList" },
		{ "Input.Name", "EHoudiniParameterType::Input" },
		{ "Int.Name", "EHoudiniParameterType::Int" },
		{ "IntChoice.Name", "EHoudiniParameterType::IntChoice" },
		{ "Invalid.Name", "EHoudiniParameterType::Invalid" },
		{ "Label.Name", "EHoudiniParameterType::Label" },
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
		{ "MultiParm.Name", "EHoudiniParameterType::MultiParm" },
		{ "Separator.Name", "EHoudiniParameterType::Separator" },
		{ "String.Name", "EHoudiniParameterType::String" },
		{ "StringAssetRef.Name", "EHoudiniParameterType::StringAssetRef" },
		{ "StringChoice.Name", "EHoudiniParameterType::StringChoice" },
		{ "Toggle.Name", "EHoudiniParameterType::Toggle" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EHoudiniParameterType",
		"EHoudiniParameterType",
		Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniParameterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniParameterType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniParameterType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniParameterChoiceListType;
	static UEnum* EHoudiniParameterChoiceListType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniParameterChoiceListType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniParameterChoiceListType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterChoiceListType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniParameterChoiceListType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniParameterChoiceListType.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniParameterChoiceListType>()
	{
		return EHoudiniParameterChoiceListType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterChoiceListType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterChoiceListType_Statics::Enumerators[] = {
		{ "EHoudiniParameterChoiceListType::None", (int64)EHoudiniParameterChoiceListType::None },
		{ "EHoudiniParameterChoiceListType::Normal", (int64)EHoudiniParameterChoiceListType::Normal },
		{ "EHoudiniParameterChoiceListType::Mini", (int64)EHoudiniParameterChoiceListType::Mini },
		{ "EHoudiniParameterChoiceListType::Replace", (int64)EHoudiniParameterChoiceListType::Replace },
		{ "EHoudiniParameterChoiceListType::Toggle", (int64)EHoudiniParameterChoiceListType::Toggle },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterChoiceListType_Statics::Enum_MetaDataParams[] = {
		{ "Mini.Comment", "/** Mini Menu Only, Single Selection */" },
		{ "Mini.Name", "EHoudiniParameterChoiceListType::Mini" },
		{ "Mini.ToolTip", "Mini Menu Only, Single Selection" },
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
		{ "None.Comment", "/** Parameter is not a menu */" },
		{ "None.Name", "EHoudiniParameterChoiceListType::None" },
		{ "None.ToolTip", "Parameter is not a menu" },
		{ "Normal.Comment", "/** Menu Only, Single Selection */" },
		{ "Normal.Name", "EHoudiniParameterChoiceListType::Normal" },
		{ "Normal.ToolTip", "Menu Only, Single Selection" },
		{ "Replace.Comment", "/** Field + Single Selection Menu */" },
		{ "Replace.Name", "EHoudiniParameterChoiceListType::Replace" },
		{ "Replace.ToolTip", "Field + Single Selection Menu" },
		{ "Toggle.Comment", "/** Field + Multiple Selection Menu */" },
		{ "Toggle.Name", "EHoudiniParameterChoiceListType::Toggle" },
		{ "Toggle.ToolTip", "Field + Multiple Selection Menu" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterChoiceListType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EHoudiniParameterChoiceListType",
		"EHoudiniParameterChoiceListType",
		Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterChoiceListType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterChoiceListType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterChoiceListType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterChoiceListType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterChoiceListType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniParameterChoiceListType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniParameterChoiceListType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterChoiceListType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniParameterChoiceListType.InnerSingleton;
	}
	void UHoudiniParameter::StaticRegisterNativesUHoudiniParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameter);
	UClass* Z_Construct_UClass_UHoudiniParameter_NoRegister()
	{
		return UHoudiniParameter::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ParmType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParmType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ParmType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChoiceListType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceListType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChoiceListType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TupleSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TupleSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParmId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParmId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentParmId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParentParmId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChildIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsParentFolderVisible_MetaData[];
#endif
		static void NewProp_bIsParentFolderVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsParentFolderVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDisabled_MetaData[];
#endif
		static void NewProp_bIsDisabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDisabled;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDefault_MetaData[];
#endif
		static void NewProp_bIsDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSpare_MetaData[];
#endif
		static void NewProp_bIsSpare_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSpare;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bJoinNext_MetaData[];
#endif
		static void NewProp_bJoinNext_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bJoinNext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLabelVisible_MetaData[];
#endif
		static void NewProp_bIsLabelVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLabelVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsChildOfMultiParm_MetaData[];
#endif
		static void NewProp_bIsChildOfMultiParm_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChildOfMultiParm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDirectChildOfMultiParm_MetaData[];
#endif
		static void NewProp_bIsDirectChildOfMultiParm_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDirectChildOfMultiParm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPendingRevertToDefault_MetaData[];
#endif
		static void NewProp_bPendingRevertToDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingRevertToDefault;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TuplePendingRevertToDefault_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TuplePendingRevertToDefault_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TuplePendingRevertToDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Help_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Help;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagCount_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TagCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ValueIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasExpression_MetaData[];
#endif
		static void NewProp_bHasExpression_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasExpression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowExpression_MetaData[];
#endif
		static void NewProp_bShowExpression_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowExpression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamExpression_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamExpression;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoUpdate_MetaData[];
#endif
		static void NewProp_bAutoUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameter.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_Name_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameter, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_Label_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameter, Label), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_Label_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_Label_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ParmType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ParmType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unreal type of the parameter\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unreal type of the parameter" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ParmType = { "ParmType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameter, ParmType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ParmType_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ParmType_MetaData) }; // 1176372464
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ChoiceListType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ChoiceListType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The menu type of this parameter, None if it is not a menu.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The menu type of this parameter, None if it is not a menu." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ChoiceListType = { "ChoiceListType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameter, ChoiceListType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniParameterChoiceListType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ChoiceListType_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ChoiceListType_MetaData) }; // 1518963917
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_TupleSize_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tuple size. For scalar parameters this value is 1, but for vector parameters this value can be greater.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tuple size. For scalar parameters this value is 1, but for vector parameters this value can be greater." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_TupleSize = { "TupleSize", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameter, TupleSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_TupleSize_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_TupleSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_NodeId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Node this parameter belongs to.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Node this parameter belongs to." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameter, NodeId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_NodeId_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_NodeId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ParmId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Id of this parameter.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Id of this parameter." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ParmId = { "ParmId", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameter, ParmId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ParmId_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ParmId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ParentParmId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Id of parent parameter, -1 if root is parent.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Id of parent parameter, -1 if root is parent." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ParentParmId = { "ParentParmId", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameter, ParentParmId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ParentParmId_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ParentParmId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ChildIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Child index within its parent parameter.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Child index within its parent parameter." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ChildIndex = { "ChildIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameter, ChildIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ChildIndex_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ChildIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsVisible_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((UHoudiniParameter*)Obj)->bIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameter), &Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsVisible_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsVisible_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsParentFolderVisible_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is visible in hierarchy. (e.g. parm can be visible, but containing folder is not)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is visible in hierarchy. (e.g. parm can be visible, but containing folder is not)" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsParentFolderVisible_SetBit(void* Obj)
	{
		((UHoudiniParameter*)Obj)->bIsParentFolderVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsParentFolderVisible = { "bIsParentFolderVisible", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameter), &Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsParentFolderVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsParentFolderVisible_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsParentFolderVisible_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsDisabled_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsDisabled_SetBit(void* Obj)
	{
		((UHoudiniParameter*)Obj)->bIsDisabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsDisabled = { "bIsDisabled", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameter), &Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsDisabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsDisabled_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsDisabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bHasChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is set to true if value of this parameter has been changed by user.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is set to true if value of this parameter has been changed by user." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bHasChanged_SetBit(void* Obj)
	{
		((UHoudiniParameter*)Obj)->bHasChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bHasChanged = { "bHasChanged", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameter), &Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bHasChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bHasChanged_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bHasChanged_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bNeedsToTriggerUpdate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is set to true if value of this parameter will trigger an update of the asset\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is set to true if value of this parameter will trigger an update of the asset" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bNeedsToTriggerUpdate_SetBit(void* Obj)
	{
		((UHoudiniParameter*)Obj)->bNeedsToTriggerUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bNeedsToTriggerUpdate = { "bNeedsToTriggerUpdate", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameter), &Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bNeedsToTriggerUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bNeedsToTriggerUpdate_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bNeedsToTriggerUpdate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsDefault_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates that this parameter is still using its default value\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates that this parameter is still using its default value" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsDefault_SetBit(void* Obj)
	{
		((UHoudiniParameter*)Obj)->bIsDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsDefault = { "bIsDefault", nullptr, (EPropertyFlags)0x0020080000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameter), &Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsDefault_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsDefault_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsSpare_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Permissions for file parms\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Permissions for file parms" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsSpare_SetBit(void* Obj)
	{
		((UHoudiniParameter*)Obj)->bIsSpare = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsSpare = { "bIsSpare", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameter), &Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsSpare_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsSpare_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsSpare_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bJoinNext_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bJoinNext_SetBit(void* Obj)
	{
		((UHoudiniParameter*)Obj)->bJoinNext = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bJoinNext = { "bJoinNext", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameter), &Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bJoinNext_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bJoinNext_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bJoinNext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsLabelVisible_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether the label should be displayed.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the label should be displayed." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsLabelVisible_SetBit(void* Obj)
	{
		((UHoudiniParameter*)Obj)->bIsLabelVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsLabelVisible = { "bIsLabelVisible", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameter), &Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsLabelVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsLabelVisible_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsLabelVisible_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsChildOfMultiParm_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsChildOfMultiParm_SetBit(void* Obj)
	{
		((UHoudiniParameter*)Obj)->bIsChildOfMultiParm = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsChildOfMultiParm = { "bIsChildOfMultiParm", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameter), &Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsChildOfMultiParm_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsChildOfMultiParm_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsChildOfMultiParm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsDirectChildOfMultiParm_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsDirectChildOfMultiParm_SetBit(void* Obj)
	{
		((UHoudiniParameter*)Obj)->bIsDirectChildOfMultiParm = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsDirectChildOfMultiParm = { "bIsDirectChildOfMultiParm", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameter), &Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsDirectChildOfMultiParm_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsDirectChildOfMultiParm_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsDirectChildOfMultiParm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bPendingRevertToDefault_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates a parameter value needs to be reverted to its default\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates a parameter value needs to be reverted to its default" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bPendingRevertToDefault_SetBit(void* Obj)
	{
		((UHoudiniParameter*)Obj)->bPendingRevertToDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bPendingRevertToDefault = { "bPendingRevertToDefault", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameter), &Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bPendingRevertToDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bPendingRevertToDefault_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bPendingRevertToDefault_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_TuplePendingRevertToDefault_Inner = { "TuplePendingRevertToDefault", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_TuplePendingRevertToDefault_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_TuplePendingRevertToDefault = { "TuplePendingRevertToDefault", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameter, TuplePendingRevertToDefault), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_TuplePendingRevertToDefault_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_TuplePendingRevertToDefault_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_Help_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_Help = { "Help", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameter, Help), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_Help_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_Help_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_TagCount_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of tags on this parameter\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of tags on this parameter" },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_TagCount = { "TagCount", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameter, TagCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_TagCount_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_TagCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ValueIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The index to use to look into the values array in order to retrieve the actual value(s) of this parameter.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The index to use to look into the values array in order to retrieve the actual value(s) of this parameter." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ValueIndex = { "ValueIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameter, ValueIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ValueIndex_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ValueIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bHasExpression_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------------------\n// Expression\n// TODO: Use tuple array for this\n// Indicates the parameters has an expression value\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Expression\nTODO: Use tuple array for this\nIndicates the parameters has an expression value" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bHasExpression_SetBit(void* Obj)
	{
		((UHoudiniParameter*)Obj)->bHasExpression = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bHasExpression = { "bHasExpression", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameter), &Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bHasExpression_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bHasExpression_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bHasExpression_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bShowExpression_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates we are currently displaying the parameter's value\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates we are currently displaying the parameter's value" },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bShowExpression_SetBit(void* Obj)
	{
		((UHoudiniParameter*)Obj)->bShowExpression = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bShowExpression = { "bShowExpression", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameter), &Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bShowExpression_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bShowExpression_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bShowExpression_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ParamExpression_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The parameter's expression\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The parameter's expression" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ParamExpression = { "ParamExpression", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameter, ParamExpression), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ParamExpression_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ParamExpression_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_Tags_ValueProp = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_Tags_Key_KeyProp = { "Tags_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_Tags_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameter, Tags), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_Tags_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_Tags_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bAutoUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameter.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bAutoUpdate_SetBit(void* Obj)
	{
		((UHoudiniParameter*)Obj)->bAutoUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bAutoUpdate = { "bAutoUpdate", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameter), &Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bAutoUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bAutoUpdate_MetaData), Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bAutoUpdate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ParmType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ParmType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ChoiceListType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ChoiceListType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_TupleSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ParmId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ParentParmId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ChildIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsParentFolderVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsDisabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bHasChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bNeedsToTriggerUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsSpare,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bJoinNext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsLabelVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsChildOfMultiParm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bIsDirectChildOfMultiParm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bPendingRevertToDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_TuplePendingRevertToDefault_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_TuplePendingRevertToDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_Help,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_TagCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ValueIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bHasExpression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bShowExpression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_ParamExpression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_Tags_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_Tags_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameter_Statics::NewProp_bAutoUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameter_Statics::ClassParams = {
		&UHoudiniParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniParameter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniParameter()
	{
		if (!Z_Registration_Info_UClass_UHoudiniParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameter.OuterSingleton, Z_Construct_UClass_UHoudiniParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniParameter.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameter>()
	{
		return UHoudiniParameter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameter);
	UHoudiniParameter::~UHoudiniParameter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_Statics::EnumInfo[] = {
		{ EHoudiniParameterType_StaticEnum, TEXT("EHoudiniParameterType"), &Z_Registration_Info_UEnum_EHoudiniParameterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1176372464U) },
		{ EHoudiniParameterChoiceListType_StaticEnum, TEXT("EHoudiniParameterChoiceListType"), &Z_Registration_Info_UEnum_EHoudiniParameterChoiceListType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1518963917U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniParameter, UHoudiniParameter::StaticClass, TEXT("UHoudiniParameter"), &Z_Registration_Info_UClass_UHoudiniParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameter), 3057123472U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_1530632631(TEXT("/Script/HoudiniEngineRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
