// Fill out your copyright notice in the Description page of Project Settings.

#include "ItemDatabase.h"

UItemDatabase::UItemDatabase() {
	ItemAdd("Fertiliser", 5.00f, 25, 5, EItemCategory::E_Farming);
	ItemAdd("Food", 1.50f, 50, 2, EItemCategory::E_Farming);
	ItemAdd("Steel", 7.25f, 15, 10, EItemCategory::E_Industrial);
	ItemAdd("Tools", 10.50f, 20, 15, EItemCategory::E_Industrial);
	ItemAdd("Clothes", 8.00f, 25, 5, EItemCategory::E_Commercial);
	ItemAdd("Toys", 12.00f, 30, 5, EItemCategory::E_Commercial);
	ItemAdd("Sulfur", 2.50f, 50, 2, EItemCategory::E_Chemical);
	ItemAdd("Acid", 5.50f, 35, 5, EItemCategory::E_Chemical);
	ItemAdd("Explosives", 20.00f, 15, 15, EItemCategory::E_Mining);
	ItemAdd("Iron Ore", 4.00f, 30, 10, EItemCategory::E_Mining);
}

void UItemDatabase::ItemAdd(FString name, float basePrice, int maxCount, int weight, EItemCategory category)
{
	FItemInfo item;
	item.itemSetup(name, basePrice, maxCount, weight, category);
	itemDatabase.Add(item);
}

FString UItemDatabase::GetName(int itemLocation)
{
	return itemDatabase[itemLocation].itemName;
}

FInventoryItem UItemDatabase::GetItem(int itemLocation)
{
	FInventoryItem invItem(itemDatabase[itemLocation].id, itemDatabase[itemLocation].itemName);
	return invItem;
}

FItemInfo UItemDatabase::GetItemInfoViaID(FInventoryItem item)
{
	FItemInfo retItem;
	for (int i = 0; i < itemDatabase.Num(); i++) {
		if (itemDatabase[i].id == item.id) {
			retItem = itemDatabase[i];
			return retItem;
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("item doesnt exist"));
	retItem.ErrorItem(retItem);
	return retItem;
}
