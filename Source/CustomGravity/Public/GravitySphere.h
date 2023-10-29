// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GravitySphere.generated.h"

UCLASS()
class CUSTOMGRAVITY_API AGravitySphere : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AGravitySphere();

public:
	float SphereRadius = 10.0f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
