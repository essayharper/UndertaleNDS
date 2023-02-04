//
// Created by cervi on 30/08/2022.
//

#ifndef UNDERTALE_CUTSCENE_ENUMS_HPP
#define UNDERTALE_CUTSCENE_ENUMS_HPP

enum CutsceneCommands {
    CMD_LOAD_SPRITE = 0,
    CMD_PLAYER_CONTROL = 1,
    CMD_WAIT = 2,
    CMD_SET_SHOWN = 3,
    CMD_SET_ANIMATION = 4,
    CMD_SET_POS = 5,
    CMD_MOVE_IN_FRAMES = 6,
    CMD_START_DIALOGUE = 7,
    CMD_START_BATTLE = 8,
    CMD_EXIT_BATTLE = 9,
    CMD_LOAD_TEXTURE = 10,
    CMD_BATTLE_ATTACK = 11,
    CMD_BATTLE_ACTION = 12,
    CMD_CHECK_HIT = 13,
    CMD_JUMP_IF = 14,
    CMD_JUMP_IF_NOT = 15,
    CMD_JUMP = 16,
    CMD_MANUAL_CAMERA = 17,
    CMD_UNLOAD_SPRITE = 18,
    CMD_SCALE_IN_FRAMES = 19,
    CMD_SET_SCALE = 20,
    CMD_START_BGM = 21,
    CMD_STOP_BGM = 22,
    CMD_SET_POS_IN_FRAMES = 23,
    CMD_SET_FLAG = 24,
    CMD_CMP_FLAG = 25,
    CMD_SET_COLLIDER_ENABLED = 26,
    CMD_UNLOAD_TEXTURE = 27,
    CMD_SET_ACTION = 28,
    CMD_PLAY_SFX = 29,
    CMD_SAVE_MENU = 30,
    CMD_MAX_HEALTH = 31,
    CMD_MOD_FLAG = 32,
    CMD_CMP_ENEMY_HP = 33,
    CMD_SET_ENEMY_ATTACK = 34,
    CMD_SET_ENEMY_ACT = 35, // TODO
    CMD_CLEAR_NAV_TASKS = 36,
    CMD_LOAD_SPRITE_RELATIVE = 37,
    CMD_SET_CELL = 38,
    CMD_MOVE = 39,
    CMD_DEBUG = 0xff
};

enum CutsceneLocation {
    LOAD_ROOM = 0,
    ROOM = 1,
    LOAD_BATTLE = 2,
    BATTLE = 3
};

enum ComparisonOperator {
    EQUALS = 0,
    GREATER_THAN = 1,
    LESS_THAN = 2
};

enum WaitingType {
    NONE = 0,
    WAIT_FRAMES,
    WAIT_EXIT,
    WAIT_ENTER,
    WAIT_DIALOGUE_END,
    WAIT_BATTLE_ATTACK,
    WAIT_SAVE_MENU,
    WAIT_BATTLE_ACTION
};

#endif //UNDERTALE_CUTSCENE_ENUMS_HPP
