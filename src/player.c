#include "../includes/player.h"

Player* get_player() {
    Player *player = (Player *)malloc(sizeof(Player));

    *player = (Player) {
        .rect = (Rectangle) {
            .x = 0,
            .y = 0,
            .width = 40,
            .height = 40
        },
        .pos = (Vector2) {
            .x = 0,
            .y = 0
        }
    };

    return player;
}



