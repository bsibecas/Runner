/*
** EPITECH PROJECT, 2020
** open_window
** File description:
** open a window
*/

#include "my_runner.h"

game_obstacle_t *create_enemy_one(game_obstacle_t *obs)
{
    sfVector2f scale;

    obs->rect_e_one.top = 33;
    obs->rect_e_one.left = 0;
    obs->rect_e_one.width = 33;
    obs->rect_e_one.height = 30;
    obs->pos_e_one.x = 1950;
    obs->pos_e_one.y = rand() % 920;
    scale.x = 2;
    scale.y = 2;
    obs->enemy_one_text = sfTexture_createFromFile("images/enemy_one.png", NULL);
    obs->enemy_one = sfSprite_create();
    sfSprite_setTexture(obs->enemy_one, obs->enemy_one_text, sfTrue);
    sfSprite_setTextureRect(obs->enemy_one, obs->rect_e_one);
    sfSprite_setPosition(obs->enemy_one, obs->pos_e_one);
    sfSprite_scale(obs->enemy_one, scale);
    return (obs);
}

game_obstacle_t *create_enemy_two(game_obstacle_t *obs)
{
    sfVector2f scale;

    obs->rect_e_two.top = 33;
    obs->rect_e_two.left = 0;
    obs->rect_e_two.width = 33;
    obs->rect_e_two.height = 30;
    obs->pos_e_two.x = 1950;
    obs->pos_e_two.y = 800;
    scale.x = 2;
    scale.y = 2;
    obs->enemy_two_text = sfTexture_createFromFile("images/enemy_two.png", NULL);
    obs->enemy_two = sfSprite_create();
    sfSprite_setTexture(obs->enemy_two, obs->enemy_two_text, sfTrue);
    sfSprite_setTextureRect(obs->enemy_two, obs->rect_e_two);
    sfSprite_setPosition(obs->enemy_two, obs->pos_e_two);
    sfSprite_scale(obs->enemy_two, scale);
    return (obs);
}

game_obstacle_t *create_enemy_three(game_obstacle_t *obs)
{
    sfVector2f scale;

    obs->rect_e_three.top = 33;
    obs->rect_e_three.left = 0;
    obs->rect_e_three.width = 33;
    obs->rect_e_three.height = 30;
    obs->pos_e_three.x = 1950;
    obs->pos_e_three.y = 400;
    scale.x = 2;
    scale.y = 2;
    obs->enemy_three_text = sfTexture_createFromFile("images/enemy_three.png", NULL);
    obs->enemy_three = sfSprite_create();
    sfSprite_setTexture(obs->enemy_three, obs->enemy_three_text, sfTrue);
    sfSprite_setTextureRect(obs->enemy_three, obs->rect_e_three);
    sfSprite_setPosition(obs->enemy_three, obs->pos_e_three);
    sfSprite_scale(obs->enemy_three, scale);
    return (obs);
}
