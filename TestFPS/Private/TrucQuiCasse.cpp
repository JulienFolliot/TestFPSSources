// Fill out your copyright notice in the Description page of Project Settings.


#include "TrucQuiCasse.h"

// Sets default values
ATrucQuiCasse::ATrucQuiCasse()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	VisualMesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));

	VisualMesh->OnComponentHit.AddDynamic(this, &ATrucQuiCasse::OnHit);

	// Log message in the editor console
	UE_LOG(LogTemp, Warning, TEXT("Hey ! ***************************************"));

	if (CubeVisualAsset.Succeeded()) {
		VisualMesh->SetStaticMesh(CubeVisualAsset.Object);
		VisualMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}

}

// Called when the game starts or when spawned
void ATrucQuiCasse::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATrucQuiCasse::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATrucQuiCasse::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Log message in the editor console
	UE_LOG(LogTemp, Warning, TEXT("Cube was hit by a projectile!"));

}
