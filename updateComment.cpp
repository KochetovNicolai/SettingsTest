#include "SettingsTraits.h"

extern SettingStringTrait comment;

void updateComment(const SettingsPtr & settings)
{
    settings->*comment = "hello";
}
