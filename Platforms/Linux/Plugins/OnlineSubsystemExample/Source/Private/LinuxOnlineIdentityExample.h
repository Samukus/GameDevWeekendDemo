#pragma once

#include "Interfaces/OnlineIdentityInterface.h"

#include "OnlineIdentityExample.h"

class FLinuxOnlineIdentityExample : public FOnlineIdentityExample {
public:
	~FLinuxOnlineIdentityExample() = default;

	bool AutoLogin(int32 LocalUserNum) override;
};

typedef FLinuxOnlineIdentityExample FPlatformOnlineIdentity;