// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryItem.h"
#include "ItemDatabase.h"
#include "InventoryComponent.generated.h"

UENUM(BlueprintType)
enum  class EInvType : uint8
{
	E_Default UMETA(DisplayName = ""),
	E_PlayerInv UMETA(DisplayName = "Player Inventory"),
	E_TraderInvFarm UMETA(DisplayName = "Farming Trading Inventory"),
	E_TraderInvIndust UMETA(DisplayName = "Industrial Trading Inventorg"),
	E_TraderInvMining UMETA(DisplayName = "Mining Trading Inventory")
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SPACETRADE_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Inv")
		TArray<FInventoryItem> cargo;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Inv")
		UItemDatabase * database;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Inv")
		int cargoHoldSize = 10;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Money")
		float money = 1500;

	UPROPERTY(BlueprintReadOnly,  VisibleAnywhere, Category = "Money")
		float maxMoney = 999999;

	UPROPERTY(BluePrintReadWrite, EditAnywhere, Category = "inv")
		EInvType invType;

	UPROPERTY(BluePrintReadWrite, EditAnywhere, Category = "inv")
		TArray<int> buyPriceModifiers;

	UPROPERTY(BluePrintReadWrite, EditAnywhere, Category = "inv")
		TArray<int> sellPriceModifiers;

	UFUNCTION(BlueprintCallable)
		void InvCopy(TArray<FInventoryItem> inventory);

	UFUNCTION(BlueprintCallable)
		void InvAdd(TArray<FInventoryItem> inventory);

	UFUNCTION(BlueprintCallable)
		void ItemAdd(int invPos);

	UFUNCTION(BlueprintCallable)
		void ItemRemove(int invPos);

	UFUNCTION(BlueprintCallable)
		int GetCount();

	UFUNCTION(BlueprintCallable)
		int GetItemCount(int invPos);

	UFUNCTION(BlueprintCallable)
		float GetTotalInvPrice();

	UFUNCTION(BlueprintCallable)
		bool CanITrade();

	UFUNCTION(BlueprintCallable)
		bool CanIAdd(FInventoryItem item);

	UFUNCTION(BlueprintCallable)
		FString GetItemName(int invPos);

	UFUNCTION(BlueprintCallable)
		float GetMoney();

	UFUNCTION(BlueprintCallable)
		void BuyItem(int invPos);

	UFUNCTION(BlueprintCallable)
		void SellItem(int invPos);

	UFUNCTION(BlueprintCallable)
		void InitialStock(TArray<int> stock);

	void InvSetUp();


	void InvEmpty();

	bool DatabaseCheck(FInventoryItem itemTocheck);

	FItemInfo GetItemInfoFromDatabase(FInventoryItem itemToGet);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
