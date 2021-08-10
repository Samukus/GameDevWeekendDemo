#pragma once

#include "Interfaces/OnlineIdentityInterface.h"

#include "OnlineIdentityExample.h"

class FWindowsOnlineIdentityExample : public FOnlineIdentityExample {
public:
	~FWindowsOnlineIdentityExample() = default;

	bool AutoLogin(int32 LocalUserNum) override;
};

typedef FWindowsOnlineIdentityExample FPlatformOnlineIdentity;