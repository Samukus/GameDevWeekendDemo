// Fill out your copyright notice in the Description page of Project Settings.


#include "ExampleActorBase.h"

// Sets default values
AExampleActorBase::AExampleActorBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ExampleActorComponent =
            CreateDefaultSubobject<UExampleActorComponentPlatform>(
                "PlatformExampleActorComponent");
}

// Called when the game starts or when spawned
void AExampleActorBase::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AExampleActorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

