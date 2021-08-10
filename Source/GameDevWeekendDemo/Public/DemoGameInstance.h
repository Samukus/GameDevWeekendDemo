// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "DemoGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class GAMEDEVWEEKENDDEMO_API UDemoGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
    virtual void Shutdown() override;
	virtual void Init() override;

public:
	// Config Demo
	UFUNCTION(BlueprintCallable, Category = "Game Dev Weekened Demo",
		DisplayName = "Get Platform Config Property")
	FString GetPlatformConfigProperty();

	UFUNCTION(BlueprintCallable, Category = "Game Dev Weekened Demo",
		DisplayName = "Get Default Config Property")
	FString GetDefaultConfigProperty();

	// OSS by config Demo
	UFUNCTION(BlueprintCallable, Category = "Game Dev Weekened Demo",
		DisplayName = "Get Default OSS Service Name")
	FString GetDefaultOSSServiceName();

	UFUNCTION(BlueprintCallable, Category = "Game Dev Weekened Demo",
		DisplayName = "Get Native OSS Service Name")
	FString GetNativeOSSServiceName();

	// OSS identity inheritance demo
	UFUNCTION(BlueprintCallable, Category = "Game Dev Weekened Demo",
		DisplayName = "OSS Platform Login Demo")
	void OSSPlatformLoginDemo();
};
