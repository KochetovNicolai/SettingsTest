#include "SettingsTraits.h"

extern SettingStringTrait comment;

void updateComment(const SettingsPtr & settings)
{
    settings.get()->*comment = "hello";
}
