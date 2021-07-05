/*
** EPITECH PROJECT, 2020
** window_run.c
** File description:
** window while is open and run the program
*/

#include "my_runner.h"

void draw_elems(game_player_t *play, game_object_t *elem, game_obstacle_t *obs)
{
    sfRenderWindow_clear(elem->window, sfBlack);
    sfRenderWindow_drawSprite(elem->window, elem->sprite, NULL);
    sfRenderWindow_drawSprite(elem->window, elem->mount_bb_sprite, NULL);
    sfRenderWindow_drawSprite(elem->window, elem->mount_sprite, NULL);
    sfRenderWindow_drawSprite(elem->window, elem->cloud_bf_sprite, NULL);
    sfRenderWindow_drawSprite(elem->window, elem->cloud_ff_sprite, NULL);
    sfRenderWindow_drawSprite(elem->window, play->player, NULL);
    sfRenderWindow_drawSprite(elem->window, obs->enemy_one, NULL);
    sfRenderWindow_drawSprite(elem->window, obs->enemy_two, NULL);
    sfRenderWindow_drawSprite(elem->window, obs->enemy_three, NULL);
    sfRenderWindow_display(elem->window);
}
