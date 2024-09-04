#pragma once

#include "SettingsTraits.h"

struct Settings
{
    std::vector<SettingInt> int_settings;
    std::vector<SettingString> string_settings;
};
