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
	Super::Tick(DeltaTime);
}

void ATrafficLight::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Car = Cast<ACar>(OtherActor);

	if (Car) {

		ManageCars(Car, true);
		
		if (CarArray.Num() > 1) {
			Car->currentSpeed = 0;
			//SwitchColor(FColor::Red);
		}
	}

}

void ATrafficLight::NotifyActorEndOverlap(AActor* OtherActor)
{
	Car = Cast<ACar>(OtherActor);

	if (Car) {
		ManageCars(Car, false);
	}
}

void ATrafficLight::SwitchColor(FColor color) {
	light->SetLightColor(color);
}

void ATrafficLight::ManageCars(ACar* newCar, bool add) {
	if (add) CarArray.Emplace(newCar);
	else {
		CarArray.Remove(newCar);
		if (CarArray.Num() != 0) CarArray[0]->currentSpeed = CarArray[0]->speed;
	}
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, FString::Printf(TEXT("Cars in array: %d"), CarArray.Num()));
}


