// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTriggerBox.h"

AMyTriggerBox::AMyTriggerBox()
{
    // Set this actor to call Tick() every frame
    PrimaryActorTick.bCanEverTick = true;

    // Bind the overlap event
    OnActorBeginOverlap.AddDynamic(this, &AMyTriggerBox::OnOverlapBegin);
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

void AMyTriggerBox::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
    // Check if the overlapped actor is the object you want to react to
    if (OtherActor && OtherActor != this)
    {
        // Perform actions when the object overlaps with this trigger box
        // For example, print a message
        UE_LOG(LogTemp, Warning, TEXT("Object overlapped with trigger box!"));
    }
}
