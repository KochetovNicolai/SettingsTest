#pragma once
#include <string>
#include <memory>
#include <vector>

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

struct Settings;
struct SettingIntTrait
{
    std::vector<SettingInt> Settings::* arr;
    int pos;
};

struct SettingStringTrait
{
    std::vector<SettingString> Settings::* arr;
    int pos;
};

struct SettingsPtr;
SettingInt & operator->*(const SettingsPtr & settings, SettingIntTrait t);
SettingString & operator->*(const SettingsPtr & settings, SettingStringTrait t);

struct SettingsPtr
{
    std::shared_ptr<Settings> impl;

    SettingInt & operator[](SettingIntTrait t) const;
    SettingString & operator[](SettingStringTrait t) const;
};

SettingsPtr createSettings();


