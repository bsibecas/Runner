/*
** EPITECH PROJECT, 2021
** animation
** File description:
** animation of sprite
*/

#include "my_runner.h"

sfIntRect move_animation(sfIntRect rect, int offset, int max_var)
{
    rect.left = rect.left + offset;
    if (rect.left >= max_var)
        rect.left = 0;
    return (rect);
}

sfIntRect move_enemy_one(sfIntRect rect, int offset, int max_var)
{
    rect.left = rect.left + offset;
    if (rect.left >= max_var)
        rect.left = 0;
    return (rect);
}

sfIntRect move_enemy_two(sfIntRect rect, int offset, int max_var)
{
    rect.left = rect.left + offset;
    if (rect.left >= max_var)
        rect.left = 0;
    return (rect);
}

sfIntRect move_enemy_three(sfIntRect rect, int offset, int max_var)
{
    rect.left = rect.left + offset;
    if (rect.left >= max_var)
        rect.left = 0;
    return (rect);
}


game_player_t *animation(game_player_t *play, sfClock *clock,
                         game_obstacle_t *obs, game_object_t *elem)
{
    play->time = sfClock_getElapsedTime(clock);
    play->seconds = play->time.microseconds / 1000000.0;
    if (play->seconds >= 0.1) {
        play->rect = move_animation(play->rect, 32, 33 * 2);
        obs->rect_e_one = move_enemy_one(obs->rect_e_one, 31, 31 * 2);
        obs->rect_e_two = move_enemy_one(obs->rect_e_two, 31, 31 * 2);
        obs->rect_e_three = move_enemy_one(obs->rect_e_three, 31, 31 * 2);
        move_far_mountain(elem);
        move_mountain(elem);
        move_ground(elem);
        move_clouds(elem);
        display_rec(play, obs, elem);
        sfClock_restart(clock);
    }
    return (play);
}
