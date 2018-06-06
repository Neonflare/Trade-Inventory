// Fill out your copyright notice in the Description page of Project Settings.

#include "SpaceTradeGameInstance.h"

USpaceTradeGameInstance::USpaceTradeGameInstance()
{

}

void USpaceTradeGameInstance::Init()
{
	// note: this doesn't use C++'s "new" but the unreal one!
	StateMachine = NewObject<UMenuStateMachine>(this);

	itemDatabase = NewObject<UItemDatabase>(this);

	// call the super after we&#39;ve setup our state machine
	Super::Init();
}

UItemDatabase * USpaceTradeGameInstance::GetDatabase()
{
	return itemDatabase;
}


