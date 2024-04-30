// Fill out your copyright notice in the Description page of Project Settings.


#include "Car.h"
#include "Components/BoxComponent.h"


// Sets default values
ACar::ACar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube Mesh"));
	RootComponent = CubeMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (CubeMeshAsset.Succeeded()) CubeMesh->SetStaticMesh(CubeMeshAsset.Object);

	BoxCollider = CreateDefaultSubobject<UBoxComponent>(FName("Box Collider"));
	BoxCollider->SetupAttachment(CubeMesh);
}

// Called when the game starts or when spawned
void ACar::BeginPlay()
{
	Super::BeginPlay();
	BoxCollider->OnComponentBeginOverlap.AddDynamic(this, &ACar::OverlapBegin);
	BoxCollider->OnComponentEndOverlap.AddDynamic(this, &ACar::OverlapEnd);
	
}

// Called every frame
void ACar::Tick(float DeltaTime){

	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation() + (direction * speed * 10 * DeltaTime);
	SetActorLocation(NewLocation);

}


void ACar::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Collision"));
}


void ACar::OverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
	
}


