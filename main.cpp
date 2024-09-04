#include <iostream>
#include "SettingsTraits.h"

extern SettingIntTrait max_block_size;
extern SettingStringTrait comment;

void updateComment(const SettingsPtr & settings);
void updateMaxBlockSize(const SettingsPtr & settings);

int main() {
    auto settings = createSettings();
    updateComment(settings);
    updateMaxBlockSize(settings);

    std::cout << "comment " << std::string(settings.get()->*comment) << std::endl;
    std::cout << "max_block_size " << settings.get()->*max_block_size << std::endl;
    return 0;
}
