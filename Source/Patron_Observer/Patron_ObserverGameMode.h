// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Patron_ObserverGameMode.generated.h"

class ARadar;
class ANaveEnemigaCaza;
class ANaveEnemigaTransporte;

UCLASS(MinimalAPI)
class APatron_ObserverGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APatron_ObserverGameMode();

public:
	 void BeginPlay() override;

private:
	ARadar* Radar;
};





