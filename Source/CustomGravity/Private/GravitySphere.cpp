// Fill out your copyright notice in the Description page of Project Settings.


#include "GravitySphere.h"
#include "Components/SphereComponent.h"

// Sets default values
AGravitySphere::AGravitySphere() :
	billboard { CreateDefaultSubobject<UBillboardComponent>(TEXT("Icon")) },
	collisionSphere { CreateDefaultSubobject<USphereComponent>(TEXT("GravityInfluenceCollision")) }
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set here the sphere radius depending on instance settings.
	collisionSphere->InitSphereRadius(SphereRadius);

	// Set here the billboard.
}

// Called when the game starts or when spawned
void AGravitySphere::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGravitySphere::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

