// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Core/Public/Misc/Guid.h"
#include "ItemInfo.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EItemCategory : uint8
{
	E_Default UMETA(DisplayName = ""),
	E_Industrial UMETA(DisplayName = "Industrial"),
	E_Mining UMETA(DisplayName = "Mining"),
	E_Farming UMETA(DisplayName = "Farming"),
	E_Chemical UMETA(DisplayName = "Chemical"),
	E_Commercial UMETA(DisplayName = "Comercial")
};

USTRUCT()
struct FItemInfo
{
	GENERATED_USTRUCT_BODY();

	FItemInfo();

public:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item Info")
		FGuid id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
		FString itemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
		float basePrice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
		int maxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
		int weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
		FString icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
		EItemCategory itemCat;

	void ErrorItem(FItemInfo item);

	void itemSetup(FString _itemName, float _basePrice, int _maxCount, int _weight, EItemCategory _itemCat);
	
	
};
