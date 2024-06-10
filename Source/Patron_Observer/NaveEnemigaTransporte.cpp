// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"

ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	
    static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
    mallaNaveEnemiga->SetStaticMesh(malla.Object);
}

void ANaveEnemigaTransporte::BeginPlay()
{
	Super::BeginPlay();

	direccionMovimiento = FVector(-1.0f, 0.0, 0.0f);
	velocidadMovimiento = 150.0f;

	//VIDA DE LA NAVE 
	energia = 50; // Inicializar la energia que tendra la nave
	resistencia = 30;

}

void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaTransporte::RecibirDanio(float Cantidad)
{
	resistencia -= Cantidad;

	if (blindaje <= 0)
	{
		energia -= Cantidad;    // Reducir el combustible según la cantidad de daño recibido
	}
	if (energia <= 0)        // Verificar si el combustible llega a cero o menos
	{
		
		Destroy();       // La nave ha sido destruida
	}
}

void ANaveEnemigaTransporte::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();  // Obtener la posición actual del actor

		/* CALCULAR EL DESPLAZAMIENTO BASADO EN LA VELOCIDAD Y DIRECCION TRANSCURRIDO */
	FVector Desplazamiento = direccionMovimiento * velocidadMovimiento * DeltaTime;
	PosicionActual += Desplazamiento;


	SetActorLocation(PosicionActual);   // Establecer la nueva posición del actor
}
