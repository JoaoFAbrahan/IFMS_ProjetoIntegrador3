// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorLocker/Public/ActorLockerEditorMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorLockerEditorMode() {}
// Cross Module References
	ACTORLOCKER_API UClass* Z_Construct_UClass_UActorLockerEditorMode();
	ACTORLOCKER_API UClass* Z_Construct_UClass_UActorLockerEditorMode_NoRegister();
	ACTORLOCKER_API UEnum* Z_Construct_UEnum_ActorLocker_EActorLockerInteractionType();
	UNREALED_API UClass* Z_Construct_UClass_UEdMode();
	UNREALED_API UClass* Z_Construct_UClass_ULegacyEdModeViewportInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ActorLocker();
// End Cross Module References
	void UActorLockerEditorMode::StaticRegisterNativesUActorLockerEditorMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorLockerEditorMode);
	UClass* Z_Construct_UClass_UActorLockerEditorMode_NoRegister()
	{
		return UActorLockerEditorMode::StaticClass();
	}
	struct Z_Construct_UClass_UActorLockerEditorMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractionType;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutlinerWidgetTypes_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutlinerWidgetTypes_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_OutlinerWidgetTypes;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MenuWidgetTypes_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuWidgetTypes_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_MenuWidgetTypes;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LockerWidgetTypes_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockerWidgetTypes_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_LockerWidgetTypes;
		static const UECodeGen_Private::FNamePropertyParams NewProp_IgnoredWidgetTypes_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredWidgetTypes_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_IgnoredWidgetTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorLockerEditorMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdMode,
		(UObject* (*)())Z_Construct_UPackage__Script_ActorLocker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorLockerEditorMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ActorLockerEditorMode.h" },
		{ "ModuleRelativePath", "Public/ActorLockerEditorMode.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_InteractionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_InteractionType_MetaData[] = {
		{ "Category", "Actor Locker Editor Mode" },
		{ "ModuleRelativePath", "Public/ActorLockerEditorMode.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_InteractionType = { "InteractionType", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorLockerEditorMode, InteractionType), Z_Construct_UEnum_ActorLocker_EActorLockerInteractionType, METADATA_PARAMS(Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_InteractionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_InteractionType_MetaData)) }; // 2904962982
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_OutlinerWidgetTypes_ElementProp = { "OutlinerWidgetTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_OutlinerWidgetTypes_MetaData[] = {
		{ "Category", "Actor Locker Editor Mode" },
		{ "ModuleRelativePath", "Public/ActorLockerEditorMode.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_OutlinerWidgetTypes = { "OutlinerWidgetTypes", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorLockerEditorMode, OutlinerWidgetTypes), METADATA_PARAMS(Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_OutlinerWidgetTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_OutlinerWidgetTypes_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_MenuWidgetTypes_ElementProp = { "MenuWidgetTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_MenuWidgetTypes_MetaData[] = {
		{ "Category", "Actor Locker Editor Mode" },
		{ "ModuleRelativePath", "Public/ActorLockerEditorMode.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_MenuWidgetTypes = { "MenuWidgetTypes", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorLockerEditorMode, MenuWidgetTypes), METADATA_PARAMS(Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_MenuWidgetTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_MenuWidgetTypes_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_LockerWidgetTypes_ElementProp = { "LockerWidgetTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_LockerWidgetTypes_MetaData[] = {
		{ "Category", "Actor Locker Editor Mode" },
		{ "ModuleRelativePath", "Public/ActorLockerEditorMode.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_LockerWidgetTypes = { "LockerWidgetTypes", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorLockerEditorMode, LockerWidgetTypes), METADATA_PARAMS(Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_LockerWidgetTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_LockerWidgetTypes_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_IgnoredWidgetTypes_ElementProp = { "IgnoredWidgetTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_IgnoredWidgetTypes_MetaData[] = {
		{ "Category", "Actor Locker Editor Mode" },
		{ "ModuleRelativePath", "Public/ActorLockerEditorMode.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_IgnoredWidgetTypes = { "IgnoredWidgetTypes", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorLockerEditorMode, IgnoredWidgetTypes), METADATA_PARAMS(Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_IgnoredWidgetTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_IgnoredWidgetTypes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorLockerEditorMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_InteractionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_InteractionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_OutlinerWidgetTypes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_OutlinerWidgetTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_MenuWidgetTypes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_MenuWidgetTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_LockerWidgetTypes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_LockerWidgetTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_IgnoredWidgetTypes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerEditorMode_Statics::NewProp_IgnoredWidgetTypes,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UActorLockerEditorMode_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULegacyEdModeViewportInterface_NoRegister, (int32)VTABLE_OFFSET(UActorLockerEditorMode, ILegacyEdModeViewportInterface), false },  // 3238461248
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorLockerEditorMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorLockerEditorMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorLockerEditorMode_Statics::ClassParams = {
		&UActorLockerEditorMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorLockerEditorMode_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerEditorMode_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorLockerEditorMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerEditorMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorLockerEditorMode()
	{
		if (!Z_Registration_Info_UClass_UActorLockerEditorMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorLockerEditorMode.OuterSingleton, Z_Construct_UClass_UActorLockerEditorMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorLockerEditorMode.OuterSingleton;
	}
	template<> ACTORLOCKER_API UClass* StaticClass<UActorLockerEditorMode>()
	{
		return UActorLockerEditorMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorLockerEditorMode);
	UActorLockerEditorMode::~UActorLockerEditorMode() {}
	struct Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerEditorMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerEditorMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorLockerEditorMode, UActorLockerEditorMode::StaticClass, TEXT("UActorLockerEditorMode"), &Z_Registration_Info_UClass_UActorLockerEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorLockerEditorMode), 353465330U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerEditorMode_h_707266845(TEXT("/Script/ActorLocker"),
		Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerEditorMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerEditorMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
