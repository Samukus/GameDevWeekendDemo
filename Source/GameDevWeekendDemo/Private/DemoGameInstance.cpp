// Fill out your copyright notice in the Description page of Project Settings.


#include "DemoGameInstance.h"
#include "UObject/Class.h"
#include "Interfaces/OnlineIdentityInterface.h"
#include "ConfigDemonstration.h"

void UDemoGameInstance::Init() {
  Super::Init();

  OSS_Native = IOnlineSubsystem::GetByPlatform();
  OSS_Default = IOnlineSubsystem::Get();

  if (OSS_Default)
  {
    OSS_Default->GetIdentityInterface()->AddOnLoginCompleteDelegate_Handle(0, FOnLoginCompleteDelegate::CreateUObject(this, &UDemoGameInstance::OnLoginComplete));
  }
}

void UDemoGameInstance::Shutdown()
{
    Super::Shutdown();
}

void UDemoGameInstance::OnLoginComplete(int32 LocalUserNum, bool bWasSuccessful,
                     const FUniqueNetId& UserId, const FString& Error)
{
    LogEventDelegate.Broadcast(FString::Format(TEXT("Autologin[{0}]: {1}, {2}\n"),
        {UserId.ToString(), bWasSuccessful ? TEXT("Succesfull") : TEXT("Error"), Error}));
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
    if (OSS_Native)
    {
        return OSS_Native->GetOnlineServiceName().ToString();
    }
    return TEXT("None");
}

FString UDemoGameInstance::GetDefaultOSSServiceName() {
    if (OSS_Default) {
        return OSS_Default->GetOnlineServiceName().ToString();
    }
    return TEXT("None");
}

// OSS identity inheritance demo
void UDemoGameInstance::OSSPlatformLoginDemo()
{
    if (OSS_Default) {
        OSS_Default->GetIdentityInterface()->AutoLogin(0);
    }
}