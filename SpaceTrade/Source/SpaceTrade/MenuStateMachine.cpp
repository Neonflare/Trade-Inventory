// Fill out your copyright notice in the Description page of Project Settings.

#include "MenuStateMachine.h"

// blueprint callable function to transition the state.. does a tiny bit of logic to make sure the state is valid
// but the usage here is really only for signaling change in state instigated elsewhere!
// I wouldn't call this a "proper" state machine class!
void UMenuStateMachine::SetState(FString desiredstate)
{
	// only transition to the new state if it is not the current state and it is in the array of acceptable states
		if (States.Contains(desiredstate) && !desiredstate.Equals(CurrentState, ESearchCase::IgnoreCase))
	{
		// tell everything that we are transitioning the state now
		OnStateChanged.Broadcast(desiredstate, CurrentState);
		// and update the current state
		CurrentState = desiredstate;
	}
}
// function to allow us to setup the initial states
void UMenuStateMachine::AddInitialStates(TArray<FString> & initialstates)
{
	States = initialstates;
}


