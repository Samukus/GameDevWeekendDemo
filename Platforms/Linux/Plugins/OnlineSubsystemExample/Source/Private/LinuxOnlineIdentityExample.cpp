#include "LinuxOnlineIdentityExample.h"
#include "CoreMinimal.h"
#include "OnlineSubsystem.h"

bool FLinuxOnlineIdentityExample::AutoLogin(int32 LocalUserNum)
{
	UE_LOG(LogOnline, Display, TEXT("Autologin Linux overrided: user %d"), LocalUserNum);

	TSharedRef<const FUniqueNetId> UserIdPtr(new FUniqueNetIdExample(TEXT("LinuxUserId")));
	TriggerOnLoginCompleteDelegates(0, true, *UserIdPtr, TEXT("Linux Autologin successfully!"));

	return true;
}
