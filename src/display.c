/*
** EPITECH PROJECT, 2021
** display
** File description:
** display in main loop
*/

int display(void)
{
    game_object_t *elem = malloc(sizeof(game_object_t));
    game_player_t *play = malloc(sizeof(game_player_t));

    if (elem == NULL || play == NULL)
        return (84);
    sfRenderWindow_clear(elem->window, sfBlack);
    sfSprite_setTexture(elem->sprite, elem->texture, sfTrue);
    sfRenderWindow_drawSprite(wlwm->window, elem->sprite, NULL);
    sfSprite_setTexture(play->player, play->player_text, sfTrue);
    sfRenderWindow_display(elem->window);
    return(0);
}
