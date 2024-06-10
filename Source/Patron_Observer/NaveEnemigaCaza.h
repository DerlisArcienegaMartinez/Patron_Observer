// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "Observador.h"
#include "NaveEnemigaCaza.generated.h"

/**
 * 
 */
UCLASS()
class PATRON_OBSERVER_API ANaveEnemigaCaza : public ANaveEnemiga, public IObservador
{
	GENERATED_BODY()



protected:
	//Se llama cuando el juego comienza o cuando se genera
	virtual void BeginPlay() override;


public:
	UPROPERTY()
		float LimiteIzquierdo;
	float LimiteDerecho;
	float LimiteInferior;
	float LimiteSuperior;

public:
    ANaveEnemigaCaza();

	//llamar a cada fotograma
	virtual void Tick(float DeltaTime) override;

	void RecibirDanio(float Cantidad);


	virtual void Update(FVector NewReplenishmentPosition) override;

protected:
	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	
private:
	FVector PuntoDeOrigen;
	bool bNeedsReplenishment;
	FVector ReplenishmentPosition;
	 
};
