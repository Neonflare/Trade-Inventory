// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SpaceTrade.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1SpaceTrade() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();
	PAPER2D_API class UClass* Z_Construct_UClass_APaperCharacter();
	PAPER2D_API class UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UGameInstance();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();

	SPACETRADE_API class UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UInventory_GetCount();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UInventory_GetItemCount();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UInventory_InvAdd();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UInventory_InvCopy();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UInventory_ItemAdd();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UInventory_ItemRemove();
	SPACETRADE_API class UClass* Z_Construct_UClass_UInventory_NoRegister();
	SPACETRADE_API class UClass* Z_Construct_UClass_UInventory();
	SPACETRADE_API class UEnum* Z_Construct_UEnum_SpaceTrade_EItemCategory();
	SPACETRADE_API class UScriptStruct* Z_Construct_UScriptStruct_FItemInfo();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UItemDatabase_GetItem();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UItemDatabase_GetItemInfoViaID();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UItemDatabase_GetName();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UItemDatabase_ItemAdd();
	SPACETRADE_API class UClass* Z_Construct_UClass_UItemDatabase_NoRegister();
	SPACETRADE_API class UClass* Z_Construct_UClass_UItemDatabase();
	SPACETRADE_API class UEnum* Z_Construct_UEnum_SpaceTrade_EInvType();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UInventoryComponent_BuyItem();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UInventoryComponent_CanIAdd();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UInventoryComponent_CanITrade();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UInventoryComponent_GetCount();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UInventoryComponent_GetItemCount();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UInventoryComponent_GetItemName();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UInventoryComponent_GetMoney();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UInventoryComponent_GetTotalInvPrice();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UInventoryComponent_InitialStock();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UInventoryComponent_InvAdd();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UInventoryComponent_InvCopy();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UInventoryComponent_ItemAdd();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UInventoryComponent_ItemRemove();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UInventoryComponent_SellItem();
	SPACETRADE_API class UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	SPACETRADE_API class UClass* Z_Construct_UClass_UInventoryComponent();
	SPACETRADE_API class UClass* Z_Construct_UClass_UItemHandler_NoRegister();
	SPACETRADE_API class UClass* Z_Construct_UClass_UItemHandler();
	SPACETRADE_API class UFunction* Z_Construct_UDelegateFunction_SpaceTrade_StateChangeDelegate__DelegateSignature();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UMenuStateMachine_AddInitialStates();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_UMenuStateMachine_SetState();
	SPACETRADE_API class UClass* Z_Construct_UClass_UMenuStateMachine_NoRegister();
	SPACETRADE_API class UClass* Z_Construct_UClass_UMenuStateMachine();
	SPACETRADE_API class UClass* Z_Construct_UClass_ASpaceTradeCharacter_NoRegister();
	SPACETRADE_API class UClass* Z_Construct_UClass_ASpaceTradeCharacter();
	SPACETRADE_API class UFunction* Z_Construct_UFunction_USpaceTradeGameInstance_GetDatabase();
	SPACETRADE_API class UClass* Z_Construct_UClass_USpaceTradeGameInstance_NoRegister();
	SPACETRADE_API class UClass* Z_Construct_UClass_USpaceTradeGameInstance();
	SPACETRADE_API class UClass* Z_Construct_UClass_ASpaceTradeGameMode_NoRegister();
	SPACETRADE_API class UClass* Z_Construct_UClass_ASpaceTradeGameMode();
	SPACETRADE_API class UPackage* Z_Construct_UPackage__Script_SpaceTrade();
