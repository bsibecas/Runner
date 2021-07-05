/*
** EPITECH PROJECT, 2021
** animation
** File description:
** animation of sprite
*/

#include "my_runner.h"

void move_ground(game_object_t *elem)
{
    int offset = 6;
    int max = 384;

    elem->cloud_ff_rect.left += offset;
    if (elem->cloud_ff_rect.left > max)
        elem->cloud_ff_rect.left = 0;
}

void move_clouds(game_object_t *elem)
{
    int offset = 5;
    int max = 384;

    elem->cloud_bf_rect.left += offset;
    if (elem->cloud_bf_rect.left > max)
        elem->cloud_bf_rect.left = 0;
}

void move_far_mountain(game_object_t *elem)
{
    int offset = 3;
    int max = 384;

    elem->mount_rect.left += offset;
    if (elem->mount_rect.left >= max)
        elem->mount_rect.left = 0;
}

void move_mountain(game_object_t *elem)
{
    int offset = 2;
    int max = 384;

    elem->mount_bb_rect.left += offset;
    if (elem->mount_bb_rect.left >= max)
        elem->mount_bb_rect.left = 0;
}
