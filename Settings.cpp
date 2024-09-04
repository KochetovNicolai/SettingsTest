#include "Settings.h"

extern SettingIntTrait max_threads = &Settings::max_threads;
extern SettingIntTrait max_block_size = &Settings::max_block_size;
extern SettingStringTrait comment = &Settings::comment;
//extern SettingStringTrait comment2 = &Settings::comment;

SettingsPtr createSettings()
{
    return {std::make_shared<Settings>()};
}

SettingInt & operator->*(const SettingsPtr & settings, SettingIntTrait t) { return settings.impl.get()->*t; }
SettingString & operator->*(const SettingsPtr & settings, SettingStringTrait t) { return settings.impl.get()->*t; }

SettingInt & SettingsPtr::operator[](SettingIntTrait t) const { return impl.get()->*t; }
SettingString & SettingsPtr::operator[](SettingStringTrait t) const { return impl.get()->*t; }
