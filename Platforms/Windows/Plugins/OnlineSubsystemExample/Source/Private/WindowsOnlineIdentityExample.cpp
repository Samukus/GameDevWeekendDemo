#include "WindowsOnlineIdentityExample.h"
#include "CoreMinimal.h"
#include "OnlineSubsystem.h"

bool FWindowsOnlineIdentityExample::AutoLogin(int32 LocalUserNum)
{
	UE_LOG(LogOnline, Display, TEXT("Autologin Windows overrided: user %d"), LocalUserNum);

	return true;
}
