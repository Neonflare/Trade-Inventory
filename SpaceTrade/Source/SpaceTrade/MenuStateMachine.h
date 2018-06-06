// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MenuStateMachine.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStateChangeDelegate, FString, NewState, FString, OldState);

/**
 * 
 */
UCLASS()
class SPACETRADE_API UMenuStateMachine : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "States")
		TArray<FString> States;

	UFUNCTION(BlueprintCallable)
		void SetState(FString desiredstate);

	/** Broadcasts whenever the the state is changed */
	// event declaration

	UPROPERTY(BlueprintAssignable, Category = "StateChange")
		FStateChangeDelegate OnStateChanged;

	UFUNCTION(BlueprintCallable)
		void AddInitialStates(TArray<FString> & initialstates);
private:
	FString CurrentState = "";
	
	
	
};
