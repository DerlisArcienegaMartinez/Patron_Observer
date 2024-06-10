// Fill out your copyright notice in the Description page of Project Settings.


#include "Radar.h"

// Sets default values
ARadar::ARadar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    ReplenishmentPosition = FVector(-450.0f, -910.0f, 214.74f); // Define una posición de reabastecimiento

}

// Called when the game starts or when spawned
void ARadar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARadar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    Notify();
}



void ARadar::Attach(IObservador* Observer)
{
	Observers.AddUnique(Observer);
}

void ARadar::Detach(IObservador* Observer)
{
	Observers.Remove(Observer);
}

void ARadar::Notify()
{
	for (IObservador* Observer : Observers)
	{
		Observer->Update(ReplenishmentPosition);
	}
}

void ARadar::SetReplenishmentPosition(FVector NewPosition)
{
	ReplenishmentPosition = NewPosition; // Implementación de la función
}