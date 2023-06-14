// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorLockerManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorLockerManager;
#ifdef ACTORLOCKER_ActorLockerManager_generated_h
#error "ActorLockerManager.generated.h already included, missing '#pragma once' in ActorLockerManager.h"
#endif
#define ACTORLOCKER_ActorLockerManager_generated_h

#define FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_20_SPARSE_DATA
#define FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActorDeleted); \
	DECLARE_FUNCTION(execUpdateTagState); \
	DECLARE_FUNCTION(execGetActorLockerManager); \
	DECLARE_FUNCTION(execGetLockedActors); \
	DECLARE_FUNCTION(execIsActorLocked); \
	DECLARE_FUNCTION(execToggleLockedActors); \
	DECLARE_FUNCTION(execSetLockActor);


#define FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActorDeleted); \
	DECLARE_FUNCTION(execUpdateTagState); \
	DECLARE_FUNCTION(execGetActorLockerManager); \
	DECLARE_FUNCTION(execGetLockedActors); \
	DECLARE_FUNCTION(execIsActorLocked); \
	DECLARE_FUNCTION(execToggleLockedActors); \
	DECLARE_FUNCTION(execSetLockActor);


#define FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_20_ACCESSORS
#define FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_20_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UActorLockerManager, NO_API)


#define FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorLockerManager(); \
	friend struct Z_Construct_UClass_UActorLockerManager_Statics; \
public: \
	DECLARE_CLASS(UActorLockerManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorLocker"), NO_API) \
	DECLARE_SERIALIZER(UActorLockerManager) \
	FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_20_ARCHIVESERIALIZER


#define FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUActorLockerManager(); \
	friend struct Z_Construct_UClass_UActorLockerManager_Statics; \
public: \
	DECLARE_CLASS(UActorLockerManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorLocker"), NO_API) \
	DECLARE_SERIALIZER(UActorLockerManager) \
	FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_20_ARCHIVESERIALIZER


#define FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorLockerManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorLockerManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorLockerManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorLockerManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorLockerManager(UActorLockerManager&&); \
	NO_API UActorLockerManager(const UActorLockerManager&); \
public: \
	NO_API virtual ~UActorLockerManager();


#define FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorLockerManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorLockerManager(UActorLockerManager&&); \
	NO_API UActorLockerManager(const UActorLockerManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorLockerManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorLockerManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorLockerManager) \
	NO_API virtual ~UActorLockerManager();


#define FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_17_PROLOG
#define FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_20_SPARSE_DATA \
	FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_20_RPC_WRAPPERS \
	FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_20_ACCESSORS \
	FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_20_INCLASS \
	FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_20_SPARSE_DATA \
	FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_20_ACCESSORS \
	FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_20_INCLASS_NO_PURE_DECLS \
	FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTORLOCKER_API UClass* StaticClass<class UActorLockerManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
