// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "ConfigDemonstration.generated.h"

/**
 * 
 */
UCLASS(Config = ConfigDemo, DefaultConfig)
class GAMEDEVWEEKENDDEMO_API UConfigDemonstration : public UObject {
	GENERATED_BODY()

public:
    UPROPERTY(Config, EditDefaultsOnly)
	FString DefaultProperty = "";

	UPROPERTY(Config, EditDefaultsOnly)
    FString PlatformProperty = "";
};
