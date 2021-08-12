#include "AndroidOnlineIdentityExample.h"
#include "CoreMinimal.h"
#include "OnlineSubsystem.h"

bool FAndroidOnlineIdentityExample::AutoLogin(int32 LocalUserNum)
{
	UE_LOG(LogOnline, Display, TEXT("Autologin Android overrided: user %d"), LocalUserNum);

	TSharedRef<const FUniqueNetId> UserIdPtr(new FUniqueNetIdExample(TEXT("AndroidUserId")));
	TriggerOnLoginCompleteDelegates(0, true, *UserIdPtr, TEXT("Android Autologin successfully!"));

	return true;
}
