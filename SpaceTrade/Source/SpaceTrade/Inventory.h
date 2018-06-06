// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InventoryItem.h"
#include "Runtime/Core/Public/Misc/Guid.h"
#include "Inventory.generated.h"

/**
 * 
 */
UCLASS()
class SPACETRADE_API UInventory : public UObject
{
	GENERATED_BODY()
	
		UInventory();

public:
	
	UPROPERTY(BlueprintReadOnly, Category = "Inventory")
		TArray<FInventoryItem> cargo;

	UPROPERTY(BlueprintReadOnly, Category = "Inventory")
		int cargoHoldSize = 10;

	UFUNCTION(BlueprintCallable)
		void InvCopy();

	UFUNCTION(BlueprintCallable)
		void InvAdd();

	UFUNCTION(BlueprintCallable)
		void ItemAdd();

	UFUNCTION(BlueprintCallable)
		void ItemRemove();

	UFUNCTION(BlueprintCallable)
		int GetCount();

	UFUNCTION(BlueprintCallable)
		int GetItemCount(FGuid id);


//private:

	void InvEmpty();
	
	
};
