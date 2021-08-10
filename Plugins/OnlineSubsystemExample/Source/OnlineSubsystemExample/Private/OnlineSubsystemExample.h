#pragma once

#include "CoreMinimal.h"
#include "OnlineSubsystemImpl.h"
#include "OnlineSubsystemExampleNames.h"

#define PACKAGE_SCOPE public

class FOnlineIdentityExample;

/** Forward declarations of all interface classes */
typedef TSharedPtr<class FOnlineIdentityExample, ESPMode::ThreadSafe> FOnlineIdentityExamplePtr;

// from OnlineSubsystemTypes.h
TEMP_UNIQUENETIDSTRING_SUBCLASS(FUniqueNetIdExample, EXAMPLE_SUBSYSTEM_NAME);

/**
 * OnlineSubsystemExample - Implementation of the online subsystem for Example services
 */
class FOnlineSubsystemExample : public FOnlineSubsystemImpl
{
public:
	virtual ~FOnlineSubsystemExample() = default;

	virtual IOnlineSessionPtr GetSessionInterface() const override
    {
        return nullptr;
    }
	virtual IOnlineFriendsPtr GetFriendsInterface() const override
    {
        return nullptr;
    }
	virtual IOnlinePartyPtr GetPartyInterface() const override
    {
        return nullptr;
    }
	virtual IOnlineGroupsPtr GetGroupsInterface() const override
    {
        return nullptr;
    }
	virtual IOnlineSharedCloudPtr GetSharedCloudInterface() const override
    {
        return nullptr;
    }
	virtual IOnlineUserCloudPtr GetUserCloudInterface() const override
    {
        return nullptr;
    }
	virtual IOnlineEntitlementsPtr GetEntitlementsInterface() const override
    {
        return nullptr;
    }
	virtual IOnlineLeaderboardsPtr GetLeaderboardsInterface() const override
    {
        return nullptr;
    }
	virtual IOnlineVoicePtr GetVoiceInterface() const override
    {
        return nullptr;
    }
	virtual IOnlineExternalUIPtr GetExternalUIInterface() const override
    {
        return nullptr;
    }
	virtual IOnlineTimePtr GetTimeInterface() const override
    {
        return nullptr;
    }
	virtual IOnlineTitleFilePtr GetTitleFileInterface() const override
    {
        return nullptr;
    }
	virtual IOnlineStorePtr GetStoreInterface() const override
    {
        return nullptr;
    }
	virtual IOnlineStoreV2Ptr GetStoreV2Interface() const override
    {
        return nullptr;
    }
	virtual IOnlinePurchasePtr GetPurchaseInterface() const override
    {
        return nullptr;
    }
	virtual IOnlineEventsPtr GetEventsInterface() const override
    {
        return nullptr;
    }
	virtual IOnlineAchievementsPtr GetAchievementsInterface() const override
    {
        return nullptr;
    }
	virtual IOnlineSharingPtr GetSharingInterface() const override
    {
        return nullptr;
    }
	virtual IOnlineUserPtr GetUserInterface() const override
    {
        return nullptr;
    }
	virtual IOnlineMessagePtr GetMessageInterface() const override
    {
        return nullptr;
    }
	virtual IOnlinePresencePtr GetPresenceInterface() const override
    {
        return nullptr;
    }
	virtual IOnlineChatPtr GetChatInterface() const override
    {
        return nullptr;
    }
	virtual IOnlineStatsPtr GetStatsInterface() const override
    {
        return nullptr;
    }
	virtual IOnlineTurnBasedPtr GetTurnBasedInterface() const override
    {
        return nullptr;
    }
	virtual IOnlineTournamentPtr GetTournamentInterface() const override
    {
        return nullptr;
    }
    virtual IOnlineIdentityPtr GetIdentityInterface() const override
    {
        return StaticCastSharedPtr<IOnlineIdentity>(IdentityInterface);
    }

	virtual bool Init() override;
	virtual bool Shutdown() override;
	virtual FString GetAppId() const override;
	virtual bool Exec(class UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar) override;
	virtual FText GetOnlineServiceName() const override;
	virtual void ReloadConfigs(const TSet<FString>& ConfigSections) override;

	virtual bool Tick(float DeltaTime) override;

PACKAGE_SCOPE:
		/** Only the factory makes instances */
		FOnlineSubsystemExample() = delete;
	explicit FOnlineSubsystemExample(FName InInstanceName);

private:
	/** Interface to the identity registration/auth services */
    FOnlineIdentityExamplePtr IdentityInterface;
};

typedef TSharedPtr<FOnlineSubsystemExample, ESPMode::ThreadSafe> FOnlineSubsystemExamplePtr;
