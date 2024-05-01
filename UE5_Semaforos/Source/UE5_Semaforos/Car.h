// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Car.generated.h"

UCLASS()
class UE5_SEMAFOROS_API ACar : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACar();

	UPROPERTY(EditAnywhere, Category = "Movement")
	FVector direction = FVector(0, 1, 0);
	UPROPERTY(EditAnywhere, Category = "Movement")
	float speed = 100;

	UPROPERTY(EditAnywhere, Category = "Params")
	UStaticMeshComponent* CubeMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
