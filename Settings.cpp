#include "Settings.h"

extern SettingIntTrait max_threads = &Settings::max_threads;
extern SettingIntTrait max_block_size = &Settings::max_block_size;
extern SettingStringTrait comment = &Settings::comment;
extern SettingStringTrait comment2 = &Settings::comment;

SettingsPtr createSettings()
{
    return std::make_shared<Settings>();
}
