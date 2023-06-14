// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorLocker/Public/ActorLockerManager.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorLockerManager() {}
// Cross Module References
	ACTORLOCKER_API UClass* Z_Construct_UClass_UActorLockerManager();
	ACTORLOCKER_API UClass* Z_Construct_UClass_UActorLockerManager_NoRegister();
	ACTORLOCKER_API UClass* Z_Construct_UClass_UActorLockerSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ActorLocker();
// End Cross Module References
	DEFINE_FUNCTION(UActorLockerManager::execOnActorDeleted)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorDeleted(Z_Param_InActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorLockerManager::execUpdateTagState)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_UBOOL(Z_Param_bInLock);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTagState(Z_Param_Actor,Z_Param_bInLock);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorLockerManager::execGetActorLockerManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActorLockerManager**)Z_Param__Result=UActorLockerManager::GetActorLockerManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorLockerManager::execGetLockedActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<AActor*>*)Z_Param__Result=P_THIS->GetLockedActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorLockerManager::execIsActorLocked)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActorLocked(Z_Param_InActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorLockerManager::execToggleLockedActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleLockedActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorLockerManager::execSetLockActor)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_UBOOL(Z_Param_bInLock);
		P_GET_UBOOL(Z_Param_bPropagateToChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLockActor(Z_Param_InActor,Z_Param_bInLock,Z_Param_bPropagateToChildren);
		P_NATIVE_END;
	}
	void UActorLockerManager::StaticRegisterNativesUActorLockerManager()
	{
		UClass* Class = UActorLockerManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorLockerManager", &UActorLockerManager::execGetActorLockerManager },
			{ "GetLockedActors", &UActorLockerManager::execGetLockedActors },
			{ "IsActorLocked", &UActorLockerManager::execIsActorLocked },
			{ "OnActorDeleted", &UActorLockerManager::execOnActorDeleted },
			{ "SetLockActor", &UActorLockerManager::execSetLockActor },
			{ "ToggleLockedActors", &UActorLockerManager::execToggleLockedActors },
			{ "UpdateTagState", &UActorLockerManager::execUpdateTagState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActorLockerManager_GetActorLockerManager_Statics
	{
		struct ActorLockerManager_eventGetActorLockerManager_Parms
		{
			UActorLockerManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorLockerManager_GetActorLockerManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorLockerManager_eventGetActorLockerManager_Parms, ReturnValue), Z_Construct_UClass_UActorLockerManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorLockerManager_GetActorLockerManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorLockerManager_GetActorLockerManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorLockerManager_GetActorLockerManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor Locker Manager" },
		{ "ModuleRelativePath", "Public/ActorLockerManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorLockerManager_GetActorLockerManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorLockerManager, nullptr, "GetActorLockerManager", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorLockerManager_GetActorLockerManager_Statics::ActorLockerManager_eventGetActorLockerManager_Parms), Z_Construct_UFunction_UActorLockerManager_GetActorLockerManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerManager_GetActorLockerManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorLockerManager_GetActorLockerManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerManager_GetActorLockerManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorLockerManager_GetActorLockerManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorLockerManager_GetActorLockerManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorLockerManager_GetLockedActors_Statics
	{
		struct ActorLockerManager_eventGetLockedActors_Parms
		{
			TSet<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorLockerManager_GetLockedActors_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UActorLockerManager_GetLockedActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorLockerManager_eventGetLockedActors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorLockerManager_GetLockedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorLockerManager_GetLockedActors_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorLockerManager_GetLockedActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorLockerManager_GetLockedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor Locker Manager" },
		{ "ModuleRelativePath", "Public/ActorLockerManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorLockerManager_GetLockedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorLockerManager, nullptr, "GetLockedActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorLockerManager_GetLockedActors_Statics::ActorLockerManager_eventGetLockedActors_Parms), Z_Construct_UFunction_UActorLockerManager_GetLockedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerManager_GetLockedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorLockerManager_GetLockedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerManager_GetLockedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorLockerManager_GetLockedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorLockerManager_GetLockedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorLockerManager_IsActorLocked_Statics
	{
		struct ActorLockerManager_eventIsActorLocked_Parms
		{
			const AActor* InActor;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorLockerManager_IsActorLocked_Statics::NewProp_InActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorLockerManager_IsActorLocked_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorLockerManager_eventIsActorLocked_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorLockerManager_IsActorLocked_Statics::NewProp_InActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerManager_IsActorLocked_Statics::NewProp_InActor_MetaData)) };
	void Z_Construct_UFunction_UActorLockerManager_IsActorLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActorLockerManager_eventIsActorLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorLockerManager_IsActorLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ActorLockerManager_eventIsActorLocked_Parms), &Z_Construct_UFunction_UActorLockerManager_IsActorLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorLockerManager_IsActorLocked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorLockerManager_IsActorLocked_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorLockerManager_IsActorLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorLockerManager_IsActorLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor Locker Manager" },
		{ "ModuleRelativePath", "Public/ActorLockerManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorLockerManager_IsActorLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorLockerManager, nullptr, "IsActorLocked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorLockerManager_IsActorLocked_Statics::ActorLockerManager_eventIsActorLocked_Parms), Z_Construct_UFunction_UActorLockerManager_IsActorLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerManager_IsActorLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorLockerManager_IsActorLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerManager_IsActorLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorLockerManager_IsActorLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorLockerManager_IsActorLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorLockerManager_OnActorDeleted_Statics
	{
		struct ActorLockerManager_eventOnActorDeleted_Parms
		{
			AActor* InActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorLockerManager_OnActorDeleted_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorLockerManager_eventOnActorDeleted_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorLockerManager_OnActorDeleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorLockerManager_OnActorDeleted_Statics::NewProp_InActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorLockerManager_OnActorDeleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorLockerManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorLockerManager_OnActorDeleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorLockerManager, nullptr, "OnActorDeleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorLockerManager_OnActorDeleted_Statics::ActorLockerManager_eventOnActorDeleted_Parms), Z_Construct_UFunction_UActorLockerManager_OnActorDeleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerManager_OnActorDeleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorLockerManager_OnActorDeleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerManager_OnActorDeleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorLockerManager_OnActorDeleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorLockerManager_OnActorDeleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics
	{
		struct ActorLockerManager_eventSetLockActor_Parms
		{
			AActor* InActor;
			bool bInLock;
			bool bPropagateToChildren;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInLock_MetaData[];
#endif
		static void NewProp_bInLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInLock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[];
#endif
		static void NewProp_bPropagateToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorLockerManager_eventSetLockActor_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics::NewProp_bInLock_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics::NewProp_bInLock_SetBit(void* Obj)
	{
		((ActorLockerManager_eventSetLockActor_Parms*)Obj)->bInLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics::NewProp_bInLock = { "bInLock", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ActorLockerManager_eventSetLockActor_Parms), &Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics::NewProp_bInLock_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics::NewProp_bInLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics::NewProp_bInLock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((ActorLockerManager_eventSetLockActor_Parms*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ActorLockerManager_eventSetLockActor_Parms), &Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics::NewProp_bPropagateToChildren_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics::NewProp_bInLock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics::NewProp_bPropagateToChildren,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor Locker Manager" },
		{ "CPP_Default_bPropagateToChildren", "true" },
		{ "ModuleRelativePath", "Public/ActorLockerManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorLockerManager, nullptr, "SetLockActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics::ActorLockerManager_eventSetLockActor_Parms), Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorLockerManager_SetLockActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorLockerManager_SetLockActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorLockerManager_ToggleLockedActors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorLockerManager_ToggleLockedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor Locker Manager" },
		{ "Comment", "// Toggling lock state for locked actors (useful for quick change for locked actors)\n" },
		{ "ModuleRelativePath", "Public/ActorLockerManager.h" },
		{ "ToolTip", "Toggling lock state for locked actors (useful for quick change for locked actors)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorLockerManager_ToggleLockedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorLockerManager, nullptr, "ToggleLockedActors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorLockerManager_ToggleLockedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerManager_ToggleLockedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorLockerManager_ToggleLockedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorLockerManager_ToggleLockedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorLockerManager_UpdateTagState_Statics
	{
		struct ActorLockerManager_eventUpdateTagState_Parms
		{
			AActor* Actor;
			bool bInLock;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_bInLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInLock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorLockerManager_UpdateTagState_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorLockerManager_eventUpdateTagState_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActorLockerManager_UpdateTagState_Statics::NewProp_bInLock_SetBit(void* Obj)
	{
		((ActorLockerManager_eventUpdateTagState_Parms*)Obj)->bInLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorLockerManager_UpdateTagState_Statics::NewProp_bInLock = { "bInLock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ActorLockerManager_eventUpdateTagState_Parms), &Z_Construct_UFunction_UActorLockerManager_UpdateTagState_Statics::NewProp_bInLock_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorLockerManager_UpdateTagState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorLockerManager_UpdateTagState_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorLockerManager_UpdateTagState_Statics::NewProp_bInLock,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorLockerManager_UpdateTagState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor Locker Manager" },
		{ "ModuleRelativePath", "Public/ActorLockerManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorLockerManager_UpdateTagState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorLockerManager, nullptr, "UpdateTagState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorLockerManager_UpdateTagState_Statics::ActorLockerManager_eventUpdateTagState_Parms), Z_Construct_UFunction_UActorLockerManager_UpdateTagState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerManager_UpdateTagState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorLockerManager_UpdateTagState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerManager_UpdateTagState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorLockerManager_UpdateTagState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorLockerManager_UpdateTagState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorLockerManager);
	UClass* Z_Construct_UClass_UActorLockerManager_NoRegister()
	{
		return UActorLockerManager::StaticClass();
	}
	struct Z_Construct_UClass_UActorLockerManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorLockerManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ActorLocker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActorLockerManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorLockerManager_GetActorLockerManager, "GetActorLockerManager" }, // 3773745331
		{ &Z_Construct_UFunction_UActorLockerManager_GetLockedActors, "GetLockedActors" }, // 272678507
		{ &Z_Construct_UFunction_UActorLockerManager_IsActorLocked, "IsActorLocked" }, // 272633481
		{ &Z_Construct_UFunction_UActorLockerManager_OnActorDeleted, "OnActorDeleted" }, // 565771627
		{ &Z_Construct_UFunction_UActorLockerManager_SetLockActor, "SetLockActor" }, // 4217601517
		{ &Z_Construct_UFunction_UActorLockerManager_ToggleLockedActors, "ToggleLockedActors" }, // 4073370286
		{ &Z_Construct_UFunction_UActorLockerManager_UpdateTagState, "UpdateTagState" }, // 3989918750
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorLockerManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ActorLockerManager.h" },
		{ "ModuleRelativePath", "Public/ActorLockerManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorLockerManager_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Actor Locker Manager" },
		{ "ModuleRelativePath", "Public/ActorLockerManager.h" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorLockerManager_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorLockerManager, Settings), Z_Construct_UClass_UActorLockerSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorLockerManager_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerManager_Statics::NewProp_Settings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorLockerManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorLockerManager_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorLockerManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorLockerManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorLockerManager_Statics::ClassParams = {
		&UActorLockerManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActorLockerManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorLockerManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorLockerManager()
	{
		if (!Z_Registration_Info_UClass_UActorLockerManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorLockerManager.OuterSingleton, Z_Construct_UClass_UActorLockerManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorLockerManager.OuterSingleton;
	}
	template<> ACTORLOCKER_API UClass* StaticClass<UActorLockerManager>()
	{
		return UActorLockerManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorLockerManager);
	UActorLockerManager::~UActorLockerManager() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UActorLockerManager)
	struct Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorLockerManager, UActorLockerManager::StaticClass, TEXT("UActorLockerManager"), &Z_Registration_Info_UClass_UActorLockerManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorLockerManager), 2548599314U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_4198199405(TEXT("/Script/ActorLocker"),
		Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
