// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInventoryItem;
struct FItemInfo;
enum class EItemCategory : uint8;
#ifdef SPACETRADE_ItemDatabase_generated_h
#error "ItemDatabase.generated.h already included, missing '#pragma once' in ItemDatabase.h"
#endif
#define SPACETRADE_ItemDatabase_generated_h

#define SpaceTrade_Source_SpaceTrade_ItemDatabase_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetItemInfoViaID) \
	{ \
		P_GET_STRUCT(FInventoryItem,Z_Param_item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FItemInfo*)Z_Param__Result=this->GetItemInfoViaID(Z_Param_item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_itemLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInventoryItem*)Z_Param__Result=this->GetItem(Z_Param_itemLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_itemLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetName(Z_Param_itemLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execItemAdd) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_basePrice); \
		P_GET_PROPERTY(UIntProperty,Z_Param_maxCount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_weight); \
		P_GET_ENUM(EItemCategory,Z_Param__category); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ItemAdd(Z_Param_name,Z_Param_basePrice,Z_Param_maxCount,Z_Param_weight,EItemCategory(Z_Param__category)); \
		P_NATIVE_END; \
	}


#define SpaceTrade_Source_SpaceTrade_ItemDatabase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetItemInfoViaID) \
	{ \
		P_GET_STRUCT(FInventoryItem,Z_Param_item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FItemInfo*)Z_Param__Result=this->GetItemInfoViaID(Z_Param_item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_itemLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInventoryItem*)Z_Param__Result=this->GetItem(Z_Param_itemLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_itemLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetName(Z_Param_itemLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execItemAdd) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_basePrice); \
		P_GET_PROPERTY(UIntProperty,Z_Param_maxCount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_weight); \
		P_GET_ENUM(EItemCategory,Z_Param__category); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ItemAdd(Z_Param_name,Z_Param_basePrice,Z_Param_maxCount,Z_Param_weight,EItemCategory(Z_Param__category)); \
		P_NATIVE_END; \
	}


#define SpaceTrade_Source_SpaceTrade_ItemDatabase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemDatabase(); \
	friend SPACETRADE_API class UClass* Z_Construct_UClass_UItemDatabase(); \
public: \
	DECLARE_CLASS(UItemDatabase, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SpaceTrade"), NO_API) \
	DECLARE_SERIALIZER(UItemDatabase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SpaceTrade_Source_SpaceTrade_ItemDatabase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUItemDatabase(); \
	friend SPACETRADE_API class UClass* Z_Construct_UClass_UItemDatabase(); \
public: \
	DECLARE_CLASS(UItemDatabase, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SpaceTrade"), NO_API) \
	DECLARE_SERIALIZER(UItemDatabase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SpaceTrade_Source_SpaceTrade_ItemDatabase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemDatabase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemDatabase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemDatabase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemDatabase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemDatabase(UItemDatabase&&); \
	NO_API UItemDatabase(const UItemDatabase&); \
public:


#define SpaceTrade_Source_SpaceTrade_ItemDatabase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemDatabase(UItemDatabase&&); \
	NO_API UItemDatabase(const UItemDatabase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemDatabase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemDatabase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItemDatabase)


#define SpaceTrade_Source_SpaceTrade_ItemDatabase_h_17_PRIVATE_PROPERTY_OFFSET
#define SpaceTrade_Source_SpaceTrade_ItemDatabase_h_14_PROLOG
#define SpaceTrade_Source_SpaceTrade_ItemDatabase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceTrade_Source_SpaceTrade_ItemDatabase_h_17_PRIVATE_PROPERTY_OFFSET \
	SpaceTrade_Source_SpaceTrade_ItemDatabase_h_17_RPC_WRAPPERS \
	SpaceTrade_Source_SpaceTrade_ItemDatabase_h_17_INCLASS \
	SpaceTrade_Source_SpaceTrade_ItemDatabase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceTrade_Source_SpaceTrade_ItemDatabase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceTrade_Source_SpaceTrade_ItemDatabase_h_17_PRIVATE_PROPERTY_OFFSET \
	SpaceTrade_Source_SpaceTrade_ItemDatabase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceTrade_Source_SpaceTrade_ItemDatabase_h_17_INCLASS_NO_PURE_DECLS \
	SpaceTrade_Source_SpaceTrade_ItemDatabase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceTrade_Source_SpaceTrade_ItemDatabase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
