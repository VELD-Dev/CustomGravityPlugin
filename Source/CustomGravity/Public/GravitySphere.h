// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Components/BillboardComponent.h"

#include "GravitySphere.generated.h"

UCLASS()
class CUSTOMGRAVITY_API AGravitySphere : public AActor
{
	GENERATED_BODY()

private:
	UBillboardComponent* billboard;

private:
	USphereComponent* collisionSphere;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="GravitySphere")
	float SphereRadius = 16.0f;

public:	
	// Sets default values for this actor's properties
	AGravitySphere();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
