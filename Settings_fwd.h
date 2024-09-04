#pragma once
#include <memory>

struct Settings;

using SettingsPtr = std::shared_ptr<Settings>;
SettingsPtr createSettings();
