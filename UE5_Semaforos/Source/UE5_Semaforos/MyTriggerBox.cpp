// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTriggerBox.h"

AMyTriggerBox::AMyTriggerBox()
{
    // Set this actor to call Tick() every frame
    PrimaryActorTick.bCanEverTick = true;

    boxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));

    boxCollider->SetBoxExtent(size);

    boxCollider->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AMyTriggerBox::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AMyTriggerBox::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AMyTriggerBox::NotifyActorBeginOverlap(AActor* OtherActor)
{

	Car = Cast<ACar>(OtherActor);

	if (Car) Car->direction *= -1;
}
