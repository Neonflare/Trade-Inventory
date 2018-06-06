// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemInfo.h"
#include "InventoryItem.h"
#include "UObject/NoExportTypes.h"
#include "ItemDatabase.generated.h"

/**
 * 
 */
UCLASS()
class SPACETRADE_API UItemDatabase : public UObject
{
	GENERATED_BODY()
	
public:

	UItemDatabase();

	UPROPERTY(VisibleAnywhere, BluePrintReadOnly)
		TArray<FItemInfo> itemDatabase;

	UPROPERTY()
		EItemCategory category;


	UFUNCTION(BlueprintCallable)
		void ItemAdd(FString name, float basePrice, int maxCount, int weight, EItemCategory _category);

	UFUNCTION(BlueprintCallable)
		FString GetName(int itemLocation);

	UFUNCTION(BlueprintCallable)
		FInventoryItem GetItem(int itemLocation);

	UFUNCTION(BlueprintCallable)
		FItemInfo GetItemInfoViaID(FInventoryItem item);
};
