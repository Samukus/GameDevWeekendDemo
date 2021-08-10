// Fill out your copyright notice in the Description page of Project Settings.


#include "DemoGameInstance.h"
#include "UObject/Class.h"
#include "OnlineSubsystem.h"
#include "Interfaces/OnlineIdentityInterface.h"
#include "ConfigDemonstration.h"

void UDemoGameInstance::Init()
{
    Super::Init();
}

void UDemoGameInstance::Shutdown()
{
    Super::Shutdown();
}

// Config Demo
FString UDemoGameInstance::GetPlatformConfigProperty()
{
    return GetDefault<UConfigDemonstration>()->PlatformProperty;
}

FString UDemoGameInstance::GetDefaultConfigProperty()
{
    return GetDefault<UConfigDemonstration>()->DefaultProperty;
}

// OSS by config Demo
FString UDemoGameInstance::GetNativeOSSServiceName() {
    IOnlineSubsystem* OSS_Native = IOnlineSubsystem::GetByPlatform();
    if (OSS_Native)
    {
        return OSS_Native->GetOnlineServiceName().ToString();
    }
    return TEXT("None");
}

FString UDemoGameInstance::GetDefaultOSSServiceName() {
    IOnlineSubsystem* OSS_Default = IOnlineSubsystem::Get();
    if (OSS_Default) {
        return OSS_Default->GetOnlineServiceName().ToString();
    }
    return TEXT("None");
}

// OSS identity inheritance demo
void UDemoGameInstance::OSSPlatformLoginDemo()
{
    IOnlineSubsystem* OSS_Default = IOnlineSubsystem::Get();
    if (OSS_Default) {
        OSS_Default->GetIdentityInterface()->AutoLogin(0);
    }
}