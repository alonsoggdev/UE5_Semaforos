// Fill out your copyright notice in the Description page of Project Settings.


#include "TrafficLight.h"

ATrafficLight::ATrafficLight()
{
	// Set this actor to call Tick() every frame
	PrimaryActorTick.bCanEverTick = true;

	sphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
	sphereCollider->InitSphereRadius(radius);
	sphereCollider->SetupAttachment(RootComponent);

	light = CreateDefaultSubobject<UPointLightComponent>(TEXT("Light"));
	light->SetupAttachment(sphereCollider);
	light->LightColor = FColor::Green;
	light->IntensityUnits = ELightUnits::Lumens;
	light->Intensity = 2000;
	light->SourceRadius = 300;
	light->AttenuationRadius = 200;
}

// Called when the game starts or when spawned
void ATrafficLight::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ATrafficLight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATrafficLight::NotifyActorBeginOverlap(AActor* OtherActor)
{
	//if (GEngine != nullptr) GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, TEXT("Hello from Codded Trigger to ") + OtherActor->GetName());

	Car = Cast<ACar>(OtherActor);

	if (Car) {

		//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, TEXT("Cast Car ") + OtherActor->GetName());

		Car->speed = 0;
		SwitchColor(FColor::Red);

		//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, FString::Printf(TEXT("Direction: %s"), *Car->direction.ToString()));
	}

}

void ATrafficLight::NotifyActorEndOverlap(AActor* OtherActor)
{
	//if (GEngine != nullptr) GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, TEXT("Bye from Codded Trigger to ") + OtherActor->GetName());
}

void ATrafficLight::SwitchColor(FColor color) {
	light->SetLightColor(color);
}


