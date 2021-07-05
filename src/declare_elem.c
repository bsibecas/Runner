/*
** EPITECH PROJECT, 2020
** declare_elem
** File description:
** declare the elements
*/

#include "my_runner.h"

game_object_t *declare_elem(void)
{
    game_object_t *elem = malloc(sizeof(game_object_t));

    elem->window = open_window(800, 600, "window");
    elem->texture = sfTexture_createFromFile("images/background.png", NULL);
    if (!elem->texture)
        return (NULL);
    elem->sprite = sfSprite_create();
    sfSprite_setTexture(elem->sprite, elem->texture, sfTrue);
    return (elem);
}
