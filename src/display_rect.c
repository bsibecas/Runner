/*
** EPITECH PROJECT, 2021
** animation
** File description:
** animation of sprite
*/

#include "my_runner.h"

void display_rec(game_player_t *play, game_obstacle_t *obs, game_object_t *elem)
{
    sfSprite_setTextureRect(play->player, play->rect);
    sfSprite_setTextureRect(obs->enemy_one, obs->rect_e_one);
    sfSprite_setTextureRect(obs->enemy_two, obs->rect_e_two);
    sfSprite_setTextureRect(obs->enemy_three, obs->rect_e_three);
    sfSprite_setTextureRect(elem->mount_bb_sprite, elem->mount_bb_rect);
    sfSprite_setTextureRect(elem->mount_sprite, elem->mount_rect);
    sfSprite_setTextureRect(elem->cloud_bf_sprite, elem->cloud_bf_rect);
    sfSprite_setTextureRect(elem->cloud_ff_sprite, elem->cloud_ff_rect);
}
