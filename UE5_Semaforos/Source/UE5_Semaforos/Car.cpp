// Fill out your copyright notice in the Description page of Project Settings.


#include "Car.h"
#include "Components/BoxComponent.h"


// Sets default values
ACar::ACar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube Mesh"));
	CubeMesh->SetupAttachment(RootComponent);
	CubeMesh->SetSimulatePhysics(true);
	
	// Asignar la malla estática al componente CubeMesh
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("/Engine/BasicShapes/Cube"));
	if (CubeMeshAsset.Succeeded())
	{
		CubeMesh->SetStaticMesh(CubeMeshAsset.Object);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load cube mesh asset!"));
	}
}

// Called when the game starts or when spawned
void ACar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACar::Tick(float DeltaTime){

	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Console"));

	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation() + (direction * speed * 10 * DeltaTime);
	SetActorLocation(NewLocation);

}

