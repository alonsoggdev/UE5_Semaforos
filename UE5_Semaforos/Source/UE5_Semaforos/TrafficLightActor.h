// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Components/PointLightComponent.h"
#include "Car.h"
#include "TrafficLightActor.generated.h"

UCLASS()
class UE5_SEMAFOROS_API ATrafficLightActor : public AActor
{
	GENERATED_BODY()
	
public:
    UPROPERTY(EditAnywhere, Category = "Collider")
    class USphereComponent* sphereCollider;

    UPROPERTY(EditAnywhere, Category = "Collider")
    float radius = 350;

    UPROPERTY(EditAnywhere, Category = "Light")
    UPointLightComponent* light;

    UPROPERTY(VisibleAnywhere, Category = "Array")
    TArray<ACar*> CarArray;

    UPROPERTY(EditAnywhere, Category = "Config")
    float waitTime;

    bool isWaiting;

    ACar* Car;

    FTimerHandle TimerHandle_DelayedSpeedUpdate;

    ATrafficLightActor();

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

    UFUNCTION()
    void SwitchColor(FColor color);

    UFUNCTION()
    void ManageCars(ACar* Car, bool add);

    void DelayedSpeedUpdate();

};
