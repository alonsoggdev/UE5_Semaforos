// Fill out your copyright notice in the Description page of Project Settings.


#include "TrafficLightActor.h"
#include "Car.h"
#include "Engine/World.h"
#include "TimerManager.h"

ATrafficLightActor::ATrafficLightActor()
{
	// Set this actor to call Tick() every frame
	PrimaryActorTick.bCanEverTick = true;

	Car = NULL;
	isWaiting = false;

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
void ATrafficLightActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ATrafficLightActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (CarArray.Num() == 0 && !isWaiting) SwitchColor(FColor::Green);
	else if (isWaiting) SwitchColor(FColor::Orange);
	else SwitchColor(FColor::Red);
}

void ATrafficLightActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Car = Cast<ACar>(OtherActor);

	if (Car) {

		ManageCars(Car, true);

		if (CarArray.Num() > 1) Car->currentSpeed = 0;
	}

}

void ATrafficLightActor::NotifyActorEndOverlap(AActor* OtherActor)
{
	Car = Cast<ACar>(OtherActor);

	if (Car) ManageCars(Car, false);
}

void ATrafficLightActor::SwitchColor(FColor color) {
	light->SetLightColor(color);
}

void ATrafficLightActor::ManageCars(ACar* newCar, bool add) {
	if (add) CarArray.Emplace(newCar);
	else {
		CarArray.Remove(newCar);
		if (CarArray.Num() != 0) {
			if (waitTime > 0) {
				isWaiting = true;
				GetWorld()->GetTimerManager().SetTimer(TimerHandle_DelayedSpeedUpdate, this, &ATrafficLightActor::DelayedSpeedUpdate, waitTime, false);
			}
			else CarArray[0]->currentSpeed = CarArray[0]->speed;
		}
	}
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, FString::Printf(TEXT("Cars in array: %d"), CarArray.Num()));
}

void ATrafficLightActor::DelayedSpeedUpdate() {
	isWaiting = false;
	CarArray[0]->currentSpeed = CarArray[0]->speed;
}
