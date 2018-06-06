// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "SpaceTradeGameMode.h"
#include "SpaceTradeCharacter.h"

ASpaceTradeGameMode::ASpaceTradeGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ASpaceTradeCharacter::StaticClass();	

}
