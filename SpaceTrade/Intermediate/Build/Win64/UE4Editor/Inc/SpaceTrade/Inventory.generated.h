// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
#ifdef SPACETRADE_Inventory_generated_h
#error "Inventory.generated.h already included, missing '#pragma once' in Inventory.h"
#endif
#define SPACETRADE_Inventory_generated_h

#define SpaceTrade_Source_SpaceTrade_Inventory_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetItemCount) \
	{ \
		P_GET_STRUCT(FGuid,Z_Param_id); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetItemCount(Z_Param_id); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execItemRemove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ItemRemove(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execItemAdd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ItemAdd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvAdd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InvAdd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvCopy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InvCopy(); \
		P_NATIVE_END; \
	}


#define SpaceTrade_Source_SpaceTrade_Inventory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetItemCount) \
	{ \
		P_GET_STRUCT(FGuid,Z_Param_id); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetItemCount(Z_Param_id); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execItemRemove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ItemRemove(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execItemAdd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ItemAdd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvAdd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InvAdd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvCopy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InvCopy(); \
		P_NATIVE_END; \
	}


#define SpaceTrade_Source_SpaceTrade_Inventory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventory(); \
	friend SPACETRADE_API class UClass* Z_Construct_UClass_UInventory(); \
public: \
	DECLARE_CLASS(UInventory, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SpaceTrade"), NO_API) \
	DECLARE_SERIALIZER(UInventory) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SpaceTrade_Source_SpaceTrade_Inventory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUInventory(); \
	friend SPACETRADE_API class UClass* Z_Construct_UClass_UInventory(); \
public: \
	DECLARE_CLASS(UInventory, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SpaceTrade"), NO_API) \
	DECLARE_SERIALIZER(UInventory) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SpaceTrade_Source_SpaceTrade_Inventory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventory(UInventory&&); \
	NO_API UInventory(const UInventory&); \
public:


#define SpaceTrade_Source_SpaceTrade_Inventory_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventory(UInventory&&); \
	NO_API UInventory(const UInventory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventory)


#define SpaceTrade_Source_SpaceTrade_Inventory_h_17_PRIVATE_PROPERTY_OFFSET
#define SpaceTrade_Source_SpaceTrade_Inventory_h_14_PROLOG
#define SpaceTrade_Source_SpaceTrade_Inventory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceTrade_Source_SpaceTrade_Inventory_h_17_PRIVATE_PROPERTY_OFFSET \
	SpaceTrade_Source_SpaceTrade_Inventory_h_17_RPC_WRAPPERS \
	SpaceTrade_Source_SpaceTrade_Inventory_h_17_INCLASS \
	SpaceTrade_Source_SpaceTrade_Inventory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceTrade_Source_SpaceTrade_Inventory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceTrade_Source_SpaceTrade_Inventory_h_17_PRIVATE_PROPERTY_OFFSET \
	SpaceTrade_Source_SpaceTrade_Inventory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceTrade_Source_SpaceTrade_Inventory_h_17_INCLASS_NO_PURE_DECLS \
	SpaceTrade_Source_SpaceTrade_Inventory_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceTrade_Source_SpaceTrade_Inventory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
