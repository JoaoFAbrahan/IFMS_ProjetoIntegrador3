// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorLocker/Public/ActorLockerSettings.h"
#include "Slate/Public/Framework/Commands/InputChord.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorLockerSettings() {}
// Cross Module References
	ACTORLOCKER_API UClass* Z_Construct_UClass_UActorLockerSettings();
	ACTORLOCKER_API UClass* Z_Construct_UClass_UActorLockerSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	UPackage* Z_Construct_UPackage__Script_ActorLocker();
// End Cross Module References
	void UActorLockerSettings::StaticRegisterNativesUActorLockerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorLockerSettings);
	UClass* Z_Construct_UClass_UActorLockerSettings_NoRegister()
	{
		return UActorLockerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UActorLockerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeselectActorOnLock_MetaData[];
#endif
		static void NewProp_bDeselectActorOnLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeselectActorOnLock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveLockedState_MetaData[];
#endif
		static void NewProp_bSaveLockedState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveLockedState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockedTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LockedTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LockObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnlockObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnlockObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockAllObjects_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LockAllObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnlockAllObjects_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnlockAllObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToggleLockedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ToggleLockedObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectLockedActorsInOutliner_MetaData[];
#endif
		static void NewProp_bSelectLockedActorsInOutliner_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectLockedActorsInOutliner;
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorLockerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ActorLocker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorLockerSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ActorLockerSettings.h" },
		{ "ModuleRelativePath", "Public/ActorLockerSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_bDeselectActorOnLock_MetaData[] = {
		{ "Category", "Actor Locker | General" },
		{ "ModuleRelativePath", "Public/ActorLockerSettings.h" },
	};
#endif
	void Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_bDeselectActorOnLock_SetBit(void* Obj)
	{
		((UActorLockerSettings*)Obj)->bDeselectActorOnLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_bDeselectActorOnLock = { "bDeselectActorOnLock", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UActorLockerSettings), &Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_bDeselectActorOnLock_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_bDeselectActorOnLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_bDeselectActorOnLock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_bSaveLockedState_MetaData[] = {
		{ "Category", "Actor Locker | General" },
		{ "Comment", "// if true the locked actors will be marked by a tag\n" },
		{ "ModuleRelativePath", "Public/ActorLockerSettings.h" },
		{ "ToolTip", "if true the locked actors will be marked by a tag" },
	};
#endif
	void Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_bSaveLockedState_SetBit(void* Obj)
	{
		((UActorLockerSettings*)Obj)->bSaveLockedState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_bSaveLockedState = { "bSaveLockedState", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UActorLockerSettings), &Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_bSaveLockedState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_bSaveLockedState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_bSaveLockedState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_LockedTag_MetaData[] = {
		{ "Category", "Actor Locker | General" },
		{ "EditCondition", "bSaveLockedState" },
		{ "ModuleRelativePath", "Public/ActorLockerSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_LockedTag = { "LockedTag", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorLockerSettings, LockedTag), METADATA_PARAMS(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_LockedTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_LockedTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_LockObject_MetaData[] = {
		{ "Category", "Actor Locker | Hotkeys" },
		{ "ModuleRelativePath", "Public/ActorLockerSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_LockObject = { "LockObject", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorLockerSettings, LockObject), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_LockObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_LockObject_MetaData)) }; // 2392822822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_UnlockObject_MetaData[] = {
		{ "Category", "Actor Locker | Hotkeys" },
		{ "ModuleRelativePath", "Public/ActorLockerSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_UnlockObject = { "UnlockObject", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorLockerSettings, UnlockObject), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_UnlockObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_UnlockObject_MetaData)) }; // 2392822822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_LockAllObjects_MetaData[] = {
		{ "Category", "Actor Locker | Hotkeys" },
		{ "ModuleRelativePath", "Public/ActorLockerSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_LockAllObjects = { "LockAllObjects", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorLockerSettings, LockAllObjects), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_LockAllObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_LockAllObjects_MetaData)) }; // 2392822822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_UnlockAllObjects_MetaData[] = {
		{ "Category", "Actor Locker | Hotkeys" },
		{ "ModuleRelativePath", "Public/ActorLockerSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_UnlockAllObjects = { "UnlockAllObjects", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorLockerSettings, UnlockAllObjects), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_UnlockAllObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_UnlockAllObjects_MetaData)) }; // 2392822822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_ToggleLockedObjects_MetaData[] = {
		{ "Category", "Actor Locker | Hotkeys" },
		{ "ModuleRelativePath", "Public/ActorLockerSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_ToggleLockedObjects = { "ToggleLockedObjects", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorLockerSettings, ToggleLockedObjects), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_ToggleLockedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_ToggleLockedObjects_MetaData)) }; // 2392822822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_bSelectLockedActorsInOutliner_MetaData[] = {
		{ "Category", "Actor Locker | Editor Mode" },
		{ "ModuleRelativePath", "Public/ActorLockerSettings.h" },
	};
#endif
	void Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_bSelectLockedActorsInOutliner_SetBit(void* Obj)
	{
		((UActorLockerSettings*)Obj)->bSelectLockedActorsInOutliner = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_bSelectLockedActorsInOutliner = { "bSelectLockedActorsInOutliner", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UActorLockerSettings), &Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_bSelectLockedActorsInOutliner_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_bSelectLockedActorsInOutliner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_bSelectLockedActorsInOutliner_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_OutlinerWidgetTypes_ElementProp = { "OutlinerWidgetTypes", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_OutlinerWidgetTypes_MetaData[] = {
		{ "Category", "Actor Locker Editor Mode" },
		{ "ModuleRelativePath", "Public/ActorLockerSettings.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_OutlinerWidgetTypes = { "OutlinerWidgetTypes", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorLockerSettings, OutlinerWidgetTypes), METADATA_PARAMS(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_OutlinerWidgetTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_OutlinerWidgetTypes_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_MenuWidgetTypes_ElementProp = { "MenuWidgetTypes", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_MenuWidgetTypes_MetaData[] = {
		{ "Category", "Actor Locker Editor Mode" },
		{ "ModuleRelativePath", "Public/ActorLockerSettings.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_MenuWidgetTypes = { "MenuWidgetTypes", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorLockerSettings, MenuWidgetTypes), METADATA_PARAMS(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_MenuWidgetTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_MenuWidgetTypes_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_LockerWidgetTypes_ElementProp = { "LockerWidgetTypes", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_LockerWidgetTypes_MetaData[] = {
		{ "Category", "Actor Locker Editor Mode" },
		{ "ModuleRelativePath", "Public/ActorLockerSettings.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_LockerWidgetTypes = { "LockerWidgetTypes", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorLockerSettings, LockerWidgetTypes), METADATA_PARAMS(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_LockerWidgetTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_LockerWidgetTypes_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_IgnoredWidgetTypes_ElementProp = { "IgnoredWidgetTypes", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_IgnoredWidgetTypes_MetaData[] = {
		{ "Category", "Actor Locker Editor Mode" },
		{ "ModuleRelativePath", "Public/ActorLockerSettings.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_IgnoredWidgetTypes = { "IgnoredWidgetTypes", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorLockerSettings, IgnoredWidgetTypes), METADATA_PARAMS(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_IgnoredWidgetTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_IgnoredWidgetTypes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorLockerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_bDeselectActorOnLock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_bSaveLockedState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_LockedTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_LockObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_UnlockObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_LockAllObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_UnlockAllObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_ToggleLockedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_bSelectLockedActorsInOutliner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_OutlinerWidgetTypes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_OutlinerWidgetTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_MenuWidgetTypes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_MenuWidgetTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_LockerWidgetTypes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_LockerWidgetTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_IgnoredWidgetTypes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerSettings_Statics::NewProp_IgnoredWidgetTypes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorLockerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorLockerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorLockerSettings_Statics::ClassParams = {
		&UActorLockerSettings::StaticClass,
		"ActorLockerSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorLockerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActorLockerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorLockerSettings()
	{
		if (!Z_Registration_Info_UClass_UActorLockerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorLockerSettings.OuterSingleton, Z_Construct_UClass_UActorLockerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorLockerSettings.OuterSingleton;
	}
	template<> ACTORLOCKER_API UClass* StaticClass<UActorLockerSettings>()
	{
		return UActorLockerSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorLockerSettings);
	UActorLockerSettings::~UActorLockerSettings() {}
	struct Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorLockerSettings, UActorLockerSettings::StaticClass, TEXT("UActorLockerSettings"), &Z_Registration_Info_UClass_UActorLockerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorLockerSettings), 3987373110U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerSettings_h_3206252007(TEXT("/Script/ActorLocker"),
		Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
