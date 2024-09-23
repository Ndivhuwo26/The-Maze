#ifndef MAP_LOADER_H
#define MAP_LOADER_H

// Struct for enemy positions
typedef struct {
    int x, y;
} Enemy;

// Functions to load the map
void load_map(const char *filename);

extern int map[10][10];
extern Enemy enemies[];
extern int enemy_count;

#endif
