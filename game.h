#include "map.h"

#ifndef __GAME__
#define __GAME__

typedef struct game_s
{
    map_t map;
    int lives;
    int score;
    int time;
    int frame;
    int diamonds_got;
} game_t;

void initialize_game(game_t *game);

#endif