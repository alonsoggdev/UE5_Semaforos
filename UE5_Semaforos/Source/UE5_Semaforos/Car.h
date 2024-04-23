// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"

#include "Car.generated.h"

UCLASS()
class UE5_SEMAFOROS_API ACar : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACar();

	UPROPERTY(EditAnywhere, Category = "Movement")
	FVector direction;
	UPROPERTY(EditAnywhere, Category = "Movement")
	float speed;

	UPROPERTY(EditAnywhere, Category = "Components")
	UBoxComponent* BoxCollider;
	UPROPERTY(EditAnywhere, Category = "Components")
	UStaticMeshComponent* Cube;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void OnHit(UPrimitiveComponent* HitComp, AActor* Other, UPrimitiveComponent OtherComp);

};
