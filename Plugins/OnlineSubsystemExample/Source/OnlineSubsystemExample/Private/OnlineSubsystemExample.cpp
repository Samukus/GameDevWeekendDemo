// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "OnlineSubsystemExample.h"
#include PREPROCESSOR_TO_STRING(PREPROCESSOR_JOIN(PLATFORM_HEADER_NAME, OnlineIdentityExample.h))

bool FOnlineSubsystemExample::Tick(float DeltaTime)
{
	if (!FOnlineSubsystemImpl::Tick(DeltaTime))
	{
		return false;
	}
	return true;
}

FOnlineSubsystemExample::FOnlineSubsystemExample(FName InInstanceName) : FOnlineSubsystemImpl(EXAMPLE_SUBSYSTEM_NAME, InInstanceName),
      IdentityInterface(new FPlatformOnlineIdentity())
{
}

bool FOnlineSubsystemExample::Init()
{
    UE_LOG(LogOnline, Verbose, TEXT("FOnlineSubsystemExample::Init()"));
	return true;
}

bool FOnlineSubsystemExample::Shutdown()
{
	UE_LOG(LogOnline, Verbose, TEXT("FOnlineSubsystemExample::Shutdown()"));
	FOnlineSubsystemImpl::Shutdown();

	// Destruct the interfaces
#define DESTRUCT_INTERFACE(Interface) \
  if (Interface.IsValid()) {          \
    ensure(Interface.IsUnique());     \
    Interface = nullptr;              \
  }

	DESTRUCT_INTERFACE(IdentityInterface);
	return true;
}

FString FOnlineSubsystemExample::GetAppId() const
{
	return TEXT("");
}

bool FOnlineSubsystemExample::Exec(UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar)
{
	return FOnlineSubsystemImpl::Exec(InWorld, Cmd, Ar);
}

FText FOnlineSubsystemExample::GetOnlineServiceName() const
{
	return FText::FromString("Default OnlineSubsystemExample Implementation");
}

void FOnlineSubsystemExample::ReloadConfigs(const TSet<FString>& ConfigSections)
{
}
