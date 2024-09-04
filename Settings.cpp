#include "Settings.h"

SettingIntTrait max_threads = {&Settings::int_settings, 0};
SettingIntTrait max_block_size = {&Settings::int_settings, 1};
SettingStringTrait comment = {&Settings::string_settings, 0};
SettingStringTrait comment2 = {&Settings::string_settings, 1};

SettingsPtr createSettings()
{
    auto impl = std::make_shared<Settings>();
    impl->int_settings.resize(2);
    impl->string_settings.resize(2);
    return {std::move(impl)};
}

SettingInt & operator->*(const SettingsPtr & settings, SettingIntTrait t) { return settings.impl->int_settings[t.pos]; }
SettingString & operator->*(const SettingsPtr & settings, SettingStringTrait t) { return settings.impl->string_settings[t.pos]; }

SettingInt & SettingsPtr::operator[](SettingIntTrait t) const { return impl->int_settings[t.pos]; }
SettingString & SettingsPtr::operator[](SettingStringTrait t) const { return impl->string_settings[t.pos]; }
