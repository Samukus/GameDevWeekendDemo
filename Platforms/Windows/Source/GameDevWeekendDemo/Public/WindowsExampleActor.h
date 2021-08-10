// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WindowsExampleActor.generated.h"

UCLASS()
class GAMEDEVWEEKENDDEMO_API UWindowsExampleActorComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	const float RotationSpeed = 50.0f;

public:
	UWindowsExampleActorComponent()
	{
		// Set this actor to call Tick() every frame.  You can turn this off to
		// improve performance if you don't need it.
		PrimaryComponentTick.bCanEverTick = true;
	}

	virtual ~UWindowsExampleActorComponent()
	{
	}

public:
	// Called every frame
	FORCEINLINE void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override
	{
		Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

		FRotator NewRotation = FRotator(0.0f, DeltaTime * RotationSpeed, 0.0f);
		FQuat QuatRotation = FQuat(NewRotation);
		GetOwner()->AddActorLocalRotation(QuatRotation);
	}
};

typedef UWindowsExampleActorComponent UExampleActorComponentPlatform;
