// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LinuxExampleActor.generated.h"

UCLASS()
class GAMEDEVWEEKENDDEMO_API ULinuxExampleActorComponent : public UActorComponent
{
GENERATED_BODY()

private:
	const float ScaleSpeed = 3.0f;
	const float ScaleMultiplier = 0.75f;

public:
	ULinuxExampleActorComponent()
	{
		// Set this actor to call Tick() every frame.  You can turn this off to
		// improve performance if you don't need it.
		PrimaryComponentTick.bCanEverTick = true;
	}

	virtual void BeginPlay() override
	{
		StartScale = GetOwner()->GetActorScale();
	}

	virtual ~ULinuxExampleActorComponent()
	{
	}

	public:
	// Called every frame
	FORCEINLINE void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override
	{
		Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

		float RealTimeSeconds = GetOwner()->GetWorld()->GetRealTimeSeconds();
		float Sine = FMath::Sin(RealTimeSeconds * ScaleSpeed) + 1;
		GetOwner()->SetActorRelativeScale3D(StartScale + (Sine * ScaleMultiplier));
	}

private:
	FVector StartScale;
};

typedef ULinuxExampleActorComponent UExampleActorComponentPlatform;
