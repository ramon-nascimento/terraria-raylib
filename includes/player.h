#ifndef PLAYER_H
#define PLAYER_H

#include "raylib.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct Player {
    Rectangle rect;
    Vector2 pos;
} Player;


Player* get_player();

#endif
