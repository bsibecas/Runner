/*
** EPITECH PROJECT, 2021
** animation
** File description:
** animation of sprite
*/

#include "my_runner.h"

game_obstacle_t *movement_enemy_two(game_obstacle_t *obs, game_player_t *play)
{
    sfVector2f move;

    move.x = -30;
    move.y = 0;
    if (play->seconds >= 0.1) {
        sfSprite_move(obs->enemy_two, move);
        obs->pos_e_two.x = obs->pos_e_two.x - 30;
    }
    if (obs->pos_e_two.x <= -55) {
        obs->pos_e_two.x = 1920;
        obs->pos_e_two.y = rand() % 920;
        sfSprite_setPosition(obs->enemy_two, obs->pos_e_two);
    }
    return (obs);
}

game_obstacle_t *movement_enemy_one(game_obstacle_t *obs, game_player_t *play)
{
    sfVector2f move;

    move.x = -45;
    move.y = 0;
    if (play->seconds >= 0.1) {
        sfSprite_move(obs->enemy_one, move);
        obs->pos_e_one.x = obs->pos_e_one.x -45;
    }
    if (obs->pos_e_one.x <= -55) {
        obs->pos_e_one.x = 1920;
        obs->pos_e_one.y = rand() % 920;
        sfSprite_setPosition(obs->enemy_one, obs->pos_e_one);
    }
    return (obs);
}

game_obstacle_t *movement_enemy_three(game_obstacle_t *obs, game_player_t *play)
{
    sfVector2f move;

    move.x = -25;
    move.y = 0;
    if (play->seconds >= 0.1) {
        sfSprite_move(obs->enemy_three, move);
        obs->pos_e_three.x = obs->pos_e_three.x - 25;
    }
    if (obs->pos_e_three.x <= -55) {
        obs->pos_e_three.x = 1920;
        obs->pos_e_three.y = rand() % 920;
        sfSprite_setPosition(obs->enemy_three, obs->pos_e_three);
    }
    return (obs);
}
