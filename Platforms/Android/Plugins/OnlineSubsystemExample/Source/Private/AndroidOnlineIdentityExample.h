#pragma once

#include "Interfaces/OnlineIdentityInterface.h"

#include "OnlineIdentityExample.h"

class FAndroidOnlineIdentityExample : public FOnlineIdentityExample {
public:
	~FAndroidOnlineIdentityExample() = default;

	bool AutoLogin(int32 LocalUserNum) override;
};

typedef FAndroidOnlineIdentityExample FPlatformOnlineIdentity;