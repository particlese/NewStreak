/**
*	Author: AvikB
*	Copyright © AvikB 2018
*/

#include "SettingFunctionalityBPLibrary.h"
#include "SettingFunctionality.h"
#include "Engine/UserInterfaceSettings.h"
#include <IConsoleManager.h>
#include <UObjectGlobals.h>

USettingFunctionalityBPLibrary::USettingFunctionalityBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void USettingFunctionalityBPLibrary::ChangeApplicationUIScale(float newScale)
{
	GetMutableDefault<UUserInterfaceSettings>()->ApplicationScale = newScale;
}

