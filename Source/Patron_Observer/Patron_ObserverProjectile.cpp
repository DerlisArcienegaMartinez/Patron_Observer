// Copyright Epic Games, Inc. All Rights Reserve

#include "Patron_ObserverProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaTransporte.h"

APatron_ObserverProjectile::APatron_ObserverProjectile() 
{
	// Static reference to the mesh to use for the projectile
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));

	// Create mesh component for the projectile sphere
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
	ProjectileMesh->SetupAttachment(RootComponent);
	ProjectileMesh->BodyInstance.SetCollisionProfileName("Projectile");
	ProjectileMesh->OnComponentHit.AddDynamic(this, &APatron_ObserverProjectile::OnHit);		// set up a notification for when this component hits something
	RootComponent = ProjectileMesh;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
	ProjectileMovement->UpdatedComponent = ProjectileMesh;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.f; // No gravity

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}

void APatron_ObserverProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}

	Destroy();



	//Si la bala impacta a la NaveEnemigaCaza lo elimina

	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
	{
		ANaveEnemigaCaza* NaveEnemigaCaza = Cast<ANaveEnemigaCaza>(OtherActor);
		if (NaveEnemigaCaza)
		{

			// Reducir la energía de la nave enemiga
			float const Cantidad = 10.0f; // Cantidad de daño que inflige la bala
			NaveEnemigaCaza->RecibirDanio(Cantidad);


			// Eliminar la bala
			if (GetOwner() != NULL)
			{
				GetOwner()->Destroy();
			}

			//// Eliminar la nave enemiga
			//NaveEnemigaCaza->Destroy();
		}

		ANaveEnemigaTransporte* NaveEnemigaTransporte = Cast<ANaveEnemigaTransporte>(OtherActor);
		if (NaveEnemigaTransporte)
		{

			// Reducir la energía de la nave enemiga
			float const Cantidad = 10.0f; // Cantidad de daño que inflige la bala

			NaveEnemigaTransporte->RecibirDanio(Cantidad);

			// Eliminar la bala
			if (GetOwner() != NULL)
			{
				GetOwner()->Destroy();
			}

			//// Eliminar la nave enemiga
			//NaveEnemigaCaza->Destroy();
		}
	}
}