#include "WindowsOnlineIdentityExample.h"
#include "CoreMinimal.h"
#include "OnlineSubsystem.h"

bool FWindowsOnlineIdentityExample::AutoLogin(int32 LocalUserNum)
{
	UE_LOG(LogOnline, Display, TEXT("Autologin Windows overrided: user %d"), LocalUserNum);

	TSharedRef<const FUniqueNetId> UserIdPtr(new FUniqueNetIdExample(TEXT("WindowsUserId")));
	TriggerOnLoginCompleteDelegates(0, true, *UserIdPtr, TEXT("Windows Autologin successfully!"));

	return true;
}
