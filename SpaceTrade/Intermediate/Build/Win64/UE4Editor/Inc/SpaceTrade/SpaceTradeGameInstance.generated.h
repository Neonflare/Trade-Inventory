// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItemDatabase;
#ifdef SPACETRADE_SpaceTradeGameInstance_generated_h
#error "SpaceTradeGameInstance.generated.h already included, missing '#pragma once' in SpaceTradeGameInstance.h"
#endif
#define SPACETRADE_SpaceTradeGameInstance_generated_h

#define SpaceTrade_Source_SpaceTrade_SpaceTradeGameInstance_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDatabase) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UItemDatabase**)Z_Param__Result=this->GetDatabase(); \
		P_NATIVE_END; \
	}


#define SpaceTrade_Source_SpaceTrade_SpaceTradeGameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDatabase) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UItemDatabase**)Z_Param__Result=this->GetDatabase(); \
		P_NATIVE_END; \
	}


#define SpaceTrade_Source_SpaceTrade_SpaceTradeGameInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpaceTradeGameInstance(); \
	friend SPACETRADE_API class UClass* Z_Construct_UClass_USpaceTradeGameInstance(); \
public: \
	DECLARE_CLASS(USpaceTradeGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/SpaceTrade"), NO_API) \
	DECLARE_SERIALIZER(USpaceTradeGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SpaceTrade_Source_SpaceTrade_SpaceTradeGameInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSpaceTradeGameInstance(); \
	friend SPACETRADE_API class UClass* Z_Construct_UClass_USpaceTradeGameInstance(); \
public: \
	DECLARE_CLASS(USpaceTradeGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/SpaceTrade"), NO_API) \
	DECLARE_SERIALIZER(USpaceTradeGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SpaceTrade_Source_SpaceTrade_SpaceTradeGameInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpaceTradeGameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpaceTradeGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpaceTradeGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpaceTradeGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpaceTradeGameInstance(USpaceTradeGameInstance&&); \
	NO_API USpaceTradeGameInstance(const USpaceTradeGameInstance&); \
public:


#define SpaceTrade_Source_SpaceTrade_SpaceTradeGameInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpaceTradeGameInstance(USpaceTradeGameInstance&&); \
	NO_API USpaceTradeGameInstance(const USpaceTradeGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpaceTradeGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpaceTradeGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpaceTradeGameInstance)


#define SpaceTrade_Source_SpaceTrade_SpaceTradeGameInstance_h_17_PRIVATE_PROPERTY_OFFSET
#define SpaceTrade_Source_SpaceTrade_SpaceTradeGameInstance_h_14_PROLOG
#define SpaceTrade_Source_SpaceTrade_SpaceTradeGameInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceTrade_Source_SpaceTrade_SpaceTradeGameInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	SpaceTrade_Source_SpaceTrade_SpaceTradeGameInstance_h_17_RPC_WRAPPERS \
	SpaceTrade_Source_SpaceTrade_SpaceTradeGameInstance_h_17_INCLASS \
	SpaceTrade_Source_SpaceTrade_SpaceTradeGameInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceTrade_Source_SpaceTrade_SpaceTradeGameInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceTrade_Source_SpaceTrade_SpaceTradeGameInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	SpaceTrade_Source_SpaceTrade_SpaceTradeGameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceTrade_Source_SpaceTrade_SpaceTradeGameInstance_h_17_INCLASS_NO_PURE_DECLS \
	SpaceTrade_Source_SpaceTrade_SpaceTradeGameInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceTrade_Source_SpaceTrade_SpaceTradeGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