class UScriptStruct* FInventoryItem::StaticStruct()
{
	extern SPACETRADE_API class UPackage* Z_Construct_UPackage__Script_SpaceTrade();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPACETRADE_API class UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
		extern SPACETRADE_API uint32 Get_Z_Construct_UScriptStruct_FInventoryItem_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItem, Z_Construct_UPackage__Script_SpaceTrade(), TEXT("InventoryItem"), sizeof(FInventoryItem), Get_Z_Construct_UScriptStruct_FInventoryItem_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInventoryItem(FInventoryItem::StaticStruct, TEXT("/Script/SpaceTrade"), TEXT("InventoryItem"), false, nullptr, nullptr);
static struct FScriptStruct_SpaceTrade_StaticRegisterNativesFInventoryItem
{
	FScriptStruct_SpaceTrade_StaticRegisterNativesFInventoryItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InventoryItem")),new UScriptStruct::TCppStructOps<FInventoryItem>);
	}
} ScriptStruct_SpaceTrade_StaticRegisterNativesFInventoryItem;
	UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SpaceTrade();
		extern uint32 Get_Z_Construct_UScriptStruct_FInventoryItem_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InventoryItem"), sizeof(FInventoryItem), Get_Z_Construct_UScriptStruct_FInventoryItem_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InventoryItem"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FInventoryItem>, EStructFlags(0x00000001));
			UProperty* NewProp_name = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(name, FInventoryItem), 0x0010000000020015);
			UProperty* NewProp_count = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("count"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(count, FInventoryItem), 0x0010000000000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("InventoryItem.h"));
			MetaData->SetValue(NewProp_name, TEXT("Category"), TEXT("Item Info"));
			MetaData->SetValue(NewProp_name, TEXT("ModuleRelativePath"), TEXT("InventoryItem.h"));
			MetaData->SetValue(NewProp_count, TEXT("Category"), TEXT("Item Amount"));
			MetaData->SetValue(NewProp_count, TEXT("ModuleRelativePath"), TEXT("InventoryItem.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInventoryItem_CRC() { return 3860899060U; }
	void UInventory::StaticRegisterNativesUInventory()
	{
		UClass* Class = UInventory::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetCount", (Native)&UInventory::execGetCount },
			{ "GetItemCount", (Native)&UInventory::execGetItemCount },
			{ "InvAdd", (Native)&UInventory::execInvAdd },
			{ "InvCopy", (Native)&UInventory::execInvCopy },
			{ "ItemAdd", (Native)&UInventory::execItemAdd },
			{ "ItemRemove", (Native)&UInventory::execItemRemove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 6);
	}
	UFunction* Z_Construct_UFunction_UInventory_GetCount()
	{
		struct Inventory_eventGetCount_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UInventory();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCount"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(Inventory_eventGetCount_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(ReturnValue, Inventory_eventGetCount_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Inventory.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInventory_GetItemCount()
	{
		struct Inventory_eventGetItemCount_Parms
		{
			FGuid id;
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UInventory();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetItemCount"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04820401, 65535, sizeof(Inventory_eventGetItemCount_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(ReturnValue, Inventory_eventGetItemCount_Parms), 0x0010000000000580);
			UProperty* NewProp_id = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("id"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(id, Inventory_eventGetItemCount_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FGuid());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Inventory.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInventory_InvAdd()
	{
		UObject* Outer=Z_Construct_UClass_UInventory();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InvAdd"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Inventory.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInventory_InvCopy()
	{
		UObject* Outer=Z_Construct_UClass_UInventory();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InvCopy"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Inventory.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInventory_ItemAdd()
	{
		UObject* Outer=Z_Construct_UClass_UInventory();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ItemAdd"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Inventory.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInventory_ItemRemove()
	{
		UObject* Outer=Z_Construct_UClass_UInventory();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ItemRemove"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Inventory.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInventory_NoRegister()
	{
		return UInventory::StaticClass();
	}
	UClass* Z_Construct_UClass_UInventory()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_SpaceTrade();
			OuterClass = UInventory::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;

				OuterClass->LinkChild(Z_Construct_UFunction_UInventory_GetCount());
				OuterClass->LinkChild(Z_Construct_UFunction_UInventory_GetItemCount());
				OuterClass->LinkChild(Z_Construct_UFunction_UInventory_InvAdd());
				OuterClass->LinkChild(Z_Construct_UFunction_UInventory_InvCopy());
				OuterClass->LinkChild(Z_Construct_UFunction_UInventory_ItemAdd());
				OuterClass->LinkChild(Z_Construct_UFunction_UInventory_ItemRemove());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_cargoHoldSize = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("cargoHoldSize"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(cargoHoldSize, UInventory), 0x0010000000000014);
				UProperty* NewProp_cargo = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("cargo"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(cargo, UInventory), 0x0010000000000014);
				UProperty* NewProp_cargo_Inner = new(EC_InternalUseOnlyConstructor, NewProp_cargo, TEXT("cargo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FInventoryItem());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInventory_GetCount(), "GetCount"); // 344940808
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInventory_GetItemCount(), "GetItemCount"); // 3686417198
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInventory_InvAdd(), "InvAdd"); // 4086019322
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInventory_InvCopy(), "InvCopy"); // 3086425129
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInventory_ItemAdd(), "ItemAdd"); // 2087867347
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInventory_ItemRemove(), "ItemRemove"); // 1171132415
				static TCppClassTypeInfo<TCppClassTypeTraits<UInventory> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Inventory.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Inventory.h"));
				MetaData->SetValue(NewProp_cargoHoldSize, TEXT("Category"), TEXT("Inventory"));
				MetaData->SetValue(NewProp_cargoHoldSize, TEXT("ModuleRelativePath"), TEXT("Inventory.h"));
				MetaData->SetValue(NewProp_cargo, TEXT("Category"), TEXT("Inventory"));
				MetaData->SetValue(NewProp_cargo, TEXT("ModuleRelativePath"), TEXT("Inventory.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventory, 1791762834);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventory(Z_Construct_UClass_UInventory, &UInventory::StaticClass, TEXT("/Script/SpaceTrade"), TEXT("UInventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventory);
static UEnum* EItemCategory_StaticEnum()
{
	extern SPACETRADE_API class UPackage* Z_Construct_UPackage__Script_SpaceTrade();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern SPACETRADE_API class UEnum* Z_Construct_UEnum_SpaceTrade_EItemCategory();
		Singleton = GetStaticEnum(Z_Construct_UEnum_SpaceTrade_EItemCategory, Z_Construct_UPackage__Script_SpaceTrade(), TEXT("EItemCategory"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EItemCategory(EItemCategory_StaticEnum, TEXT("/Script/SpaceTrade"), TEXT("EItemCategory"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_SpaceTrade_EItemCategory()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_SpaceTrade();
		extern uint32 Get_Z_Construct_UEnum_SpaceTrade_EItemCategory_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EItemCategory"), 0, Get_Z_Construct_UEnum_SpaceTrade_EItemCategory_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EItemCategory"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EItemCategory::E_Default"), 0);
			EnumNames.Emplace(TEXT("EItemCategory::E_Industrial"), 1);
			EnumNames.Emplace(TEXT("EItemCategory::E_Mining"), 2);
			EnumNames.Emplace(TEXT("EItemCategory::E_Farming"), 3);
			EnumNames.Emplace(TEXT("EItemCategory::E_Chemical"), 4);
			EnumNames.Emplace(TEXT("EItemCategory::E_Commercial"), 5);
			EnumNames.Emplace(TEXT("EItemCategory::E_MAX"), 6);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EItemCategory");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("E_Chemical.DisplayName"), TEXT("Chemical"));
			MetaData->SetValue(ReturnEnum, TEXT("E_Commercial.DisplayName"), TEXT("Comercial"));
			MetaData->SetValue(ReturnEnum, TEXT("E_Default.DisplayName"), TEXT(""));
			MetaData->SetValue(ReturnEnum, TEXT("E_Farming.DisplayName"), TEXT("Farming"));
			MetaData->SetValue(ReturnEnum, TEXT("E_Industrial.DisplayName"), TEXT("Industrial"));
			MetaData->SetValue(ReturnEnum, TEXT("E_Mining.DisplayName"), TEXT("Mining"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("ItemInfo.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_SpaceTrade_EItemCategory_CRC() { return 4223595045U; }
class UScriptStruct* FItemInfo::StaticStruct()
{
	extern SPACETRADE_API class UPackage* Z_Construct_UPackage__Script_SpaceTrade();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPACETRADE_API class UScriptStruct* Z_Construct_UScriptStruct_FItemInfo();
		extern SPACETRADE_API uint32 Get_Z_Construct_UScriptStruct_FItemInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemInfo, Z_Construct_UPackage__Script_SpaceTrade(), TEXT("ItemInfo"), sizeof(FItemInfo), Get_Z_Construct_UScriptStruct_FItemInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemInfo(FItemInfo::StaticStruct, TEXT("/Script/SpaceTrade"), TEXT("ItemInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SpaceTrade_StaticRegisterNativesFItemInfo
{
	FScriptStruct_SpaceTrade_StaticRegisterNativesFItemInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemInfo")),new UScriptStruct::TCppStructOps<FItemInfo>);
	}
} ScriptStruct_SpaceTrade_StaticRegisterNativesFItemInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FItemInfo()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SpaceTrade();
		extern uint32 Get_Z_Construct_UScriptStruct_FItemInfo_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemInfo"), sizeof(FItemInfo), Get_Z_Construct_UScriptStruct_FItemInfo_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ItemInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FItemInfo>, EStructFlags(0x00000001));
			UProperty* NewProp_itemCat = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("itemCat"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(itemCat, FItemInfo), 0x0010000000000005, Z_Construct_UEnum_SpaceTrade_EItemCategory());
			UProperty* NewProp_itemCat_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_itemCat, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_icon = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("icon"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(icon, FItemInfo), 0x0010000000000005);
			UProperty* NewProp_weight = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("weight"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(weight, FItemInfo), 0x0010000000000005);
			UProperty* NewProp_maxCount = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("maxCount"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(maxCount, FItemInfo), 0x0010000000000005);
			UProperty* NewProp_basePrice = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("basePrice"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(basePrice, FItemInfo), 0x0010000000000005);
			UProperty* NewProp_itemName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("itemName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(itemName, FItemInfo), 0x0010000000000005);
			UProperty* NewProp_id = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("id"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(id, FItemInfo), 0x0010000000020015, Z_Construct_UScriptStruct_FGuid());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("ItemInfo.h"));
			MetaData->SetValue(NewProp_itemCat, TEXT("Category"), TEXT("Item Info"));
			MetaData->SetValue(NewProp_itemCat, TEXT("ModuleRelativePath"), TEXT("ItemInfo.h"));
			MetaData->SetValue(NewProp_icon, TEXT("Category"), TEXT("Item Info"));
			MetaData->SetValue(NewProp_icon, TEXT("ModuleRelativePath"), TEXT("ItemInfo.h"));
			MetaData->SetValue(NewProp_weight, TEXT("Category"), TEXT("Item Info"));
			MetaData->SetValue(NewProp_weight, TEXT("ModuleRelativePath"), TEXT("ItemInfo.h"));
			MetaData->SetValue(NewProp_maxCount, TEXT("Category"), TEXT("Item Info"));
			MetaData->SetValue(NewProp_maxCount, TEXT("ModuleRelativePath"), TEXT("ItemInfo.h"));
			MetaData->SetValue(NewProp_basePrice, TEXT("Category"), TEXT("Item Info"));
			MetaData->SetValue(NewProp_basePrice, TEXT("ModuleRelativePath"), TEXT("ItemInfo.h"));
			MetaData->SetValue(NewProp_itemName, TEXT("Category"), TEXT("Item Info"));
			MetaData->SetValue(NewProp_itemName, TEXT("ModuleRelativePath"), TEXT("ItemInfo.h"));
			MetaData->SetValue(NewProp_id, TEXT("Category"), TEXT("Item Info"));
			MetaData->SetValue(NewProp_id, TEXT("ModuleRelativePath"), TEXT("ItemInfo.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemInfo_CRC() { return 965371230U; }
	void UItemDatabase::StaticRegisterNativesUItemDatabase()
	{
		UClass* Class = UItemDatabase::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetItem", (Native)&UItemDatabase::execGetItem },
			{ "GetItemInfoViaID", (Native)&UItemDatabase::execGetItemInfoViaID },
			{ "GetName", (Native)&UItemDatabase::execGetName },
			{ "ItemAdd", (Native)&UItemDatabase::execItemAdd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 4);
	}
	UFunction* Z_Construct_UFunction_UItemDatabase_GetItem()
	{
		struct ItemDatabase_eventGetItem_Parms
		{
			int32 itemLocation;
			FInventoryItem ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UItemDatabase();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetItem"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(ItemDatabase_eventGetItem_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, ItemDatabase_eventGetItem_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FInventoryItem());
			UProperty* NewProp_itemLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("itemLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(itemLocation, ItemDatabase_eventGetItem_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("ItemDatabase.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UItemDatabase_GetItemInfoViaID()
	{
		struct ItemDatabase_eventGetItemInfoViaID_Parms
		{
			FInventoryItem item;
			FItemInfo ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UItemDatabase();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetItemInfoViaID"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(ItemDatabase_eventGetItemInfoViaID_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, ItemDatabase_eventGetItemInfoViaID_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FItemInfo());
			UProperty* NewProp_item = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("item"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(item, ItemDatabase_eventGetItemInfoViaID_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FInventoryItem());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("ItemDatabase.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UItemDatabase_GetName()
	{
		struct ItemDatabase_eventGetName_Parms
		{
			int32 itemLocation;
			FString ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UItemDatabase();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(ItemDatabase_eventGetName_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, ItemDatabase_eventGetName_Parms), 0x0010000000000580);
			UProperty* NewProp_itemLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("itemLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(itemLocation, ItemDatabase_eventGetName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("ItemDatabase.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UItemDatabase_ItemAdd()
	{
		struct ItemDatabase_eventItemAdd_Parms
		{
			FString name;
			float basePrice;
			int32 maxCount;
			int32 weight;
			EItemCategory _category;
		};
		UObject* Outer=Z_Construct_UClass_UItemDatabase();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ItemAdd"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(ItemDatabase_eventItemAdd_Parms));
			UProperty* NewProp__category = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("_category"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(_category, ItemDatabase_eventItemAdd_Parms), 0x0010000000000080, Z_Construct_UEnum_SpaceTrade_EItemCategory());
			UProperty* NewProp__category_Underlying = new(EC_InternalUseOnlyConstructor, NewProp__category, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_weight = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("weight"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(weight, ItemDatabase_eventItemAdd_Parms), 0x0010000000000080);
			UProperty* NewProp_maxCount = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("maxCount"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(maxCount, ItemDatabase_eventItemAdd_Parms), 0x0010000000000080);
			UProperty* NewProp_basePrice = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("basePrice"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(basePrice, ItemDatabase_eventItemAdd_Parms), 0x0010000000000080);
			UProperty* NewProp_name = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(name, ItemDatabase_eventItemAdd_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("ItemDatabase.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UItemDatabase_NoRegister()
	{
		return UItemDatabase::StaticClass();
	}
	UClass* Z_Construct_UClass_UItemDatabase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_SpaceTrade();
			OuterClass = UItemDatabase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;

				OuterClass->LinkChild(Z_Construct_UFunction_UItemDatabase_GetItem());
				OuterClass->LinkChild(Z_Construct_UFunction_UItemDatabase_GetItemInfoViaID());
				OuterClass->LinkChild(Z_Construct_UFunction_UItemDatabase_GetName());
				OuterClass->LinkChild(Z_Construct_UFunction_UItemDatabase_ItemAdd());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_category = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("category"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(category, UItemDatabase), 0x0010000000000000, Z_Construct_UEnum_SpaceTrade_EItemCategory());
				UProperty* NewProp_category_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_category, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_itemDatabase = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("itemDatabase"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(itemDatabase, UItemDatabase), 0x0010000000020015);
				UProperty* NewProp_itemDatabase_Inner = new(EC_InternalUseOnlyConstructor, NewProp_itemDatabase, TEXT("itemDatabase"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000020000, Z_Construct_UScriptStruct_FItemInfo());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UItemDatabase_GetItem(), "GetItem"); // 1440775787
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UItemDatabase_GetItemInfoViaID(), "GetItemInfoViaID"); // 163912015
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UItemDatabase_GetName(), "GetName"); // 1640399682
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UItemDatabase_ItemAdd(), "ItemAdd"); // 1274927513
				static TCppClassTypeInfo<TCppClassTypeTraits<UItemDatabase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ItemDatabase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ItemDatabase.h"));
				MetaData->SetValue(NewProp_category, TEXT("ModuleRelativePath"), TEXT("ItemDatabase.h"));
				MetaData->SetValue(NewProp_itemDatabase, TEXT("Category"), TEXT("ItemDatabase"));
				MetaData->SetValue(NewProp_itemDatabase, TEXT("ModuleRelativePath"), TEXT("ItemDatabase.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemDatabase, 1533274428);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemDatabase(Z_Construct_UClass_UItemDatabase, &UItemDatabase::StaticClass, TEXT("/Script/SpaceTrade"), TEXT("UItemDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemDatabase);
static UEnum* EInvType_StaticEnum()
{
	extern SPACETRADE_API class UPackage* Z_Construct_UPackage__Script_SpaceTrade();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern SPACETRADE_API class UEnum* Z_Construct_UEnum_SpaceTrade_EInvType();
		Singleton = GetStaticEnum(Z_Construct_UEnum_SpaceTrade_EInvType, Z_Construct_UPackage__Script_SpaceTrade(), TEXT("EInvType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInvType(EInvType_StaticEnum, TEXT("/Script/SpaceTrade"), TEXT("EInvType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_SpaceTrade_EInvType()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_SpaceTrade();
		extern uint32 Get_Z_Construct_UEnum_SpaceTrade_EInvType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInvType"), 0, Get_Z_Construct_UEnum_SpaceTrade_EInvType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EInvType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EInvType::E_Default"), 0);
			EnumNames.Emplace(TEXT("EInvType::E_PlayerInv"), 1);
			EnumNames.Emplace(TEXT("EInvType::E_TraderInvFarm"), 2);
			EnumNames.Emplace(TEXT("EInvType::E_TraderInvIndust"), 3);
			EnumNames.Emplace(TEXT("EInvType::E_TraderInvMining"), 4);
			EnumNames.Emplace(TEXT("EInvType::E_MAX"), 5);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EInvType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("E_Default.DisplayName"), TEXT(""));
			MetaData->SetValue(ReturnEnum, TEXT("E_PlayerInv.DisplayName"), TEXT("Player Inventory"));
			MetaData->SetValue(ReturnEnum, TEXT("E_TraderInvFarm.DisplayName"), TEXT("Farming Trading Inventory"));
			MetaData->SetValue(ReturnEnum, TEXT("E_TraderInvIndust.DisplayName"), TEXT("Industrial Trading Inventorg"));
			MetaData->SetValue(ReturnEnum, TEXT("E_TraderInvMining.DisplayName"), TEXT("Mining Trading Inventory"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("InventoryComponent.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_SpaceTrade_EInvType_CRC() { return 1192231911U; }
	void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
	{
		UClass* Class = UInventoryComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "BuyItem", (Native)&UInventoryComponent::execBuyItem },
			{ "CanIAdd", (Native)&UInventoryComponent::execCanIAdd },
			{ "CanITrade", (Native)&UInventoryComponent::execCanITrade },
			{ "GetCount", (Native)&UInventoryComponent::execGetCount },
			{ "GetItemCount", (Native)&UInventoryComponent::execGetItemCount },
			{ "GetItemName", (Native)&UInventoryComponent::execGetItemName },
			{ "GetMoney", (Native)&UInventoryComponent::execGetMoney },
			{ "GetTotalInvPrice", (Native)&UInventoryComponent::execGetTotalInvPrice },
			{ "InitialStock", (Native)&UInventoryComponent::execInitialStock },
			{ "InvAdd", (Native)&UInventoryComponent::execInvAdd },
			{ "InvCopy", (Native)&UInventoryComponent::execInvCopy },
			{ "ItemAdd", (Native)&UInventoryComponent::execItemAdd },
			{ "ItemRemove", (Native)&UInventoryComponent::execItemRemove },
			{ "SellItem", (Native)&UInventoryComponent::execSellItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 14);
	}
	UFunction* Z_Construct_UFunction_UInventoryComponent_BuyItem()
	{
		struct InventoryComponent_eventBuyItem_Parms
		{
			int32 invPos;
		};
		UObject* Outer=Z_Construct_UClass_UInventoryComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BuyItem"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(InventoryComponent_eventBuyItem_Parms));
			UProperty* NewProp_invPos = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("invPos"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(invPos, InventoryComponent_eventBuyItem_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InventoryComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInventoryComponent_CanIAdd()
	{
		struct InventoryComponent_eventCanIAdd_Parms
		{
			FInventoryItem item;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UInventoryComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CanIAdd"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(InventoryComponent_eventCanIAdd_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, InventoryComponent_eventCanIAdd_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, InventoryComponent_eventCanIAdd_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, InventoryComponent_eventCanIAdd_Parms), sizeof(bool), true);
			UProperty* NewProp_item = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("item"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(item, InventoryComponent_eventCanIAdd_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FInventoryItem());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InventoryComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInventoryComponent_CanITrade()
	{
		struct InventoryComponent_eventCanITrade_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UInventoryComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CanITrade"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(InventoryComponent_eventCanITrade_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, InventoryComponent_eventCanITrade_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, InventoryComponent_eventCanITrade_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, InventoryComponent_eventCanITrade_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InventoryComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetCount()
	{
		struct InventoryComponent_eventGetCount_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UInventoryComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCount"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(InventoryComponent_eventGetCount_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(ReturnValue, InventoryComponent_eventGetCount_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InventoryComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetItemCount()
	{
		struct InventoryComponent_eventGetItemCount_Parms
		{
			int32 invPos;
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UInventoryComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetItemCount"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(InventoryComponent_eventGetItemCount_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(ReturnValue, InventoryComponent_eventGetItemCount_Parms), 0x0010000000000580);
			UProperty* NewProp_invPos = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("invPos"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(invPos, InventoryComponent_eventGetItemCount_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InventoryComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetItemName()
	{
		struct InventoryComponent_eventGetItemName_Parms
		{
			int32 invPos;
			FString ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UInventoryComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetItemName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(InventoryComponent_eventGetItemName_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, InventoryComponent_eventGetItemName_Parms), 0x0010000000000580);
			UProperty* NewProp_invPos = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("invPos"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(invPos, InventoryComponent_eventGetItemName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InventoryComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetMoney()
	{
		struct InventoryComponent_eventGetMoney_Parms
		{
			float ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UInventoryComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetMoney"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(InventoryComponent_eventGetMoney_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, InventoryComponent_eventGetMoney_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InventoryComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetTotalInvPrice()
	{
		struct InventoryComponent_eventGetTotalInvPrice_Parms
		{
			float ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UInventoryComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetTotalInvPrice"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(InventoryComponent_eventGetTotalInvPrice_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, InventoryComponent_eventGetTotalInvPrice_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InventoryComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInventoryComponent_InitialStock()
	{
		struct InventoryComponent_eventInitialStock_Parms
		{
			TArray<int32> stock;
		};
		UObject* Outer=Z_Construct_UClass_UInventoryComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InitialStock"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(InventoryComponent_eventInitialStock_Parms));
			UProperty* NewProp_stock = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("stock"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(stock, InventoryComponent_eventInitialStock_Parms), 0x0010000000000080);
			UProperty* NewProp_stock_Inner = new(EC_InternalUseOnlyConstructor, NewProp_stock, TEXT("stock"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InventoryComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInventoryComponent_InvAdd()
	{
		struct InventoryComponent_eventInvAdd_Parms
		{
			TArray<FInventoryItem> inventory;
		};
		UObject* Outer=Z_Construct_UClass_UInventoryComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InvAdd"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(InventoryComponent_eventInvAdd_Parms));
			UProperty* NewProp_inventory = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("inventory"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(inventory, InventoryComponent_eventInvAdd_Parms), 0x0010000000000080);
			UProperty* NewProp_inventory_Inner = new(EC_InternalUseOnlyConstructor, NewProp_inventory, TEXT("inventory"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FInventoryItem());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InventoryComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInventoryComponent_InvCopy()
	{
		struct InventoryComponent_eventInvCopy_Parms
		{
			TArray<FInventoryItem> inventory;
		};
		UObject* Outer=Z_Construct_UClass_UInventoryComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InvCopy"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(InventoryComponent_eventInvCopy_Parms));
			UProperty* NewProp_inventory = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("inventory"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(inventory, InventoryComponent_eventInvCopy_Parms), 0x0010000000000080);
			UProperty* NewProp_inventory_Inner = new(EC_InternalUseOnlyConstructor, NewProp_inventory, TEXT("inventory"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FInventoryItem());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InventoryComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInventoryComponent_ItemAdd()
	{
		struct InventoryComponent_eventItemAdd_Parms
		{
			int32 invPos;
		};
		UObject* Outer=Z_Construct_UClass_UInventoryComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ItemAdd"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(InventoryComponent_eventItemAdd_Parms));
			UProperty* NewProp_invPos = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("invPos"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(invPos, InventoryComponent_eventItemAdd_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InventoryComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInventoryComponent_ItemRemove()
	{
		struct InventoryComponent_eventItemRemove_Parms
		{
			int32 invPos;
		};
		UObject* Outer=Z_Construct_UClass_UInventoryComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ItemRemove"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(InventoryComponent_eventItemRemove_Parms));
			UProperty* NewProp_invPos = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("invPos"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(invPos, InventoryComponent_eventItemRemove_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InventoryComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInventoryComponent_SellItem()
	{
		struct InventoryComponent_eventSellItem_Parms
		{
			int32 invPos;
		};
		UObject* Outer=Z_Construct_UClass_UInventoryComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SellItem"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(InventoryComponent_eventSellItem_Parms));
			UProperty* NewProp_invPos = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("invPos"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(invPos, InventoryComponent_eventSellItem_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("InventoryComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
	{
		return UInventoryComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UInventoryComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_SpaceTrade();
			OuterClass = UInventoryComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;

				OuterClass->LinkChild(Z_Construct_UFunction_UInventoryComponent_BuyItem());
				OuterClass->LinkChild(Z_Construct_UFunction_UInventoryComponent_CanIAdd());
				OuterClass->LinkChild(Z_Construct_UFunction_UInventoryComponent_CanITrade());
				OuterClass->LinkChild(Z_Construct_UFunction_UInventoryComponent_GetCount());
				OuterClass->LinkChild(Z_Construct_UFunction_UInventoryComponent_GetItemCount());
				OuterClass->LinkChild(Z_Construct_UFunction_UInventoryComponent_GetItemName());
				OuterClass->LinkChild(Z_Construct_UFunction_UInventoryComponent_GetMoney());
				OuterClass->LinkChild(Z_Construct_UFunction_UInventoryComponent_GetTotalInvPrice());
				OuterClass->LinkChild(Z_Construct_UFunction_UInventoryComponent_InitialStock());
				OuterClass->LinkChild(Z_Construct_UFunction_UInventoryComponent_InvAdd());
				OuterClass->LinkChild(Z_Construct_UFunction_UInventoryComponent_InvCopy());
				OuterClass->LinkChild(Z_Construct_UFunction_UInventoryComponent_ItemAdd());
				OuterClass->LinkChild(Z_Construct_UFunction_UInventoryComponent_ItemRemove());
				OuterClass->LinkChild(Z_Construct_UFunction_UInventoryComponent_SellItem());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_sellPriceModifiers = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("sellPriceModifiers"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(sellPriceModifiers, UInventoryComponent), 0x0010000000000005);
				UProperty* NewProp_sellPriceModifiers_Inner = new(EC_InternalUseOnlyConstructor, NewProp_sellPriceModifiers, TEXT("sellPriceModifiers"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_buyPriceModifiers = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("buyPriceModifiers"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(buyPriceModifiers, UInventoryComponent), 0x0010000000000005);
				UProperty* NewProp_buyPriceModifiers_Inner = new(EC_InternalUseOnlyConstructor, NewProp_buyPriceModifiers, TEXT("buyPriceModifiers"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_invType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("invType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(invType, UInventoryComponent), 0x0010000000000005, Z_Construct_UEnum_SpaceTrade_EInvType());
				UProperty* NewProp_invType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_invType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_maxMoney = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("maxMoney"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(maxMoney, UInventoryComponent), 0x0010000000020015);
				UProperty* NewProp_money = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("money"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(money, UInventoryComponent), 0x0010000000000005);
				UProperty* NewProp_cargoHoldSize = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("cargoHoldSize"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(cargoHoldSize, UInventoryComponent), 0x0010000000020015);
				UProperty* NewProp_database = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("database"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(database, UInventoryComponent), 0x0010000000020015, Z_Construct_UClass_UItemDatabase_NoRegister());
				UProperty* NewProp_cargo = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("cargo"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(cargo, UInventoryComponent), 0x0010000000020015);
				UProperty* NewProp_cargo_Inner = new(EC_InternalUseOnlyConstructor, NewProp_cargo, TEXT("cargo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000020000, Z_Construct_UScriptStruct_FInventoryItem());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInventoryComponent_BuyItem(), "BuyItem"); // 3913734202
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInventoryComponent_CanIAdd(), "CanIAdd"); // 1470072923
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInventoryComponent_CanITrade(), "CanITrade"); // 594825352
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInventoryComponent_GetCount(), "GetCount"); // 4111915901
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInventoryComponent_GetItemCount(), "GetItemCount"); // 1392192630
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInventoryComponent_GetItemName(), "GetItemName"); // 2135079085
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInventoryComponent_GetMoney(), "GetMoney"); // 3458328416
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInventoryComponent_GetTotalInvPrice(), "GetTotalInvPrice"); // 2680255283
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInventoryComponent_InitialStock(), "InitialStock"); // 2832213226
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInventoryComponent_InvAdd(), "InvAdd"); // 4123243935
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInventoryComponent_InvCopy(), "InvCopy"); // 2066924552
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInventoryComponent_ItemAdd(), "ItemAdd"); // 2376290492
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInventoryComponent_ItemRemove(), "ItemRemove"); // 2780241147
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInventoryComponent_SellItem(), "SellItem"); // 2506112840
				static TCppClassTypeInfo<TCppClassTypeTraits<UInventoryComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InventoryComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("InventoryComponent.h"));
				MetaData->SetValue(NewProp_sellPriceModifiers, TEXT("Category"), TEXT("inv"));
				MetaData->SetValue(NewProp_sellPriceModifiers, TEXT("ModuleRelativePath"), TEXT("InventoryComponent.h"));
				MetaData->SetValue(NewProp_buyPriceModifiers, TEXT("Category"), TEXT("inv"));
				MetaData->SetValue(NewProp_buyPriceModifiers, TEXT("ModuleRelativePath"), TEXT("InventoryComponent.h"));
				MetaData->SetValue(NewProp_invType, TEXT("Category"), TEXT("inv"));
				MetaData->SetValue(NewProp_invType, TEXT("ModuleRelativePath"), TEXT("InventoryComponent.h"));
				MetaData->SetValue(NewProp_maxMoney, TEXT("Category"), TEXT("Money"));
				MetaData->SetValue(NewProp_maxMoney, TEXT("ModuleRelativePath"), TEXT("InventoryComponent.h"));
				MetaData->SetValue(NewProp_money, TEXT("Category"), TEXT("Money"));
				MetaData->SetValue(NewProp_money, TEXT("ModuleRelativePath"), TEXT("InventoryComponent.h"));
				MetaData->SetValue(NewProp_cargoHoldSize, TEXT("Category"), TEXT("Inv"));
				MetaData->SetValue(NewProp_cargoHoldSize, TEXT("ModuleRelativePath"), TEXT("InventoryComponent.h"));
				MetaData->SetValue(NewProp_database, TEXT("Category"), TEXT("Inv"));
				MetaData->SetValue(NewProp_database, TEXT("ModuleRelativePath"), TEXT("InventoryComponent.h"));
				MetaData->SetValue(NewProp_cargo, TEXT("Category"), TEXT("Inv"));
				MetaData->SetValue(NewProp_cargo, TEXT("ModuleRelativePath"), TEXT("InventoryComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventoryComponent, 3469206778);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventoryComponent(Z_Construct_UClass_UInventoryComponent, &UInventoryComponent::StaticClass, TEXT("/Script/SpaceTrade"), TEXT("UInventoryComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
	void UItemHandler::StaticRegisterNativesUItemHandler()
	{
	}
	UClass* Z_Construct_UClass_UItemHandler_NoRegister()
	{
		return UItemHandler::StaticClass();
	}
	UClass* Z_Construct_UClass_UItemHandler()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_SpaceTrade();
			OuterClass = UItemHandler::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UItemHandler> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ItemHandler.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ItemHandler.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemHandler, 3104897733);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemHandler(Z_Construct_UClass_UItemHandler, &UItemHandler::StaticClass, TEXT("/Script/SpaceTrade"), TEXT("UItemHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemHandler);
	UFunction* Z_Construct_UDelegateFunction_SpaceTrade_StateChangeDelegate__DelegateSignature()
	{
		struct _Script_SpaceTrade_eventStateChangeDelegate_Parms
		{
			FString NewState;
			FString OldState;
		};
		UObject* Outer=Z_Construct_UPackage__Script_SpaceTrade();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StateChangeDelegate__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), NULL, 0x00130000, 65535, sizeof(_Script_SpaceTrade_eventStateChangeDelegate_Parms));
			UProperty* NewProp_OldState = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldState"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(OldState, _Script_SpaceTrade_eventStateChangeDelegate_Parms), 0x0010000000000080);
			UProperty* NewProp_NewState = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewState"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(NewState, _Script_SpaceTrade_eventStateChangeDelegate_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MenuStateMachine.h"));
#endif
		}
		return ReturnFunction;
	}
	void UMenuStateMachine::StaticRegisterNativesUMenuStateMachine()
	{
		UClass* Class = UMenuStateMachine::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AddInitialStates", (Native)&UMenuStateMachine::execAddInitialStates },
			{ "SetState", (Native)&UMenuStateMachine::execSetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 2);
	}
	UFunction* Z_Construct_UFunction_UMenuStateMachine_AddInitialStates()
	{
		struct MenuStateMachine_eventAddInitialStates_Parms
		{
			TArray<FString> initialstates;
		};
		UObject* Outer=Z_Construct_UClass_UMenuStateMachine();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddInitialStates"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(MenuStateMachine_eventAddInitialStates_Parms));
			UProperty* NewProp_initialstates = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("initialstates"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(initialstates, MenuStateMachine_eventAddInitialStates_Parms), 0x0010000000000180);
			UProperty* NewProp_initialstates_Inner = new(EC_InternalUseOnlyConstructor, NewProp_initialstates, TEXT("initialstates"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MenuStateMachine.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMenuStateMachine_SetState()
	{
		struct MenuStateMachine_eventSetState_Parms
		{
			FString desiredstate;
		};
		UObject* Outer=Z_Construct_UClass_UMenuStateMachine();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetState"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(MenuStateMachine_eventSetState_Parms));
			UProperty* NewProp_desiredstate = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("desiredstate"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(desiredstate, MenuStateMachine_eventSetState_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MenuStateMachine.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMenuStateMachine_NoRegister()
	{
		return UMenuStateMachine::StaticClass();
	}
	UClass* Z_Construct_UClass_UMenuStateMachine()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_SpaceTrade();
			OuterClass = UMenuStateMachine::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_UMenuStateMachine_AddInitialStates());
				OuterClass->LinkChild(Z_Construct_UFunction_UMenuStateMachine_SetState());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_OnStateChanged = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnStateChanged"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnStateChanged, UMenuStateMachine), 0x0010000010080000, Z_Construct_UDelegateFunction_SpaceTrade_StateChangeDelegate__DelegateSignature());
				UProperty* NewProp_States = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("States"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(States, UMenuStateMachine), 0x0010000000000005);
				UProperty* NewProp_States_Inner = new(EC_InternalUseOnlyConstructor, NewProp_States, TEXT("States"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMenuStateMachine_AddInitialStates(), "AddInitialStates"); // 1824398091
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMenuStateMachine_SetState(), "SetState"); // 1136169471
				static TCppClassTypeInfo<TCppClassTypeTraits<UMenuStateMachine> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MenuStateMachine.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MenuStateMachine.h"));
				MetaData->SetValue(NewProp_OnStateChanged, TEXT("Category"), TEXT("StateChange"));
				MetaData->SetValue(NewProp_OnStateChanged, TEXT("ModuleRelativePath"), TEXT("MenuStateMachine.h"));
				MetaData->SetValue(NewProp_OnStateChanged, TEXT("ToolTip"), TEXT("Broadcasts whenever the the state is changed // event declaration"));
				MetaData->SetValue(NewProp_States, TEXT("Category"), TEXT("States"));
				MetaData->SetValue(NewProp_States, TEXT("ModuleRelativePath"), TEXT("MenuStateMachine.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMenuStateMachine, 3344347198);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMenuStateMachine(Z_Construct_UClass_UMenuStateMachine, &UMenuStateMachine::StaticClass, TEXT("/Script/SpaceTrade"), TEXT("UMenuStateMachine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuStateMachine);
	void ASpaceTradeCharacter::StaticRegisterNativesASpaceTradeCharacter()
	{
	}
	UClass* Z_Construct_UClass_ASpaceTradeCharacter_NoRegister()
	{
		return ASpaceTradeCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ASpaceTradeCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APaperCharacter();
			Z_Construct_UPackage__Script_SpaceTrade();
			OuterClass = ASpaceTradeCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_IdleAnimation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IdleAnimation"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(IdleAnimation, ASpaceTradeCharacter), 0x0020080000000005, Z_Construct_UClass_UPaperFlipbook_NoRegister());
				UProperty* NewProp_RunningAnimation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RunningAnimation"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RunningAnimation, ASpaceTradeCharacter), 0x0020080000000005, Z_Construct_UClass_UPaperFlipbook_NoRegister());
				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, ASpaceTradeCharacter), 0x00400000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
				UProperty* NewProp_SideViewCameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SideViewCameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SideViewCameraComponent, ASpaceTradeCharacter), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ASpaceTradeCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SpaceTradeCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SpaceTradeCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("This class is the default character for SpaceTrade, and it is responsible for all\nphysical interaction between the player and the world.\n\nThe capsule component (inherited from ACharacter) handles collision with the world\nThe CharacterMovementComponent (inherited from ACharacter) handles movement of the collision capsule\nThe Sprite component (inherited from APaperCharacter) handles the visuals"));
				MetaData->SetValue(NewProp_IdleAnimation, TEXT("Category"), TEXT("Animations"));
				MetaData->SetValue(NewProp_IdleAnimation, TEXT("ModuleRelativePath"), TEXT("SpaceTradeCharacter.h"));
				MetaData->SetValue(NewProp_IdleAnimation, TEXT("ToolTip"), TEXT("The animation to play while idle (standing still)"));
				MetaData->SetValue(NewProp_RunningAnimation, TEXT("Category"), TEXT("Animations"));
				MetaData->SetValue(NewProp_RunningAnimation, TEXT("ModuleRelativePath"), TEXT("SpaceTradeCharacter.h"));
				MetaData->SetValue(NewProp_RunningAnimation, TEXT("ToolTip"), TEXT("The animation to play while running around"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("SpaceTradeCharacter.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ToolTip"), TEXT("Camera boom positioning the camera beside the character"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("ModuleRelativePath"), TEXT("SpaceTradeCharacter.h"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("ToolTip"), TEXT("Side view camera"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpaceTradeCharacter, 4243337991);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpaceTradeCharacter(Z_Construct_UClass_ASpaceTradeCharacter, &ASpaceTradeCharacter::StaticClass, TEXT("/Script/SpaceTrade"), TEXT("ASpaceTradeCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceTradeCharacter);
	void USpaceTradeGameInstance::StaticRegisterNativesUSpaceTradeGameInstance()
	{
		UClass* Class = USpaceTradeGameInstance::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetDatabase", (Native)&USpaceTradeGameInstance::execGetDatabase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_USpaceTradeGameInstance_GetDatabase()
	{
		struct SpaceTradeGameInstance_eventGetDatabase_Parms
		{
			UItemDatabase* ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_USpaceTradeGameInstance();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetDatabase"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(SpaceTradeGameInstance_eventGetDatabase_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, SpaceTradeGameInstance_eventGetDatabase_Parms), 0x0010000000000580, Z_Construct_UClass_UItemDatabase_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("SpaceTradeGameInstance.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpaceTradeGameInstance_NoRegister()
	{
		return USpaceTradeGameInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_USpaceTradeGameInstance()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UGameInstance();
			Z_Construct_UPackage__Script_SpaceTrade();
			OuterClass = USpaceTradeGameInstance::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100088;

				OuterClass->LinkChild(Z_Construct_UFunction_USpaceTradeGameInstance_GetDatabase());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_itemDatabase = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("itemDatabase"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(itemDatabase, USpaceTradeGameInstance), 0x0010000000000015, Z_Construct_UClass_UItemDatabase_NoRegister());
				UProperty* NewProp_StateMachine = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StateMachine"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(StateMachine, USpaceTradeGameInstance), 0x0010000000000005, Z_Construct_UClass_UMenuStateMachine_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USpaceTradeGameInstance_GetDatabase(), "GetDatabase"); // 948353021
				static TCppClassTypeInfo<TCppClassTypeTraits<USpaceTradeGameInstance> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SpaceTradeGameInstance.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SpaceTradeGameInstance.h"));
				MetaData->SetValue(NewProp_itemDatabase, TEXT("Category"), TEXT("SpaceTradeGameInstance"));
				MetaData->SetValue(NewProp_itemDatabase, TEXT("ModuleRelativePath"), TEXT("SpaceTradeGameInstance.h"));
				MetaData->SetValue(NewProp_StateMachine, TEXT("Category"), TEXT("SpaceTradeGameInstance"));
				MetaData->SetValue(NewProp_StateMachine, TEXT("ModuleRelativePath"), TEXT("SpaceTradeGameInstance.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpaceTradeGameInstance, 784637384);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpaceTradeGameInstance(Z_Construct_UClass_USpaceTradeGameInstance, &USpaceTradeGameInstance::StaticClass, TEXT("/Script/SpaceTrade"), TEXT("USpaceTradeGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpaceTradeGameInstance);
	void ASpaceTradeGameMode::StaticRegisterNativesASpaceTradeGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASpaceTradeGameMode_NoRegister()
	{
		return ASpaceTradeGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ASpaceTradeGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_SpaceTrade();
			OuterClass = ASpaceTradeGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20880288;


				static TCppClassTypeInfo<TCppClassTypeTraits<ASpaceTradeGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SpaceTradeGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SpaceTradeGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("The GameMode defines the game being played. It governs the game rules, scoring, what actors\nare allowed to exist in this game type, and who may enter the game.\n\nThis game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of SpaceTradeCharacter"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpaceTradeGameMode, 3674400146);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpaceTradeGameMode(Z_Construct_UClass_ASpaceTradeGameMode, &ASpaceTradeGameMode::StaticClass, TEXT("/Script/SpaceTrade"), TEXT("ASpaceTradeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceTradeGameMode);
	UPackage* Z_Construct_UPackage__Script_SpaceTrade()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/SpaceTrade")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x2DC50992;
			Guid.B = 0x9568BF2D;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

			Z_Construct_UDelegateFunction_SpaceTrade_StateChangeDelegate__DelegateSignature();
		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
