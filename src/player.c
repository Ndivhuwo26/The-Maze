#include <stdio.h>
#include "player.h"

int player_x = 1;  // Starting position of the player
int player_y = 1;

void init_player() {
    player_x = 1;
    player_y = 1;
}

void handle_player_input() {
    char input;
    printf("Enter move (w/a/s/d): ");
    scanf(" %c", &input);

    if (input == 'w') player_y--;
    if (input == 's') player_y++;
    if (input == 'a') player_x--;
    if (input == 'd') player_x++;

    // TODO: Add collision detection with walls
}
