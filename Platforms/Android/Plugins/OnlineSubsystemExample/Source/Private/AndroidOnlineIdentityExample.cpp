#include "AndroidOnlineIdentityExample.h"
#include "CoreMinimal.h"
#include "OnlineSubsystem.h"

bool FAndroidOnlineIdentityExample::AutoLogin(int32 LocalUserNum)
{
	UE_LOG(LogOnline, Display, TEXT("Autologin Android overrided: user %d"), LocalUserNum);

	return true;
}
