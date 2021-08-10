// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "OnlineSubsystemExampleModule.h"
#include "OnlineSubsystemExample.h"
#include "OnlineSubsystemModule.h"

#define LOCTEXT_NAMESPACE "FOnlineSubsystemExampleModule"

/**
  * Class responsible for creating instance(s) of the subsystem
  */
class FOnlineFactoryExample : public IOnlineFactory
{
public:
	FOnlineFactoryExample() = default;
	~FOnlineFactoryExample() = default;

	IOnlineSubsystemPtr CreateSubsystem(FName InstanceName) override
	{
		FOnlineSubsystemExamplePtr OnlineSub = MakeShared<FOnlineSubsystemExample, ESPMode::ThreadSafe>(InstanceName);

		if (OnlineSub->IsEnabled())
		{
			if (!OnlineSub->Init())
			{
				UE_LOG(LogOnline, Error, TEXT("Example OnlineSubsystem failed to initialize"));

				OnlineSub->Shutdown();
				OnlineSub = nullptr;
			}
		}
		else
		{
			UE_LOG(LogOnline, Error, TEXT("Example OnlineSubsystem is disabled (IsEnabled() returned false)"));

			OnlineSub->Shutdown();
			OnlineSub = nullptr;
		}

		return OnlineSub;
	}
};

FOnlineSubsystemModule& GetOnlineSubsystemModule()
{
	const FName OnlineSubsystemName("OnlineSubsystem");

	return FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(OnlineSubsystemName);
}

FOnlineSubsystemExampleModule::FOnlineSubsystemExampleModule() : OnlineSubsystemFactory(nullptr)
{
}

void FOnlineSubsystemExampleModule::StartupModule()
{
	OnlineSubsystemFactory = new FOnlineFactoryExample();

	// Create and register our singleton factory with the main online subsystem for easy access
	FOnlineSubsystemModule& OnlineSubsystemModule = GetOnlineSubsystemModule();
        OnlineSubsystemModule.RegisterPlatformService(EXAMPLE_SUBSYSTEM_NAME,
                                                      OnlineSubsystemFactory);

        UE_LOG(LogOnline, Display,
               TEXT("Example OnlineSubsystem module started!"));
}

void FOnlineSubsystemExampleModule::ShutdownModule() {
  FOnlineSubsystemModule& OnlineSubsystemModule = GetOnlineSubsystemModule();
  OnlineSubsystemModule.UnregisterPlatformService(EXAMPLE_SUBSYSTEM_NAME);

	delete OnlineSubsystemFactory;
	OnlineSubsystemFactory = nullptr;

	UE_LOG(LogOnline, Display, TEXT("Example OnlineSubsystem module shutdown!"));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FOnlineSubsystemExampleModule, OnlineSubsystemExample)
