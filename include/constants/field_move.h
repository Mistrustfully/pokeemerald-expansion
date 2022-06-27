#include "global.h"
#include "moves.h"

#define FIELD_MOVE_CUT          0
#define FIELD_MOVE_FLY          1
#define FIELD_MOVE_SURF         2
#define FIELD_MOVE_STRENGTH     3
#define FIELD_MOVE_FLASH        4
#define FIELD_MOVE_DIG          5
#define FIELD_MOVE_TELEPORT     6
#define FIELD_MOVE_SOFT_BOILED  7
#define FIELD_MOVE_WATERFALL    8
#define FIELD_MOVE_ROCK_SMASH   9
#define FIELD_MOVE_SWEET_SCENT  10
#define FIELD_MOVE_MILK_DRINK   11
#define FIELD_MOVE_DIVE         12
#define FIELD_MOVE_SECRET_POWER 13
#define FIELD_MOVE_CHATTER      14

#define FIELD_MOVES_COUNT       15

static unsigned int fieldMoveToMove[FIELD_MOVES_COUNT] = {
    MOVE_CUT,
    MOVE_FLY,
    MOVE_SURF,
    MOVE_STRENGTH,
    MOVE_FLASH,
    MOVE_DIG,
    MOVE_TELEPORT,
    MOVE_SOFT_BOILED,
    MOVE_WATERFALL,
    MOVE_ROCK_SMASH,
    MOVE_SWEET_SCENT,
    MOVE_MILK_DRINK,
    MOVE_DIVE,
    MOVE_SECRET_POWER,
    MOVE_CHATTER
};
