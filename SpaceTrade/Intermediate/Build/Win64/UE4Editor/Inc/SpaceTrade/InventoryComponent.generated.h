// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInventoryItem;
#ifdef SPACETRADE_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define SPACETRADE_InventoryComponent_generated_h

#define SpaceTrade_Source_SpaceTrade_InventoryComponent_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitialStock) \
	{ \
		P_GET_TARRAY(int32,Z_Param_stock); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitialStock(Z_Param_stock); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSellItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_invPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SellItem(Z_Param_invPos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuyItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_invPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BuyItem(Z_Param_invPos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMoney) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMoney(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_invPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetItemName(Z_Param_invPos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanIAdd) \
	{ \
		P_GET_STRUCT(FInventoryItem,Z_Param_item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanIAdd(Z_Param_item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanITrade) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanITrade(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalInvPrice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTotalInvPrice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemCount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_invPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetItemCount(Z_Param_invPos); \
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
		P_GET_PROPERTY(UIntProperty,Z_Param_invPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ItemRemove(Z_Param_invPos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execItemAdd) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_invPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ItemAdd(Z_Param_invPos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvAdd) \
	{ \
		P_GET_TARRAY(FInventoryItem,Z_Param_inventory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InvAdd(Z_Param_inventory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvCopy) \
	{ \
		P_GET_TARRAY(FInventoryItem,Z_Param_inventory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InvCopy(Z_Param_inventory); \
		P_NATIVE_END; \
	}


#define SpaceTrade_Source_SpaceTrade_InventoryComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitialStock) \
	{ \
		P_GET_TARRAY(int32,Z_Param_stock); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitialStock(Z_Param_stock); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSellItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_invPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SellItem(Z_Param_invPos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuyItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_invPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BuyItem(Z_Param_invPos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMoney) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMoney(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_invPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetItemName(Z_Param_invPos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanIAdd) \
	{ \
		P_GET_STRUCT(FInventoryItem,Z_Param_item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanIAdd(Z_Param_item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanITrade) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanITrade(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalInvPrice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTotalInvPrice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemCount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_invPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetItemCount(Z_Param_invPos); \
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
		P_GET_PROPERTY(UIntProperty,Z_Param_invPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ItemRemove(Z_Param_invPos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execItemAdd) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_invPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ItemAdd(Z_Param_invPos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvAdd) \
	{ \
		P_GET_TARRAY(FInventoryItem,Z_Param_inventory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InvAdd(Z_Param_inventory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvCopy) \
	{ \
		P_GET_TARRAY(FInventoryItem,Z_Param_inventory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InvCopy(Z_Param_inventory); \
		P_NATIVE_END; \
	}


#define SpaceTrade_Source_SpaceTrade_InventoryComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend SPACETRADE_API class UClass* Z_Construct_UClass_UInventoryComponent(); \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SpaceTrade"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SpaceTrade_Source_SpaceTrade_InventoryComponent_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend SPACETRADE_API class UClass* Z_Construct_UClass_UInventoryComponent(); \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SpaceTrade"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SpaceTrade_Source_SpaceTrade_InventoryComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public:


#define SpaceTrade_Source_SpaceTrade_InventoryComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent)


#define SpaceTrade_Source_SpaceTrade_InventoryComponent_h_25_PRIVATE_PROPERTY_OFFSET
#define SpaceTrade_Source_SpaceTrade_InventoryComponent_h_22_PROLOG
#define SpaceTrade_Source_SpaceTrade_InventoryComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceTrade_Source_SpaceTrade_InventoryComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	SpaceTrade_Source_SpaceTrade_InventoryComponent_h_25_RPC_WRAPPERS \
	SpaceTrade_Source_SpaceTrade_InventoryComponent_h_25_INCLASS \
	SpaceTrade_Source_SpaceTrade_InventoryComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceTrade_Source_SpaceTrade_InventoryComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceTrade_Source_SpaceTrade_InventoryComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	SpaceTrade_Source_SpaceTrade_InventoryComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceTrade_Source_SpaceTrade_InventoryComponent_h_25_INCLASS_NO_PURE_DECLS \
	SpaceTrade_Source_SpaceTrade_InventoryComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceTrade_Source_SpaceTrade_InventoryComponent_h


#define FOREACH_ENUM_EINVTYPE(op) \
	op(EInvType::E_Default) \
	op(EInvType::E_PlayerInv) \
	op(EInvType::E_TraderInvFarm) \
	op(EInvType::E_TraderInvIndust) \
	op(EInvType::E_TraderInvMining) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
