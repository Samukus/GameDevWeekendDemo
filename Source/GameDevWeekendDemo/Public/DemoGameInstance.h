// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "OnlineSubsystem.h"
#include "DemoGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class GAMEDEVWEEKENDDEMO_API UDemoGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLogEvent, const FString, Message);

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

	UPROPERTY(BlueprintAssignable)
	FLogEvent LogEventDelegate;

private:
	IOnlineSubsystem* OSS_Default;
	IOnlineSubsystem* OSS_Native;

	void OnLoginComplete(int32 LocalUserNum, bool bWasSuccessful, const FUniqueNetId& UserId, const FString& Error);
};
