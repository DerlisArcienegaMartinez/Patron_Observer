// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.generated.h"

/**
 * 
 */
UCLASS()
class PATRON_OBSERVER_API ANaveEnemigaTransporte : public ANaveEnemiga
{
	GENERATED_BODY()

private:
    float combustible;//cuanto de combustible tiene la nave
    float blindaje;//protege la nave de daños del player

protected:

    virtual void BeginPlay() override;

public:
    ANaveEnemigaTransporte();
    //LLamar a cada fotograma
    virtual void Tick(float DeltaTime) override;

    virtual void Mover(float DeltaTime);
   
    virtual void RecibirDanio(float Cantidad);
};
