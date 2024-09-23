#include <stdio.h>
#include "map_loader.h"

#define MAP_WIDTH 10
#define MAP_HEIGHT 9

int map[MAP_HEIGHT][MAP_WIDTH];  // Global map

Enemy enemies[10];               // Array to store enemies
int enemy_count = 0;             // Number of enemies

void load_map(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Failed to open map file\n");
        return;
    }

    for (int i = 0; i < MAP_HEIGHT; i++) {
        for (int j = 0; j < MAP_WIDTH; j++) {
            fscanf(file, "%1d", &map[i][j]);  // Read each digit into the map array
            if (map[i][j] == 2) {
                enemies[enemy_count].x = j;
                enemies[enemy_count].y = i;
                enemy_count++;
            }
        }
    }

    fclose(file);
}
