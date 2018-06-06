// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Core/Public/Misc/Guid.h"
#include "InventoryItem.generated.h"

/**
 * 
 */
USTRUCT()
struct FInventoryItem
{
	GENERATED_USTRUCT_BODY()

		FInventoryItem();

		FInventoryItem(FGuid itemID, FString itemName);
	
		FGuid id;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Amount")
		int count;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item Info")
		FString name;
		
	
	
};
