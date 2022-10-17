//
// Created by cervi on 25/08/2022.
//

#ifndef UNDERTALE_PLAYER_HPP
#define UNDERTALE_PLAYER_HPP

#include "Sprite.hpp"
#include <cstdio>
#define ARM9
#include <nds.h>

class Player {
public:
    const int MOVE_SPEED = (90 << 8) / 60;  // 90 pixels per second, debug speed
    // const int MOVE_SPEED = (70 << 8) / 60;  // 70 pixels per second

    Player();
    void update();
    bool check_collisions() const;
    void check_interact() const;
    void check_exits();
    void draw();

    // sprite top left position
    Engine::Sprite spriteManager;
    bool playerControl = true;
private:
    Engine::Texture playerSpr;

    u8 currentAnimation = 0;  // 0-3 idle up, down, left, right, 4-7 move same

    // animation ids
    int upIdleId;
    int downIdleId;
    int leftIdleId;
    int rightIdleId;
    int upMoveId;
    int downMoveId;
    int leftMoveId;
    int rightMoveId;
};

extern Player* globalPlayer;

#endif //UNDERTALE_PLAYER_HPP
