// Fill out your copyright notice in the Description page of Project Settings.

#include "InventoryItem.h"

FInventoryItem::FInventoryItem()
{
}

FInventoryItem::FInventoryItem(FGuid itemID, FString itemName)
{
	id = itemID;
	count = 1;
	name = itemName;
}
