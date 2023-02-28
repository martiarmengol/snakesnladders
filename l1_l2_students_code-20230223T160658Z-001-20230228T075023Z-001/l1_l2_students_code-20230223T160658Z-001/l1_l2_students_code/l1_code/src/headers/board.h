#ifndef BOARD_H
#define BOARD_H

#include "common.h"
#include "tile.h"

#define MAX_ROWS 10
#define MAX_COLUMNS 10

#define INVALID_BOARD_DIMENSIONS -1

typedef struct Board{
    int row;
    int col;
    Tile tiles[MAX_ROWS][MAX_COLUMNS];
} Board;

int init_board(Board* board, int rows, int columns);

int get_rows(Board* board);
void set_rows(Board* board, int size);

int get_columns(Board* board);
void set_columns(Board* board, int size);

int get_size(Board* board);

Tile* get_tile_at(Board* board, int position);

#endif //BOARD_H
