// Fill out your copyright notice in the Description page of Project Settings.

#include "ItemInfo.h"

FItemInfo::FItemInfo() 
{
	id.NewGuid();
	itemName = "";
	basePrice = 0.0f;
	maxCount = 1;
	icon = "";
	itemCat = EItemCategory::E_Default;
}

void FItemInfo::ErrorItem(FItemInfo item)
{
	item.id = id.NewGuid();
	item.itemName + "Error";
	item.basePrice = 0.0f;
	item.maxCount = 1;
	item.icon = " ";
	item.itemCat = EItemCategory::E_Default;
}

void FItemInfo::itemSetup(FString _itemName, float _basePrice, int _maxCount, int _weight, EItemCategory _itemCat)
{
	itemName = _itemName;
	basePrice = _basePrice;
	weight = _weight;
	maxCount = _maxCount;
	itemCat = _itemCat;
}


