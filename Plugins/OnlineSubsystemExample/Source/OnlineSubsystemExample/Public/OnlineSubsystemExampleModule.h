#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "OnlineSubsystem.h"

/**
 * Online subsystem module class (Example platform implementation)
 */
class FOnlineSubsystemExampleModule : public IModuleInterface
{
public:
	FOnlineSubsystemExampleModule();
	~FOnlineSubsystemExampleModule() = default;

	/** IModuleInterface implementation */
	void StartupModule() override;
	void ShutdownModule() override;

	bool SupportsDynamicReloading() override
	{
		return false;
	}

	bool SupportsAutomaticShutdown() override
	{
		return false;
	}

private:
	// Class responsible for creating instance(s) of the subsystem
	IOnlineFactory* OnlineSubsystemFactory;
};
