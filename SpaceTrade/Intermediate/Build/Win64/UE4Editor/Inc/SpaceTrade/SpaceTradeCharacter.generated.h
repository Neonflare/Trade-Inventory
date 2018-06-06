// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACETRADE_SpaceTradeCharacter_generated_h
#error "SpaceTradeCharacter.generated.h already included, missing '#pragma once' in SpaceTradeCharacter.h"
#endif
#define SPACETRADE_SpaceTradeCharacter_generated_h

#define SpaceTrade_Source_SpaceTrade_SpaceTradeCharacter_h_22_RPC_WRAPPERS
#define SpaceTrade_Source_SpaceTrade_SpaceTradeCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceTrade_Source_SpaceTrade_SpaceTradeCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpaceTradeCharacter(); \
	friend SPACETRADE_API class UClass* Z_Construct_UClass_ASpaceTradeCharacter(); \
public: \
	DECLARE_CLASS(ASpaceTradeCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SpaceTrade"), NO_API) \
	DECLARE_SERIALIZER(ASpaceTradeCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define SpaceTrade_Source_SpaceTrade_SpaceTradeCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesASpaceTradeCharacter(); \
	friend SPACETRADE_API class UClass* Z_Construct_UClass_ASpaceTradeCharacter(); \
public: \
	DECLARE_CLASS(ASpaceTradeCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SpaceTrade"), NO_API) \
	DECLARE_SERIALIZER(ASpaceTradeCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define SpaceTrade_Source_SpaceTrade_SpaceTradeCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpaceTradeCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpaceTradeCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpaceTradeCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceTradeCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpaceTradeCharacter(ASpaceTradeCharacter&&); \
	NO_API ASpaceTradeCharacter(const ASpaceTradeCharacter&); \
public:


#define SpaceTrade_Source_SpaceTrade_SpaceTradeCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpaceTradeCharacter(ASpaceTradeCharacter&&); \
	NO_API ASpaceTradeCharacter(const ASpaceTradeCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpaceTradeCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceTradeCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpaceTradeCharacter)


#define SpaceTrade_Source_SpaceTrade_SpaceTradeCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(ASpaceTradeCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ASpaceTradeCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__RunningAnimation() { return STRUCT_OFFSET(ASpaceTradeCharacter, RunningAnimation); } \
	FORCEINLINE static uint32 __PPO__IdleAnimation() { return STRUCT_OFFSET(ASpaceTradeCharacter, IdleAnimation); }


#define SpaceTrade_Source_SpaceTrade_SpaceTradeCharacter_h_19_PROLOG
#define SpaceTrade_Source_SpaceTrade_SpaceTradeCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceTrade_Source_SpaceTrade_SpaceTradeCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	SpaceTrade_Source_SpaceTrade_SpaceTradeCharacter_h_22_RPC_WRAPPERS \
	SpaceTrade_Source_SpaceTrade_SpaceTradeCharacter_h_22_INCLASS \
	SpaceTrade_Source_SpaceTrade_SpaceTradeCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceTrade_Source_SpaceTrade_SpaceTradeCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceTrade_Source_SpaceTrade_SpaceTradeCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	SpaceTrade_Source_SpaceTrade_SpaceTradeCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceTrade_Source_SpaceTrade_SpaceTradeCharacter_h_22_INCLASS_NO_PURE_DECLS \
	SpaceTrade_Source_SpaceTrade_SpaceTradeCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceTrade_Source_SpaceTrade_SpaceTradeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
