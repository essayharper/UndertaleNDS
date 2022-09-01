//
// Created by cervi on 24/08/2022.
//

#ifndef LAYTON_SAVE_HPP
#define LAYTON_SAVE_HPP

#define FLAG_COUNT 256

#include <stdint.h>

enum Flags {
    RUIN_PROGRESS = 0
};

struct SaveData {
    char* name = nullptr;
    uint16_t flags[FLAG_COUNT] = {0};
};

extern SaveData saveGlobal;

#endif //LAYTON_SAVE_HPP
