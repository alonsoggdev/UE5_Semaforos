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
	//if (GEngine != nullptr) GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, TEXT("Hello from Codded Trigger to ") + OtherActor->GetName());

	Car = Cast<ACar>(OtherActor);

	if (Car) {

		//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, TEXT("Cast Car ") + OtherActor->GetName());

		Car->direction *= -1;

		//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, FString::Printf(TEXT("Direction: %s"), *Car->direction.ToString()));
	}

}

void AMyTriggerBox::NotifyActorEndOverlap(AActor* OtherActor)
{
	//if (GEngine != nullptr) GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, TEXT("Bye from Codded Trigger to ") + OtherActor->GetName());
}

