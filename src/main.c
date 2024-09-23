#include <stdio.h>
#include "map_loader.h"
#include "render.h"
#include "player.h"

int main() {
    // Load the game map
    load_map("src/maps/map_with_enemies.txt");

    // Initialize player position and camera angle
    init_player();

    // Start game loop (for now, just render the map)
    while (1) {
        // Render the map and enemies
        render_map();

        // Handle player input (e.g., movement)
        handle_player_input();
    }

    return 0;
}
