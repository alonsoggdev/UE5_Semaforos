// Fill out your copyright notice in the Description page of Project Settings.


#include "TrafficLight.h"
#include "Car.h"

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
	light->Intensity = 4000;
	light->SourceRadius = 350;
	light->AttenuationRadius = 350;
}

// Called when the game starts or when spawned
void ATrafficLight::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ATrafficLight::Tick(float DeltaTime)
{
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, TEXT("Cars in array: ") + CarArray.Num());
	Super::Tick(DeltaTime);
}

void ATrafficLight::NotifyActorBeginOverlap(AActor* OtherActor)
{
	//if (GEngine != nullptr) GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, TEXT("Hello from Codded Trigger to ") + OtherActor->GetName());

	Car = Cast<ACar>(OtherActor);

	if (Car) {

		//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, TEXT("Cast Car ") + OtherActor->GetName());

		
		if (CarArray.Num() != 0) {
			ManageCars(Car);
			Car->currentSpeed = 0;
			SwitchColor(FColor::Red);
		}

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

void ATrafficLight::ManageCars(ACar* Car) {
	CarArray.Emplace(Car);
}


