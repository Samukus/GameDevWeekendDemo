#include "LinuxOnlineIdentityExample.h"
#include "CoreMinimal.h"
#include "OnlineSubsystem.h"

bool FLinuxOnlineIdentityExample::AutoLogin(int32 LocalUserNum)
{
	UE_LOG(LogOnline, Display, TEXT("Autologin Linux overrided: user %d"), LocalUserNum);

	return true;
}
