/*
** EPITECH PROJECT, 2021
** control pos
** File description:
** control pos
*/

#include "my_runner.h"

int control_pos_one(game_player_t *play, game_obstacle_t *obs)
{
    sfVector2f position;

    position.x = 1950;
    position.y = rand() % 920;
    if (obs->pos_e_one.y >= (play->pos.y - 35) &&
        obs->pos_e_one.y <= (play->pos.y + 35)) {
        if (obs->pos_e_one.x <= (play->pos.x + 35) &&
            obs->pos_e_one.x >= (play->pos.x - 35)) {
            sfSprite_setPosition(obs->enemy_one, position);
            obs->pos_e_one = position;
            return (1);
        }
    }
    return (0);
}

int control_pos_two(game_player_t *play, game_obstacle_t *obs)
{
    sfVector2f position;

    position.x = 1950;
    position.y = rand() % 920;
    if (obs->pos_e_two.y >= (play->pos.y - 35) &&
        obs->pos_e_two.y <= (play->pos.y + 35)) {
        if (obs->pos_e_two.x <= (play->pos.x + 35) &&
            obs->pos_e_two.x >= (play->pos.x - 35)) {
            sfSprite_setPosition(obs->enemy_two, position);
            obs->pos_e_two = position;
            return (1);
        }
    }
    return (0);
}

int control_pos_three(game_player_t *play, game_obstacle_t *obs)
{
    sfVector2f position;

    position.x = 1950;
    position.y = rand() % 920;
    if (obs->pos_e_three.y >= (play->pos.y - 35) &&
        obs->pos_e_three.y <= (play->pos.y + 35)) {
        if (obs->pos_e_three.x <= (play->pos.x + 35) &&
            obs->pos_e_three.x >= (play->pos.x - 35)) {
            sfSprite_setPosition(obs->enemy_three, position);
            obs->pos_e_three = position;
            return (1);
        }
    }
    return (0);
}
