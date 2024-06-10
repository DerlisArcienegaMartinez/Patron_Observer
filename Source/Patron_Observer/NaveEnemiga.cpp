// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"
#include "Patron_ObserverPawn.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"

// Sets default values
ANaveEnemiga::ANaveEnemiga()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh")); //Crear el componente de malla
    mallaNaveEnemiga->SetupAttachment(RootComponent); // configurando el componente mallaNaveEnemiga como un subcomponente 
    RootComponent = mallaNaveEnemiga; // estableciendo el componente mallaNaveEnemiga como el componente ra�z del actor.
}

// Called when the game starts or when spawned
void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
