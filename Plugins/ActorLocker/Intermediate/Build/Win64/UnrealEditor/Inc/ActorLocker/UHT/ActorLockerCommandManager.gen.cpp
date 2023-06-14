// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorLocker/Public/ActorLockerCommandManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorLockerCommandManager() {}
// Cross Module References
	ACTORLOCKER_API UClass* Z_Construct_UClass_UActorLockerCommandManager();
	ACTORLOCKER_API UClass* Z_Construct_UClass_UActorLockerCommandManager_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ActorLocker();
// End Cross Module References
	DEFINE_FUNCTION(UActorLockerCommandManager::execCanToggleLockedObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UActorLockerCommandManager::CanToggleLockedObjects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorLockerCommandManager::execCanUnlockAllObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UActorLockerCommandManager::CanUnlockAllObjects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorLockerCommandManager::execCanLockAllObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UActorLockerCommandManager::CanLockAllObjects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorLockerCommandManager::execCanUnlockObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UActorLockerCommandManager::CanUnlockObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorLockerCommandManager::execCanLockObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UActorLockerCommandManager::CanLockObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorLockerCommandManager::execToggleLockedObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UActorLockerCommandManager::ToggleLockedObjects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorLockerCommandManager::execUnlockAllObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UActorLockerCommandManager::UnlockAllObjects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorLockerCommandManager::execLockAllObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UActorLockerCommandManager::LockAllObjects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorLockerCommandManager::execUnlockObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UActorLockerCommandManager::UnlockObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorLockerCommandManager::execLockObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UActorLockerCommandManager::LockObject();
		P_NATIVE_END;
	}
	void UActorLockerCommandManager::StaticRegisterNativesUActorLockerCommandManager()
	{
		UClass* Class = UActorLockerCommandManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanLockAllObjects", &UActorLockerCommandManager::execCanLockAllObjects },
			{ "CanLockObject", &UActorLockerCommandManager::execCanLockObject },
			{ "CanToggleLockedObjects", &UActorLockerCommandManager::execCanToggleLockedObjects },
			{ "CanUnlockAllObjects", &UActorLockerCommandManager::execCanUnlockAllObjects },
			{ "CanUnlockObject", &UActorLockerCommandManager::execCanUnlockObject },
			{ "LockAllObjects", &UActorLockerCommandManager::execLockAllObjects },
			{ "LockObject", &UActorLockerCommandManager::execLockObject },
			{ "ToggleLockedObjects", &UActorLockerCommandManager::execToggleLockedObjects },
			{ "UnlockAllObjects", &UActorLockerCommandManager::execUnlockAllObjects },
			{ "UnlockObject", &UActorLockerCommandManager::execUnlockObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActorLockerCommandManager_CanLockAllObjects_Statics
	{
		struct ActorLockerCommandManager_eventCanLockAllObjects_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorLockerCommandManager_CanLockAllObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActorLockerCommandManager_eventCanLockAllObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorLockerCommandManager_CanLockAllObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ActorLockerCommandManager_eventCanLockAllObjects_Parms), &Z_Construct_UFunction_UActorLockerCommandManager_CanLockAllObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorLockerCommandManager_CanLockAllObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorLockerCommandManager_CanLockAllObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorLockerCommandManager_CanLockAllObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor Locker Command Manager" },
		{ "ModuleRelativePath", "Public/ActorLockerCommandManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorLockerCommandManager_CanLockAllObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorLockerCommandManager, nullptr, "CanLockAllObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorLockerCommandManager_CanLockAllObjects_Statics::ActorLockerCommandManager_eventCanLockAllObjects_Parms), Z_Construct_UFunction_UActorLockerCommandManager_CanLockAllObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerCommandManager_CanLockAllObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorLockerCommandManager_CanLockAllObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerCommandManager_CanLockAllObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorLockerCommandManager_CanLockAllObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorLockerCommandManager_CanLockAllObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorLockerCommandManager_CanLockObject_Statics
	{
		struct ActorLockerCommandManager_eventCanLockObject_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorLockerCommandManager_CanLockObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActorLockerCommandManager_eventCanLockObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorLockerCommandManager_CanLockObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ActorLockerCommandManager_eventCanLockObject_Parms), &Z_Construct_UFunction_UActorLockerCommandManager_CanLockObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorLockerCommandManager_CanLockObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorLockerCommandManager_CanLockObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorLockerCommandManager_CanLockObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor Locker Command Manager" },
		{ "ModuleRelativePath", "Public/ActorLockerCommandManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorLockerCommandManager_CanLockObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorLockerCommandManager, nullptr, "CanLockObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorLockerCommandManager_CanLockObject_Statics::ActorLockerCommandManager_eventCanLockObject_Parms), Z_Construct_UFunction_UActorLockerCommandManager_CanLockObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerCommandManager_CanLockObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorLockerCommandManager_CanLockObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerCommandManager_CanLockObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorLockerCommandManager_CanLockObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorLockerCommandManager_CanLockObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorLockerCommandManager_CanToggleLockedObjects_Statics
	{
		struct ActorLockerCommandManager_eventCanToggleLockedObjects_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorLockerCommandManager_CanToggleLockedObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActorLockerCommandManager_eventCanToggleLockedObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorLockerCommandManager_CanToggleLockedObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ActorLockerCommandManager_eventCanToggleLockedObjects_Parms), &Z_Construct_UFunction_UActorLockerCommandManager_CanToggleLockedObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorLockerCommandManager_CanToggleLockedObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorLockerCommandManager_CanToggleLockedObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorLockerCommandManager_CanToggleLockedObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor Locker Command Manager" },
		{ "ModuleRelativePath", "Public/ActorLockerCommandManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorLockerCommandManager_CanToggleLockedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorLockerCommandManager, nullptr, "CanToggleLockedObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorLockerCommandManager_CanToggleLockedObjects_Statics::ActorLockerCommandManager_eventCanToggleLockedObjects_Parms), Z_Construct_UFunction_UActorLockerCommandManager_CanToggleLockedObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerCommandManager_CanToggleLockedObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorLockerCommandManager_CanToggleLockedObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerCommandManager_CanToggleLockedObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorLockerCommandManager_CanToggleLockedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorLockerCommandManager_CanToggleLockedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockAllObjects_Statics
	{
		struct ActorLockerCommandManager_eventCanUnlockAllObjects_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockAllObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActorLockerCommandManager_eventCanUnlockAllObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockAllObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ActorLockerCommandManager_eventCanUnlockAllObjects_Parms), &Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockAllObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockAllObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockAllObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockAllObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor Locker Command Manager" },
		{ "ModuleRelativePath", "Public/ActorLockerCommandManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockAllObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorLockerCommandManager, nullptr, "CanUnlockAllObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockAllObjects_Statics::ActorLockerCommandManager_eventCanUnlockAllObjects_Parms), Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockAllObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockAllObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockAllObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockAllObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockAllObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockAllObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockObject_Statics
	{
		struct ActorLockerCommandManager_eventCanUnlockObject_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActorLockerCommandManager_eventCanUnlockObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ActorLockerCommandManager_eventCanUnlockObject_Parms), &Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor Locker Command Manager" },
		{ "ModuleRelativePath", "Public/ActorLockerCommandManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorLockerCommandManager, nullptr, "CanUnlockObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockObject_Statics::ActorLockerCommandManager_eventCanUnlockObject_Parms), Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorLockerCommandManager_LockAllObjects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorLockerCommandManager_LockAllObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor Locker Command Manager" },
		{ "ModuleRelativePath", "Public/ActorLockerCommandManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorLockerCommandManager_LockAllObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorLockerCommandManager, nullptr, "LockAllObjects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorLockerCommandManager_LockAllObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerCommandManager_LockAllObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorLockerCommandManager_LockAllObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorLockerCommandManager_LockAllObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorLockerCommandManager_LockObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorLockerCommandManager_LockObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor Locker Command Manager" },
		{ "ModuleRelativePath", "Public/ActorLockerCommandManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorLockerCommandManager_LockObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorLockerCommandManager, nullptr, "LockObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorLockerCommandManager_LockObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerCommandManager_LockObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorLockerCommandManager_LockObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorLockerCommandManager_LockObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorLockerCommandManager_ToggleLockedObjects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorLockerCommandManager_ToggleLockedObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor Locker Command Manager" },
		{ "ModuleRelativePath", "Public/ActorLockerCommandManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorLockerCommandManager_ToggleLockedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorLockerCommandManager, nullptr, "ToggleLockedObjects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorLockerCommandManager_ToggleLockedObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerCommandManager_ToggleLockedObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorLockerCommandManager_ToggleLockedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorLockerCommandManager_ToggleLockedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorLockerCommandManager_UnlockAllObjects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorLockerCommandManager_UnlockAllObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor Locker Command Manager" },
		{ "ModuleRelativePath", "Public/ActorLockerCommandManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorLockerCommandManager_UnlockAllObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorLockerCommandManager, nullptr, "UnlockAllObjects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorLockerCommandManager_UnlockAllObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerCommandManager_UnlockAllObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorLockerCommandManager_UnlockAllObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorLockerCommandManager_UnlockAllObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorLockerCommandManager_UnlockObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorLockerCommandManager_UnlockObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor Locker Command Manager" },
		{ "ModuleRelativePath", "Public/ActorLockerCommandManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorLockerCommandManager_UnlockObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorLockerCommandManager, nullptr, "UnlockObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorLockerCommandManager_UnlockObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorLockerCommandManager_UnlockObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorLockerCommandManager_UnlockObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorLockerCommandManager_UnlockObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorLockerCommandManager);
	UClass* Z_Construct_UClass_UActorLockerCommandManager_NoRegister()
	{
		return UActorLockerCommandManager::StaticClass();
	}
	struct Z_Construct_UClass_UActorLockerCommandManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorLockerCommandManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ActorLocker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActorLockerCommandManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorLockerCommandManager_CanLockAllObjects, "CanLockAllObjects" }, // 1455969757
		{ &Z_Construct_UFunction_UActorLockerCommandManager_CanLockObject, "CanLockObject" }, // 2716789469
		{ &Z_Construct_UFunction_UActorLockerCommandManager_CanToggleLockedObjects, "CanToggleLockedObjects" }, // 2503316707
		{ &Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockAllObjects, "CanUnlockAllObjects" }, // 1870845508
		{ &Z_Construct_UFunction_UActorLockerCommandManager_CanUnlockObject, "CanUnlockObject" }, // 3297634288
		{ &Z_Construct_UFunction_UActorLockerCommandManager_LockAllObjects, "LockAllObjects" }, // 2453764849
		{ &Z_Construct_UFunction_UActorLockerCommandManager_LockObject, "LockObject" }, // 91187438
		{ &Z_Construct_UFunction_UActorLockerCommandManager_ToggleLockedObjects, "ToggleLockedObjects" }, // 2806501721
		{ &Z_Construct_UFunction_UActorLockerCommandManager_UnlockAllObjects, "UnlockAllObjects" }, // 3140534337
		{ &Z_Construct_UFunction_UActorLockerCommandManager_UnlockObject, "UnlockObject" }, // 352195890
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorLockerCommandManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ActorLockerCommandManager.h" },
		{ "ModuleRelativePath", "Public/ActorLockerCommandManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorLockerCommandManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorLockerCommandManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorLockerCommandManager_Statics::ClassParams = {
		&UActorLockerCommandManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorLockerCommandManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorLockerCommandManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorLockerCommandManager()
	{
		if (!Z_Registration_Info_UClass_UActorLockerCommandManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorLockerCommandManager.OuterSingleton, Z_Construct_UClass_UActorLockerCommandManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorLockerCommandManager.OuterSingleton;
	}
	template<> ACTORLOCKER_API UClass* StaticClass<UActorLockerCommandManager>()
	{
		return UActorLockerCommandManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorLockerCommandManager);
	UActorLockerCommandManager::~UActorLockerCommandManager() {}
	struct Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerCommandManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerCommandManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorLockerCommandManager, UActorLockerCommandManager::StaticClass, TEXT("UActorLockerCommandManager"), &Z_Registration_Info_UClass_UActorLockerCommandManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorLockerCommandManager), 3361852038U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerCommandManager_h_1997042177(TEXT("/Script/ActorLocker"),
		Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerCommandManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerCommandManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
