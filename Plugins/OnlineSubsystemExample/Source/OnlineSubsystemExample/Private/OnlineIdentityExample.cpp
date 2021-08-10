#include "OnlineIdentityExample.h"
#include "OnlineSubsystemExample.h"

bool FOnlineIdentityExample::Login(
    int32 LocalUserNum, const FOnlineAccountCredentials& AccountCredentials)
{
    return false;
}

bool FOnlineIdentityExample::Logout(int32 LocalUserNum)
{
    return false;
}

bool FOnlineIdentityExample::AutoLogin(int32 LocalUserNum)
{
    return false;
}

TSharedPtr<FUserOnlineAccount> FOnlineIdentityExample::GetUserAccount(
    const FUniqueNetId& UserId) const
{
    return nullptr;
}

TArray<TSharedPtr<FUserOnlineAccount>>
FOnlineIdentityExample::GetAllUserAccounts()
    const
{
    return TArray<TSharedPtr<FUserOnlineAccount>>();
}

TSharedPtr<const FUniqueNetId>
FOnlineIdentityExample::GetUniquePlayerId(
    int32 LocalUserNum) const
{
    return nullptr;
}

TSharedPtr<const FUniqueNetId>
FOnlineIdentityExample::CreateUniquePlayerId(
    uint8* Bytes, int32 Size)
{
    return nullptr;
}

TSharedPtr<const FUniqueNetId>
FOnlineIdentityExample::CreateUniquePlayerId(
    const FString& Str)
{
    return nullptr;
}

ELoginStatus::Type FOnlineIdentityExample::GetLoginStatus(
    int32 LocalUserNum) const
{
    return ELoginStatus::NotLoggedIn;
}

ELoginStatus::Type FOnlineIdentityExample::GetLoginStatus(
    const FUniqueNetId& UserId) const
{
    return ELoginStatus::NotLoggedIn;
}

FString FOnlineIdentityExample::GetPlayerNickname(int32 LocalUserNum) const
{
    return TEXT("");
}

FString FOnlineIdentityExample::GetPlayerNickname(
    const FUniqueNetId& UserId) const
{
    return TEXT("");
}

FString FOnlineIdentityExample::GetAuthToken(
    int32 LocalUserNum) const
{
    return TEXT("");
}

void FOnlineIdentityExample::RevokeAuthToken(
    const FUniqueNetId& UserId,
    const FOnRevokeAuthTokenCompleteDelegate& Delegate)
{
}

void FOnlineIdentityExample::GetUserPrivilege(
    const FUniqueNetId& UserId, EUserPrivileges::Type Privilege,
    const FOnGetUserPrivilegeCompleteDelegate& Delegate)
{
}

FPlatformUserId
FOnlineIdentityExample::GetPlatformUserIdFromUniqueNetId(
    const FUniqueNetId& UniqueNetId) const
{
    return FPlatformUserId();
}

FString FOnlineIdentityExample::GetAuthType() const
{
    return TEXT("");
}
