// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorLockerTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTORLOCKER_ActorLockerTypes_generated_h
#error "ActorLockerTypes.generated.h already included, missing '#pragma once' in ActorLockerTypes.h"
#endif
#define ACTORLOCKER_ActorLockerTypes_generated_h

#define FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerTypes_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLockerTreeItem_Statics; \
	ACTORLOCKER_API static class UScriptStruct* StaticStruct();


template<> ACTORLOCKER_API UScriptStruct* StaticStruct<struct FLockerTreeItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_UE_5_Packaged_ActorLocker_HostProject_Plugins_ActorLocker_Source_ActorLocker_Public_ActorLockerTypes_h


#define FOREACH_ENUM_EACTORLOCKERINTERACTIONTYPE(op) \
	op(EActorLockerInteractionType::None) \
	op(EActorLockerInteractionType::Outliner) \
	op(EActorLockerInteractionType::Ignored) 

enum class EActorLockerInteractionType : uint8;
template<> struct TIsUEnumClass<EActorLockerInteractionType> { enum { Value = true }; };
template<> ACTORLOCKER_API UEnum* StaticEnum<EActorLockerInteractionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
