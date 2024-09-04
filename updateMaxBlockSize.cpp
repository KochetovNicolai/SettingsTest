#include "SettingsTraits.h"

extern SettingIntTrait max_block_size;

void updateMaxBlockSize(const SettingsPtr & settings)
{
    settings.get()->*max_block_size = 42;
}
