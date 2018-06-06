// Fill out your copyright notice in the Description page of Project Settings.

#include "InventoryComponent.h"


// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}




void UInventoryComponent::InvCopy(TArray<FInventoryItem> inventory)
{
	for (int i = 0; i < cargo.Num(); i++) 
	{
		if (cargo[i].id.IsValid() ) {
			if (inventory[i].id.IsValid()) {
				cargo[i] = inventory[i];
			}
			else {
				return;
			}
		}
		else {
			return;
		}
	}
}

void UInventoryComponent::InvAdd(TArray<FInventoryItem> inventory)
{
	for (int i = 0; i < cargo.Num(); i++) 
	{
		if (!cargo[i].id.IsValid()) {
			cargo[i] = inventory[i];
		}
	}
}

void UInventoryComponent::ItemAdd(int invPos)
{
	if (GetItemCount(invPos) != database->itemDatabase[invPos].maxCount) {
		cargo[invPos].count += 1;
	}
}

void UInventoryComponent::ItemRemove(int invPos)
{
	if (GetItemCount(invPos) != 0) {
		cargo[invPos].count -= 1;
	}
}

int UInventoryComponent::GetCount()
{
	return cargo.Num();
}

int UInventoryComponent::GetItemCount(int invPos)
{
	int itemCount = cargo[invPos].count;
	return itemCount;
}

float UInventoryComponent::GetTotalInvPrice()
{
	float totalprice = 0.0f;
	float itemPrice = 0.0f;
	FItemInfo iteminfo;
	for (int i = 0; i < cargo.Num(); i++) {
		iteminfo = database->GetItemInfoViaID(cargo[i]);
		itemPrice = cargo[i].count * iteminfo.basePrice;
		totalprice += itemPrice;
	}
	return totalprice;
}

bool UInventoryComponent::CanITrade()
{
	int count = 0;
	bool canITrade;
	for (int i = 0; i < cargo.Num(); i++) {
		for (int j = 0; j < database->itemDatabase.Num(); j++) {
			bool match;
			if (cargo[i].id == database->itemDatabase[j].id) {
				match = true;
			}
			if (match) {
				count++;
			}
			if (count >= cargo.Num()) {
				canITrade = false;
			}
			else {
				canITrade = true;
			}
		}
		
	}
	return canITrade;
}

bool UInventoryComponent::CanIAdd(FInventoryItem item)
{
	for (int i = 0; i < cargo.Num(); i++)
	{
		if (item.id == cargo[i].id) {
			for (int j = 0; j < database->itemDatabase.Num(); j++) {
				if (cargo[i].id == database->itemDatabase[j].id) {
					if(item.count < database->itemDatabase[j].maxCount) {
						return true;
					}
				}
			}
		}
	}
	return false;
}

FString UInventoryComponent::GetItemName(int invPos)
{
	FString itemName = cargo[invPos].name;
	return itemName;
}

float UInventoryComponent::GetMoney()
{
	return money;
}

void UInventoryComponent::BuyItem(int invPos)
{
	if (money >= database->itemDatabase[invPos].basePrice) {
		if (GetItemCount(invPos) != database->itemDatabase[invPos].maxCount) {
			float itemPrice = database->itemDatabase[invPos].basePrice;
			money -= itemPrice;
			ItemAdd(invPos);
		}
	}
}

void UInventoryComponent::SellItem(int invPos)
{
	if (money < maxMoney) {
		if (GetItemCount(invPos) != 0) {
			float itemPrice = database->itemDatabase[invPos].basePrice;
			money += itemPrice;
			ItemRemove(invPos);
		}
	}
}

void UInventoryComponent::InitialStock( TArray<int> stock)
{
	for (int i = 0; i < cargo.Num(); i++) {
		cargo[i].count = stock[i];
	}
}

void UInventoryComponent::InvSetUp()
{
	//fertiliser
	cargo[0].id = database->itemDatabase[0].id;
	cargo[0].name = database->itemDatabase[0].itemName;

	//food20
	cargo[1].id = database->itemDatabase[1].id;
	cargo[1].name = database->itemDatabase[1].itemName;

	//steel
	cargo[2].id = database->itemDatabase[2].id;
	cargo[2].name = database->itemDatabase[2].itemName;

	//tools
	cargo[3].id = database->itemDatabase[3].id;
	cargo[3].name = database->itemDatabase[3].itemName;

	//clothes
	cargo[4].id = database->itemDatabase[4].id;
	cargo[4].name = database->itemDatabase[4].itemName;

	//toys
	cargo[5].id = database->itemDatabase[5].id;
	cargo[5].name = database->itemDatabase[5].itemName;

	//sulfur
	cargo[6].id = database->itemDatabase[6].id;
	cargo[6].name = database->itemDatabase[6].itemName;

	//acid
	cargo[7].id = database->itemDatabase[7].id;
	cargo[7].name = database->itemDatabase[7].itemName;

	//Explosives
	cargo[8].id = database->itemDatabase[8].id;
	cargo[8].name = database->itemDatabase[8].itemName;

	//iron ore
	cargo[9].id = database->itemDatabase[9].id;
	cargo[9].name = database->itemDatabase[9].itemName;
}




void UInventoryComponent::InvEmpty()
{
	cargo.Empty();

}

bool UInventoryComponent::DatabaseCheck(FInventoryItem itemToCheck)
{
	for (int i = 0; i < database->itemDatabase.Num(); i++) {
		if (itemToCheck.id == database->itemDatabase[i].id) {
			return true;
		}
	}
	return false;
}

FItemInfo UInventoryComponent::GetItemInfoFromDatabase(FInventoryItem itemToGet)
{
	if (DatabaseCheck(itemToGet)) {
		for (int i = 0; i < database->itemDatabase.Num(); i++) {
			if (itemToGet.id == database->itemDatabase[i].id) {
				return database->itemDatabase[i];
			}
		}
	}
	return FItemInfo();
}

// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	database = ConstructObject<UItemDatabase>(UItemDatabase::StaticClass());
	cargo.Empty();
	cargo.SetNumZeroed(cargoHoldSize);
	InvSetUp();
}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

