#pragma once

#include "SettingsTraits.h"

struct Settings
{
    SettingInt max_threads;
    SettingInt max_block_size;
    SettingString comment;
    SettingString comment2;
};
