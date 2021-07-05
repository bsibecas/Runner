/*
** EPITECH PROJECT, 2020
** BSQ.h
** File description:
** BSQ.h
*/

#ifndef MY_RUNNER_H_
#define MY_RUNNER_H_

#include "mylib.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <SFML/Graphics.h>

typedef struct game_object_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfRenderWindow *window;
    sfSprite *mount_sprite;
    sfTexture *mount_text;
    sfIntRect mount_rect;
    sfSprite *mount_bb_sprite;
    sfTexture *mount_bb_text;
    sfIntRect mount_bb_rect;
    sfSprite *cloud_ff_sprite;
    sfTexture *cloud_ff_text;
    sfIntRect cloud_ff_rect;
    sfSprite *cloud_bf_sprite;
    sfTexture *cloud_bf_text;
    sfIntRect cloud_bf_rect;
} game_object_t;

typedef struct game_player_s {
    sfSprite *player;
    sfTexture *player_text;
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
    float seconds;
    sfVector2f pos;
    int counter;
    int fly;
} game_player_t;

typedef struct game_obstacle_s {
    sfSprite *enemy_one;
    sfTexture *enemy_one_text;
    sfSprite *enemy_two;
    sfTexture *enemy_two_text;
    sfSprite *enemy_three;
    sfTexture *enemy_three_text;
    sfIntRect rect_e_one;
    sfIntRect rect_e_two;
    sfIntRect rect_e_three;
    sfClock *clock;
    sfTime time;
    int counter;
    float seconds;
    sfVector2f move;
    sfVector2f pos_e_one;
    sfVector2f pos_e_two;
    sfVector2f pos_e_three;
    int speed;
    int end;
} game_obstacle_t;


/****************BASE*****************/

int info_game();
int my_runner();
void end(game_obstacle_t *obs);

/****************CREATE*****************/

sfRenderWindow *open_window(int width, int height, char *name);
int texture(void);
void window_run(game_player_t *play, game_object_t *elem, game_obstacle_t *obs);
game_player_t *create_elements(game_player_t *play);
game_obstacle_t *create_enemy_one(game_obstacle_t *obs);
game_obstacle_t *create_enemy_two(game_obstacle_t *obs);
game_obstacle_t *create_enemy_three(game_obstacle_t *obs);
game_obstacle_t *create_obstacle(game_obstacle_t *obs);
game_object_t *background(game_object_t *elem);
game_object_t *mountains(game_object_t *elem);
game_object_t *far_mountains(game_object_t *elem);
game_object_t *ground(game_object_t *elem);
game_object_t *bf_clouds(game_object_t *elem);

/****************MOVE*****************/

sfIntRect move_obstacle(sfIntRect rect, int offset, int max_var);
sfIntRect move_animation(sfIntRect rect, int offset, int max_var);
sfIntRect move_enemy_one(sfIntRect rect, int offset, int max_var);
void move_mountain(game_object_t *elem);
void move_far_mountain(game_object_t *elem);
void move_clouds(game_object_t *elem);
void movement_jump(game_player_t *play, int counter);
void move_ground(game_object_t *elem);
game_obstacle_t *movement_enemy_one(game_obstacle_t *obs, game_player_t *play);
game_obstacle_t *movement_enemy_two(game_obstacle_t *obs, game_player_t *play);
game_obstacle_t *movement_enemy_three(game_obstacle_t *ob, game_player_t *play);
game_player_t *player_move_up(game_player_t *play);
game_player_t *player_move_down(game_player_t *play);
game_player_t *jump_down(game_player_t *play);
void jump_loop(game_player_t *play);
int control_pos_one(game_player_t *play, game_obstacle_t *obs);
int control_pos_two(game_player_t *play, game_obstacle_t *obs);
int control_pos_three(game_player_t *play, game_obstacle_t *obs);
game_player_t *animation(game_player_t *play, sfClock *clock, game_obstacle_t *obs, game_object_t *elem);

/****************DISPLAY*****************/

void display_rec(game_player_t *play, game_obstacle_t *obs, game_object_t *elem);
int display(void);
void draw_elems(game_player_t *play, game_object_t *elem, game_obstacle_t *obs);
game_player_t *run_window(sfRenderWindow *window);
void clean_elem(game_player_t *play, game_object_t *elem, game_obstacle_t *obs);

#endif
