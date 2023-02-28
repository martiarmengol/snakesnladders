#include <stdlib.h>

#include "../headers/board.h"

/**
 * TODO (2nd submission): Initializes the board, initializing also each tile of it.
 * @param board The board to be initialized.
 * @param rows The number of rows of the board.
 * @param columns The number of columns of the board.
 * @return SUCCESS code if the initialization was successful, ERROR code if rows are less than 1 or more than MAX_ROWS
 * or if columns is less than 2 or more than MAX_COLUMNS.
 *
 * Pre:
 * Post:
 */
int init_board(Board* board, int rows, int columns) {
    if((rows>=MAX_ROWS) ||(columns>=MAX_COLUMNS) || ((rows<1) || (columns<2))){
        return ERROR;
    }

    board->row = rows;
    board->col = columns;

    for(int i=0 ; i<rows; i++){
        for(int j=0;j<columns;j++){
            board->tiles[i][j].pos= i*columns+j;
            init_tile(&board->tiles[i][j],board->tiles[i][j].pos);
        }
    }
    return SUCCESS;
}

/**
 * TODO (2nd submission): Returns the number of rows of the board.
 * @param board The board to be queried.
 * @return The number of rows of the board.
 *
 * Pre:
 * Post:
 */
int get_rows(Board* board) {
    return board->row;
}

/**
 * TODO (2nd submission): Sets the number of rows of the board.
 * @param board The board to be queried.
 *
 * Pre:
 * Post:
 */
void set_rows(Board* board, int rows) {
    board->row=rows;
}

/**
 * TODO (2nd submission): Returns the number of columns of the board.
 * @param board The board to be queried.
 * @return The number of columns of the board.
 *
 * Pre:
 * Post:
 */
int get_columns(Board* board) {
    return board->col;
}

/**
 * TODO (2nd submission): Sets the number of columns of the board.
 * @param board The board to be queried.
 *
 * Pre:
 * Post:
 */
void set_columns(Board* board, int columns) {
    board->col=columns;
}

/**
 * TODO (2nd submission): Returns the size of the board, it is, the total number of tiles.
 * @param board The board to be queried.
 * @return The size of the board.
 *
 * Pre:
 * Post:
 */
int get_size(Board* board) {
    return (board->col*board->row);
}

/**
 * TODO (2nd submission): Returns the board tile at the specific position.
 *
 * @param board The board from which the tile should be retrieved.
 * @param position The position of the tile.
 * @return The (reference to the) tile of the board corresponding to the position if valid, NULL otherwise.
 *
 * Pre:
 * Post:
 */
Tile* get_tile_at(Board *board, int position) {
    int row = position / board->col;
    int col =position % board->col;
    return &board->tiles[row][col];
    /*int rowpos=board->row;
    int i=0;
    int z=0;
    int colcounter=0;
    int colpos=0;
    while(z<position){
        colcounter=i;
        if(i>=board->col){
            rowpos--;
            i=0;
            colcounter=i;
        }
        i++;
        z++;
    }
    if(rowpos%2!=0){
        colcounter=board->col-colcounter;
    }
    colpos=colcounter;
    return &board->tiles[rowpos][colpos];*/
}
