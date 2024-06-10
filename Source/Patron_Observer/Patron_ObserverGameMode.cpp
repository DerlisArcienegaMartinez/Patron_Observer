// Copyright Epic Games, Inc. All Rights Reserved.

#include "Patron_ObserverGameMode.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaTransporte.h"
#include "Patron_ObserverPawn.h"
#include "Radar.h"
#include "Engine/World.h"

APatron_ObserverGameMode::APatron_ObserverGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = APatron_ObserverPawn::StaticClass();
}

void APatron_ObserverGameMode::BeginPlay()
{
    Super::BeginPlay();

	UWorld* World = GetWorld();
	if (World)
	{

		FVector RadarLocation(100.0f, 100.0f, 214.72f);
		FRotator RadarRotation(0.0f, 0.0f, 0.0f);
		Radar = World->SpawnActor<ARadar>(RadarLocation, RadarRotation);
		Radar->SetReplenishmentPosition(FVector(100.0f, 100.0f, 214.72f));



		FVector EnemySpawnLocation(600.0f, -500.0f, 214.72f);
		FRotator EnemySpawnRotation(0.0f, 90.0f, 0.0f);

		for (int i = 0; i < 5; ++i)
		{
			ANaveEnemigaCaza* EnemyCaza = World->SpawnActor<ANaveEnemigaCaza>(EnemySpawnLocation, EnemySpawnRotation);

			if (EnemyCaza && Radar)
			{
				Radar->Attach(EnemyCaza);
			}

			EnemySpawnLocation.Y += 300.0f;
		}

		EnemySpawnLocation.X -= 150.0f;
		EnemySpawnLocation.Y = -500.0f;

		/*for (int i = 0; i < 5; ++i)
		{
			ANaveEnemigaTransporte* EnemyTransporte = World->SpawnActor<ANaveEnemigaTransporte>(EnemySpawnLocation, EnemySpawnRotation);
			if (EnemyTransporte && Radar)
			{
				Radar->Attach(EnemyTransporte);
			}
			EnemySpawnLocation.Y += 300.0f;
		}*/
	}

}