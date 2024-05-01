// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Car.h"
#include "MyTriggerBox.generated.h"

/**
 * 
 */
UCLASS()
class UE5_SEMAFOROS_API AMyTriggerBox : public ATriggerBox
{
	GENERATED_BODY()

public:

    class UBoxComponent* boxCollider;

    FVector size = FVector(10, 10, 10);

    ACar* Car;
    
    // Sets default values for this actor's properties
    AMyTriggerBox();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    UFUNCTION()
    virtual void NotifyActorBeginOverlap(AActor* OtherActor);
    UFUNCTION()
    virtual void NotifyActorEndOverlap(AActor* OtherActor);
};
