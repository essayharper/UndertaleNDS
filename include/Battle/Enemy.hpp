//
// Created by cervi on 02/10/2022.
//

#ifndef UNDERTALE_ENEMY_HPP
#define UNDERTALE_ENEMY_HPP

#define ARM9
#include <nds.h>

struct Enemy {
    u16 enemyId = 0;
    char enemyName[20] = {0};
    u16 hp = 0;
    u16 maxHp = 0;
    char *actText = nullptr;
    u8 actOptionCount = 0;
};

#endif //UNDERTALE_ENEMY_HPP