// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AndroidExampleActor.generated.h"

UCLASS()
class GAMEDEVWEEKENDDEMO_API UAndroidExampleActorComponent : public UActorComponent
{
GENERATED_BODY()

private:
const float MovementSpeed = 2.0f;
const float MovementLimit = 200.f;

public:
	UAndroidExampleActorComponent()
	{
		// Set this actor to call Tick() every frame.  You can turn this off to
		// improve performance if you don't need it.
		PrimaryComponentTick.bCanEverTick = true;
	}

	virtual void BeginPlay() override {
		StartLocation = GetOwner()->GetActorLocation();
	}

	virtual ~UAndroidExampleActorComponent()
	{
	}

public:
	// Called every frame
	FORCEINLINE void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override
	{
		Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

		float RealTimeSeconds = GetOwner()->GetWorld()->GetRealTimeSeconds();
		float Sine = FMath::Sin(RealTimeSeconds * MovementSpeed);
		GetOwner()->SetActorLocation(StartLocation + (MovementLimit * Sine));
	}

private:
	FVector StartLocation;
};

typedef UAndroidExampleActorComponent UExampleActorComponentPlatform;
