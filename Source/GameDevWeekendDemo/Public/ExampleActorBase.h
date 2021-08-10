// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include PREPROCESSOR_TO_STRING(PREPROCESSOR_JOIN(PLATFORM_HEADER_NAME, ExampleActor.h))

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExampleActorBase.generated.h"

UCLASS()
class GAMEDEVWEEKENDDEMO_API AExampleActorBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AExampleActorBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY()
	UActorComponent* ExampleActorComponent;
};
