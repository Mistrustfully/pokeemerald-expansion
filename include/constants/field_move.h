#include "global.h"
#include "moves.h"

#define FIELD_MOVE_NONE         0
#define FIELD_MOVE_CUT          1
#define FIELD_MOVE_FLASH        2
#define FIELD_MOVE_ROCK_SMASH   3
#define FIELD_MOVE_STRENGTH     4
#define FIELD_MOVE_SURF         5
#define FIELD_MOVE_FLY          6
#define FIELD_MOVE_DIVE         7
#define FIED_MOVE_WATERFALL     8
#define FIELD_MOVE_TELEPORT     9
#define FIELD_MOVE_DIG          10
#define FIELD_MOVE_SECRET_POWER 11
#define FIELD_MOVE_MILK_DRINK   12
#define FIELD_MOVE_SOFT_BOILED  13
#define FIELD_MOVE_SWEET_SCENT  14

#define FIELD_MOVES_COUNT       15

static unsigned int fieldMoveToMove[FIELD_MOVES_COUNT] = {
    MOVE_NONE,
    MOVE_CUT,
    MOVE_FLASH,
    MOVE_ROCK_SMASH,
    MOVE_STRENGTH,
    MOVE_SURF,
    MOVE_FLY,
    MOVE_DIVE,
    MOVE_WATERFALL,
    MOVE_TELEPORT,
    MOVE_DIG,
    MOVE_SECRET_POWER,
    MOVE_MILK_DRINK,
    MOVE_SOFT_BOILED,
    MOVE_SWEET_SCENT
};