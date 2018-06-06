// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MenuStateMachine.h"
#include "ItemDatabase.h"
#include "SpaceTradeGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class SPACETRADE_API USpaceTradeGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	USpaceTradeGameInstance();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMenuStateMachine * StateMachine;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		UItemDatabase * itemDatabase;
	/** virtual function to allow custom GameInstances an opportunity to set up
	what it needs */
	virtual void Init() override;

	UFUNCTION(BlueprintCallable)
		UItemDatabase * GetDatabase();
	
	
	
};
