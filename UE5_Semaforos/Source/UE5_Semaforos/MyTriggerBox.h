// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "MyTriggerBox.generated.h"

/**
 * 
 */
UCLASS()
class UE5_SEMAFOROS_API AMyTriggerBox : public ATriggerBox
{
	GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AMyTriggerBox();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    // Called when this actor overlaps another actor
    UFUNCTION()
    void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;	
};
