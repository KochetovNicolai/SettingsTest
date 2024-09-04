#pragma once
#include <string>
#include "Settings_fwd.h"

struct SettingInt
{
    int value = 0;

    operator int() const { return value; } // NOLINT(google-explicit-constructor)
    SettingInt & operator=(int x) { value = x; return *this; }
};

struct SettingString
{
    std::string value;

    operator std::string() const { return value; } // NOLINT(google-explicit-constructor)
    SettingString & operator=(std::string x) { value = std::move(x); return *this; }
};

using SettingIntTrait = SettingInt Settings::*;
using SettingStringTrait = SettingString Settings::*;
