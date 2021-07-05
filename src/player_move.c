/*
** EPITECH PROJECT, 2021
** player move
** File description:
** player move
*/

#include "my_runner.h"

game_player_t *player_move_up(game_player_t *play)
{
    sfVector2f move_up;

    move_up.y = -2;
    if (sfKeyboard_isKeyPressed(sfKeyUp) == sfTrue && play->fly > 0) {
        sfSprite_move(play->player, move_up);
        play->pos.y = play->pos.y - 2;
        play->fly = play->fly - 2;
    }
    return (play);
}

game_player_t *player_move_down(game_player_t *play)
{
    sfVector2f move_down;

    move_down.y = 2;
    if (sfKeyboard_isKeyPressed(sfKeyDown) == sfTrue && play->fly < 920) {
        sfSprite_move(play->player, move_down);
        play->pos.y = play->pos.y + 2;
        play->fly = play->fly + 2;
    }
    return (play);
}
