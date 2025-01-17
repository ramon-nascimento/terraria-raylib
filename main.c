#include "includes/window.h"
#include "includes/player.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    Player *player = get_player();

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Clone do Terraria");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
    
        ClearBackground(SKYBLUE);
        
        DrawRectangle(player->rect.x, player->rect.y, player->rect.width, player->rect.height, WHITE);

        EndDrawing();
    }

    CloseWindow();

    free(player);

    return 0;
}
