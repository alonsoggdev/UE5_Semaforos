// Fill out your copyright notice in the Description page of Project Settings.


#include "Car.h"

// Sets default values
ACar::ACar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collider"));
	Cube = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube Mesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));

	if (CubeMeshAsset.Succeeded()) Cube->SetStaticMesh(CubeMeshAsset.Object);

	RootComponent = BoxCollider;

	SetActorEnableCollision(true);

}

// Called when the game starts or when spawned
void ACar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACar::Tick(float DeltaTime){

	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation() + (direction * speed * 10 * DeltaTime);
	SetActorLocation(NewLocation);

}

void ACar::OnBeginOverlap(AActor* ThisActor, AActor* OtherActor) {
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Collision"));

	if (OtherActor->ActorHasTag("Wall")) direction *= -1.0f;
}

