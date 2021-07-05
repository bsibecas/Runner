/*
** EPITECH PROJECT, 2020
** open_window
** File description:
** open a window
*/

#include "my_runner.h"

sfRenderWindow *open_window(int width, int height, char *name)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {1920, 1080, 32};

    video_mode.width = width;
    video_mode.height = height;
    video_mode.bitsPerPixel = 32;
    window = sfRenderWindow_create(video_mode, name, sfDefaultStyle, NULL);
    if (window == NULL)
        return (NULL);
    return (window);
}

game_player_t *create_elements(game_player_t *play)
{
    sfVector2f scale;

    play->rect.top = 63;
    play->rect.left = 0;
    play->rect.width = 28;
    play->rect.height = 33;
    play->pos.x = 700;
    play->pos.y = 650;
    scale.x = 3.5;
    scale.y = 3.5;
    play->player_text = sfTexture_createFromFile("images/Sprite.png", NULL);
    play->player = sfSprite_create();
    sfSprite_setTexture(play->player, play->player_text, sfTrue);
    sfSprite_setTextureRect(play->player, play->rect);
    sfSprite_setPosition(play->player, play->pos);
    sfSprite_scale(play->player, scale);
    return (play);
}

int texture(void)
{
    game_object_t *elem = malloc(sizeof(game_object_t));
    game_player_t *play = malloc(sizeof(game_player_t));
    game_obstacle_t *obs = malloc(sizeof(game_obstacle_t));

    elem->window = open_window(1920, 1080, "My_Runner");
    background(elem);
    mountains(elem);
    far_mountains(elem);
    bf_clouds(elem);
    ground(elem);
    create_elements(play);
    create_enemy_one(obs);
    create_enemy_two(obs);
    create_enemy_three(obs);
    window_run(play, elem, obs);
    clean_elem(play, elem, obs);
    return (0);
}
