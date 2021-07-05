/*
** EPITECH PROJECT, 2020
** clean_window
** File description:
** clean the window
*/

#include "my_runner.h"

void clean_elem(game_player_t *play, game_object_t *elem, game_obstacle_t *obs)
{
    sfSprite_destroy(elem->sprite);
    sfTexture_destroy(elem->texture);
    sfSprite_destroy(elem->mount_sprite);
    sfTexture_destroy(elem->mount_text);
    sfSprite_destroy(elem->mount_bb_sprite);
    sfTexture_destroy(elem->mount_bb_text);
    sfSprite_destroy(elem->cloud_ff_sprite);
    sfTexture_destroy(elem->cloud_ff_text);
    sfSprite_destroy(elem->cloud_bf_sprite);
    sfTexture_destroy(elem->cloud_bf_text);
    sfSprite_destroy(play->player);
    sfTexture_destroy(play->player_text);
    sfSprite_destroy(obs->enemy_one);
    sfTexture_destroy(obs->enemy_one_text);
    sfSprite_destroy(obs->enemy_two);
    sfTexture_destroy(obs->enemy_two_text);
    sfSprite_destroy(obs->enemy_three);
    sfTexture_destroy(obs->enemy_three_text);
    sfRenderWindow_destroy(elem->window);
}
