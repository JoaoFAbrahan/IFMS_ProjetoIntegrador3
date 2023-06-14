// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorLocker/Public/ActorLockerTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorLockerTypes() {}
// Cross Module References
	ACTORLOCKER_API UEnum* Z_Construct_UEnum_ActorLocker_EActorLockerInteractionType();
	ACTORLOCKER_API UScriptStruct* Z_Construct_UScriptStruct_FLockerTreeItem();
	UPackage* Z_Construct_UPackage__Script_ActorLocker();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LockerTreeItem;
class UScriptStruct* FLockerTreeItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LockerTreeItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LockerTreeItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLockerTreeItem, Z_Construct_UPackage__Script_ActorLocker(), TEXT("LockerTreeItem"));
	}
	return Z_Registration_Info_UScriptStruct_LockerTreeItem.OuterSingleton;
}
template<> ACTORLOCKER_API UScriptStruct* StaticStruct<FLockerTreeItem>()
{
	return FLockerTreeItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLockerTreeItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[];
#endif
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLockerTreeItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ActorLockerTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLockerTreeItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLockerTreeItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLockerTreeItem_Statics::NewProp_bLocked_MetaData[] = {
		{ "Category", "Locker Tree Item" },
		{ "ModuleRelativePath", "Public/ActorLockerTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLockerTreeItem_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((FLockerTreeItem*)Obj)->bLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLockerTreeItem_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLockerTreeItem), &Z_Construct_UScriptStruct_FLockerTreeItem_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLockerTreeItem_Statics::NewProp_bLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLockerTreeItem_Statics::NewProp_bLocked_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLockerTreeItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLockerTreeItem_Statics::NewProp_bLocked,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLockerTreeItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActorLocker,
		nullptr,
		&NewStructOps,
		"LockerTreeItem",
		sizeof(FLockerTreeItem),
		alignof(FLockerTreeItem),
		Z_Construct_UScriptStruct_FLockerTreeItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLockerTreeItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLockerTreeItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLockerTreeItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLockerTreeItem()
	{
		if (!Z_Registration_Info_UScriptStruct_LockerTreeItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LockerTreeItem.InnerSingleton, Z_Construct_UScriptStruct_FLockerTreeItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LockerTreeItem.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EActorLockerInteractionType;
	static UEnum* EActorLockerInteractionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EActorLockerInteractionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EActorLockerInteractionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ActorLocker_EActorLockerInteractionType, Z_Construct_UPackage__Script_ActorLocker(), TEXT("EActorLockerInteractionType"));
		}
		return Z_Registration_Info_UEnum_EActorLockerInteractionType.OuterSingleton;
	}
	template<> ACTORLOCKER_API UEnum* StaticEnum<EActorLockerInteractionType>()
	{
		return EActorLockerInteractionType_StaticEnum();
	}
	struct Z_Construct_UEnum_ActorLocker_EActorLockerInteractionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ActorLocker_EActorLockerInteractionType_Statics::Enumerators[] = {
		{ "EActorLockerInteractionType::None", (int64)EActorLockerInteractionType::None },
		{ "EActorLockerInteractionType::Outliner", (int64)EActorLockerInteractionType::Outliner },
		{ "EActorLockerInteractionType::Ignored", (int64)EActorLockerInteractionType::Ignored },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ActorLocker_EActorLockerInteractionType_Statics::Enum_MetaDataParams[] = {
		{ "Ignored.Name", "EActorLockerInteractionType::Ignored" },
		{ "ModuleRelativePath", "Public/ActorLockerTypes.h" },
		{ "None.Name", "EActorLockerInteractionType::None" },
		{ "Outliner.Name", "EActorLockerInteractionType::Outliner" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ActorLocker_EActorLockerInteractionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ActorLocker,
		nullptr,
		"EActorLockerInteractionType",
		"EActorLockerInteractionType",
		Z_Construct_UEnum_ActorLocker_EActorLockerInteractionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ActorLocker_EActorLockerInteractionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ActorLocker_EActorLockerInteractionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ActorLocker_EActorLockerInteractionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ActorLocker_EActorLockerInteractionType()
	{
		if (!Z_Registration_Info_UEnum_EActorLockerInteractionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EActorLockerInteractionType.InnerSingleton, Z_Construct_UEnum_ActorLocker_EActorLockerInteractionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EActorLockerInteractionType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerTypes_h_Statics::EnumInfo[] = {
		{ EActorLockerInteractionType_StaticEnum, TEXT("EActorLockerInteractionType"), &Z_Registration_Info_UEnum_EActorLockerInteractionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2904962982U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerTypes_h_Statics::ScriptStructInfo[] = {
		{ FLockerTreeItem::StaticStruct, Z_Construct_UScriptStruct_FLockerTreeItem_Statics::NewStructOps, TEXT("LockerTreeItem"), &Z_Registration_Info_UScriptStruct_LockerTreeItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLockerTreeItem), 3859504169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerTypes_h_2349610679(TEXT("/Script/ActorLocker"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
