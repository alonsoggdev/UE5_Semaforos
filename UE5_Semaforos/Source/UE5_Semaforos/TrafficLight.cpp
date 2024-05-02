// Fill out your copyright notice in the Description page of Project Settings.

#include "TrafficLight.h"
#include "Car.h"
#include "Engine/World.h"
#include "TimerManager.h"

ATrafficLight::ATrafficLight()
{
	// Set this actor to call Tick() every frame
	PrimaryActorTick.bCanEverTick = true;

	Car = NULL;

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
	if (CarArray.Num() == 0) SwitchColor(FColor::Green);
	else SwitchColor(FColor::Red);
}

void ATrafficLight::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Car = Cast<ACar>(OtherActor);

	if (Car) {

		ManageCars(Car, true);
		
		if (CarArray.Num() > 1) Car->currentSpeed = 0;
	}

}

void ATrafficLight::NotifyActorEndOverlap(AActor* OtherActor)
{
	Car = Cast<ACar>(OtherActor);

	if (Car) ManageCars(Car, false);
}

void ATrafficLight::SwitchColor(FColor color) {
	light->SetLightColor(color);
}

void ATrafficLight::ManageCars(ACar* newCar, bool add) {
	if (add) CarArray.Emplace(newCar);
	else {
		CarArray.Remove(newCar);
		if (CarArray.Num() != 0) {
			if(waitTime > 0) GetWorld()->GetTimerManager().SetTimer(TimerHandle_DelayedSpeedUpdate, this, &ATrafficLight::DelayedSpeedUpdate, waitTime, false);
			else CarArray[0]->currentSpeed = CarArray[0]->speed;
		}
	}
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, FString::Printf(TEXT("Cars in array: %d"), CarArray.Num()));
}

void ATrafficLight::DelayedSpeedUpdate() {
		CarArray[0]->currentSpeed = CarArray[0]->speed;
}

