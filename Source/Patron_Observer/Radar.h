// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Observador.h"
#include "Radar.generated.h"

UCLASS()
class PATRON_OBSERVER_API ARadar : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARadar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Attach(IObservador* Observer);
	void Detach(IObservador* Observer);
	void Notify();

	void SetReplenishmentPosition(FVector NewPosition);

private:
	TArray<IObservador*> Observers;
	FVector ReplenishmentPosition;

};
