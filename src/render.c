#include <stdio.h>
#include "map_loader.h"

void render_map() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 10; j++) {
            if (map[i][j] == 1) {
                printf("#");  // Wall
            } else if (map[i][j] == 0) {
                printf(" ");  // Empty space
            } else if (map[i][j] == 2) {
                printf("E");  // Enemy
            }
        }
        printf("\n");
    }
}
