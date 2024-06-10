// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
#include "Kismet/GameplayStatics.h"
#include "Radar.h"
#include "Engine/Engine.h" // Para usar GEngine

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
   
    //MALLA DE LA NAVE
    static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
    mallaNaveEnemiga->SetStaticMesh(malla.Object);

    //VIDA DE LA NAVE 
    energia = 50; // Inicializar la energia que tendra la nave
    resistencia = 30;
    bNeedsReplenishment = false;

    ReplenishmentPosition = FVector(0.0f,0.0f,0.0f);
}
void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();

	//MOVIMIENTOS DE NAVE CAZA
	velocidadMovimiento = 300.0f; //Velocidad predeterminada
	direccionMovimiento = FVector(0.0f, 1.0f, 0.0f);
    PuntoDeOrigen = GetActorLocation(); // Almacenar el punto de origen

    //LIMITES DEL ESCENARIO
    LimiteDerecho = 1870.0f;         //Y
    LimiteInferior = -1950.0f;      //-X
    LimiteIzquierdo = -1870.0f;     //-Y
    LimiteSuperior = 1950.0f;        //X
}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

    //// Mostrar la vida de la nave en la pantalla
    //if (GEngine)
    //{
    //    FString VidaMensaje = FString::Printf(TEXT("Vida de la nave: %.2f"), energia);
    //    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, VidaMensaje);
    //}

    //if (bNeedsReplenishment)
    //{
    //    Mover(DeltaTime);
    //    if (FVector::Dist(GetActorLocation(), ReplenishmentPosition) < 100.0f)
    //    {
    //        energia = 100.0f;
    //        bNeedsReplenishment = false;
    //    }

    //    // Mostrar un mensaje en color azul cuando está en reabastecimiento
    //    if (GEngine)
    //    {
    //        FString ReabastecimientoMensaje = TEXT("Nave en reabastecimiento...");
    //        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, ReabastecimientoMensaje);
    //    }
    //}

    // Mostrar vida actual de la nave en pantalla
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Vida actual: %f"), energia));

    if (bNeedsReplenishment)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Reabasteciendo..."));
        Mover(DeltaTime);
        if (FVector::Dist(GetActorLocation(), ReplenishmentPosition) < 100.0f)
        {
            // Mostrar la cantidad de vida recargada
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Vida Completa"));

            // Recargar vida de 2 en 2
            energia += 2.0f;
            if (energia >= 50.0f)
            {
                energia = 50.0f;
                bNeedsReplenishment = false;

                // Mover de regreso al punto de origen
                direccionMovimiento = (PuntoDeOrigen - GetActorLocation()).GetSafeNormal();
            }
        }
       
    }
    else {
        Mover(DeltaTime);
    }
}



void ANaveEnemigaCaza::Mover(float DeltaTime)
{
    FVector PosicionActual = GetActorLocation();  // Obtener la posición actual del actor

    /* CALCULAR EL DESPLAZAMIENTO BASADO EN LA VELOCIDAD Y TIEMPO TRANSCURRIDO */
    FVector Desplazamiento = direccionMovimiento * velocidadMovimiento * DeltaTime;
    PosicionActual += Desplazamiento;

    /* VERIFICAR LOS LIMITES DEL ESCENARIO Y CAMBIAR LA DIRECCION DE MOVIMIENTO SI ES NECESARIO */
    if (PosicionActual.X < LimiteInferior || PosicionActual.X > LimiteSuperior)
    {
        direccionMovimiento.X *= -1.0f;   // Invertir la dirección en el eje X para rebotar en la pared izquierda o derecha
    }
    if (PosicionActual.Y < LimiteIzquierdo || PosicionActual.Y > LimiteDerecho)
    {
        direccionMovimiento.Y *= -1.0f;   // Invertir la dirección en el eje Y para rebotar en la pared inferior o superior
    }

    SetActorLocation(PosicionActual);   // Establecer la nueva posición del actor

}

void ANaveEnemigaCaza::Destruirse()
{
}

void ANaveEnemigaCaza::RecibirDanio(float Cantidad)
{
    //resistencia -= Cantidad;

    //if (resistencia <= 0)
    //{

    //    energia -= Cantidad;    // Reducir la energía según la cantidad de daño recibido
    //}
    //if (energia <= 0)        // Verificar si la energía llega a cero o menos
    //{
    //    
    //    Destroy();       // La nave ha sido destruida
    //}

    resistencia -= Cantidad;
    if (resistencia <= 0)
    {
        energia -= Cantidad;
    }
    if (energia <= 0)
    {
        Destroy();
    }
    else if (energia < 20.0f && !bNeedsReplenishment)
    {
        AActor* RadarActor = UGameplayStatics::GetActorOfClass(GetWorld(), ARadar::StaticClass());
        if (RadarActor)
        {
            ARadar* Radar = Cast<ARadar>(RadarActor);
            if (Radar)
            {
                Radar->Attach(this);
            }
        }
    }
}

void ANaveEnemigaCaza::Update(FVector NewReplenishmentPosition)
{
    if (energia < 30.0f)
    {
        /*ReplenishmentPosition = NewReplenishmentPosition;
        bNeedsReplenishment = true;*/

        // Dirigir la nave a la posición de reabastecimiento
        ReplenishmentPosition = NewReplenishmentPosition;
        direccionMovimiento = (ReplenishmentPosition - GetActorLocation()).GetSafeNormal();
        bNeedsReplenishment = true;
    }
}