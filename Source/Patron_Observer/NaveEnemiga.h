// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "NaveEnemiga.generated.h"


class UstaticMeshComponent;

UCLASS(Abstract)
class PATRON_OBSERVER_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* mallaNaveEnemiga;


public:	
	// Sets default values for this actor's properties
	ANaveEnemiga();

	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetResistencia() const { return resistencia; }
	
	FORCEINLINE float GetValorDestruccion() const { return valorDestruccion; }
	

	FORCEINLINE float GetEnergia() const { return energia; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }
	FORCEINLINE float GetVelocidadMovimiento() const { return velocidadMovimiento; }
	
	
	FORCEINLINE FVector GetDireccionMovimiento() const { return direccionMovimiento; }



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FVector posicion;
	FVector direccionMovimiento;
	float energia;
	float velocidad;
	float resistencia;
	float valorDestruccion;
	float velocidadMovimiento;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void Mover(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Mover(););
	void Destruirse(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Destruirse(););
	
	void RecibirDanio(float Cantidad) PURE_VIRTUAL(ANaveEnemiga::RecibirDanio(););
	

};
