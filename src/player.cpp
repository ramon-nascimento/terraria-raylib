#include "../includes/player.h"

namespace player {
    Player* get_player() {
        Player *player = (Player *)malloc(sizeof(Player));

        *player = {
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
};



