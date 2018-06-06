// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACETRADE_ItemHandler_generated_h
#error "ItemHandler.generated.h already included, missing '#pragma once' in ItemHandler.h"
#endif
#define SPACETRADE_ItemHandler_generated_h

#define SpaceTrade_Source_SpaceTrade_ItemHandler_h_15_RPC_WRAPPERS
#define SpaceTrade_Source_SpaceTrade_ItemHandler_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceTrade_Source_SpaceTrade_ItemHandler_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemHandler(); \
	friend SPACETRADE_API class UClass* Z_Construct_UClass_UItemHandler(); \
public: \
	DECLARE_CLASS(UItemHandler, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SpaceTrade"), NO_API) \
	DECLARE_SERIALIZER(UItemHandler) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SpaceTrade_Source_SpaceTrade_ItemHandler_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUItemHandler(); \
	friend SPACETRADE_API class UClass* Z_Construct_UClass_UItemHandler(); \
public: \
	DECLARE_CLASS(UItemHandler, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SpaceTrade"), NO_API) \
	DECLARE_SERIALIZER(UItemHandler) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SpaceTrade_Source_SpaceTrade_ItemHandler_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemHandler(UItemHandler&&); \
	NO_API UItemHandler(const UItemHandler&); \
public:


#define SpaceTrade_Source_SpaceTrade_ItemHandler_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemHandler(UItemHandler&&); \
	NO_API UItemHandler(const UItemHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemHandler)


#define SpaceTrade_Source_SpaceTrade_ItemHandler_h_15_PRIVATE_PROPERTY_OFFSET
#define SpaceTrade_Source_SpaceTrade_ItemHandler_h_12_PROLOG
#define SpaceTrade_Source_SpaceTrade_ItemHandler_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceTrade_Source_SpaceTrade_ItemHandler_h_15_PRIVATE_PROPERTY_OFFSET \
	SpaceTrade_Source_SpaceTrade_ItemHandler_h_15_RPC_WRAPPERS \
	SpaceTrade_Source_SpaceTrade_ItemHandler_h_15_INCLASS \
	SpaceTrade_Source_SpaceTrade_ItemHandler_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceTrade_Source_SpaceTrade_ItemHandler_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceTrade_Source_SpaceTrade_ItemHandler_h_15_PRIVATE_PROPERTY_OFFSET \
	SpaceTrade_Source_SpaceTrade_ItemHandler_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceTrade_Source_SpaceTrade_ItemHandler_h_15_INCLASS_NO_PURE_DECLS \
	SpaceTrade_Source_SpaceTrade_ItemHandler_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceTrade_Source_SpaceTrade_ItemHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
