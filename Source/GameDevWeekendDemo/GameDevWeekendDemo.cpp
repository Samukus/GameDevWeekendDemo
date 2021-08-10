#include "GameDevWeekendDemo.h"
#include "Modules/ModuleManager.h"

class FGameDevWeekendDemoModule : public FDefaultGameModuleImpl
{
};

IMPLEMENT_PRIMARY_GAME_MODULE(FGameDevWeekendDemoModule, GameDevWeekendDemo,
                              "GameDevWeekendDemo");
