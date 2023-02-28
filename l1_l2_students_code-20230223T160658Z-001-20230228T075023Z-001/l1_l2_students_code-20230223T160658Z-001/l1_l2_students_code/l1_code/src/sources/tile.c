#include "../headers/tile.h"

/**
 * TODO (2nd submission): Initializes a tile, setting the position and initializing the target to EMPTY_TARGET.
 * @param tile The tile to be initialized.
 * @param position The position of the tile.
 *
 * Pre: There must be a tile to initilize
 * Post: 
 */
void init_tile(Tile* tile, int position) {
    tile->pos=position;
    tile->target=EMPTY_TARGET;
}

/**
 * TODO (2nd submission): Returns the position of the tile.
 * @param tile The tile to be queried.
 * @return The position of the tile.
 *
 * Pre: 
 * Post: 
 */
int get_position(Tile* tile) {
    return tile->pos;
}

/**
 * TODO (2nd submission): Returns the position the tile targets to, if any.
 * @param tile The tile to be queried.
 * @return The position the tile targets or EMPTY_TARGET, if does not target another tile.
 *
 * Pre: 
 * Post: 
 */
int get_target_position(Tile* tile) {
    return tile->target;
}

/**
 * TODO (2nd submission): Sets the position the tile targets to.
 * @param tile The tile to be modified.
 * @return INVALID_POSITION if the target_position is less than 0, SUCCESS otherwise.
 *
 * Pre: 
 * Post: 
 */
 int set_target_position(Tile* tile, int target_position) {
    if(target_position<0 || target_position>100){
        return INVALID_POSITION;
    }else {
        tile->target = target_position;
        return SUCCESS;
    }
}

/**
 * TODO (2nd submission): Clears the tile target position, setting its value to EMPTY_TARGET.
 * @param tile The tile to be modified.
 *
 * Pre: 
 * Post: 
 */
void clear_target_position(Tile* tile) {
    tile->target=EMPTY_TARGET;
}

/**
 * TODO (2nd submission): Returns TRUE if the tile contains a ladder (targets a higher tile).
 * @param tile The tile to be queried.
 * @return TRUE if the tile contains a ladder.
 *
 * Pre: 
 * Post: 
 */
int is_ladder(Tile* tile) {
    if((tile->target>tile->pos) && (tile->target!=EMPTY_TARGET)){
        return TRUE;
    }else{
        return FALSE;
    }
}

/**
 * TODO (2nd submission): Returns TRUE if the tile contains a snake (targets a lower tile), FALSE otherwise.
 * @param tile The tile to be queried.
 * @return TRUE if the tile contains a snake, FALSE otherwise.
 *
 * Pre:
 * Post: 
 */
int is_snake(Tile* tile) {
    if((tile->target<tile->pos) && (tile->target!=EMPTY_TARGET)){
        return TRUE;
    }else{
        return FALSE;
    }
}
