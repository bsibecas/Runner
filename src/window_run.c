/*
** EPITECH PROJECT, 2020
** window_run.c
** File description:
** window while is open and run the program
*/

#include "my_runner.h"

void window_run(game_player_t *play, game_object_t *elem, game_obstacle_t *obs)
{
    sfEvent event;
    int end = 3;
    int hit = 0;

    play->fly = 650;
    obs->move.x = -15;
    obs->counter = 1990;
    play->clock = sfClock_create();
    while (sfRenderWindow_isOpen(elem->window)) {
        hit = 0;
        while (sfRenderWindow_pollEvent(elem->window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(elem->window);
            if (end <= 0)
                sfRenderWindow_close(elem->window);
        }
        animation(play, play->clock, obs, elem);
        player_move_up(play);
        player_move_down(play);
        movement_enemy_one(obs, play);
        movement_enemy_two(obs, play);
        movement_enemy_three(obs, play);
        hit = hit + control_pos_one(play, obs);
        hit = hit + control_pos_two(play, obs);
        hit = hit + control_pos_three(play, obs);
        draw_elems(play, elem, obs);
        end = end - hit;
    }
}
