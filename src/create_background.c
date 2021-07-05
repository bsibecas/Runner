/*
** EPITECH PROJECT, 2020
** create background
** File description:
** create background
*/

#include "my_runner.h"

game_object_t *background(game_object_t *elem)
{
    sfVector2f scale;

    scale.x = 6;
    scale.y = 4.5;
    elem->texture = sfTexture_createFromFile("images/sky.png", NULL);
    elem->sprite = sfSprite_create();
    sfSprite_setTexture(elem->sprite, elem->texture, sfTrue);
    sfSprite_scale(elem->sprite, scale);
    return (elem);
}

game_object_t *ground(game_object_t *elem)
{
    sfVector2f scale;

    elem->cloud_ff_rect.top = 0;
    elem->cloud_ff_rect.left = 0;
    elem->cloud_ff_rect.width = 384;
    elem->cloud_ff_rect.height = 216;
    scale.x = 5;
    scale.y = 4.8;
    elem->cloud_ff_text = sfTexture_createFromFile("images/cloud_ff.png", NULL);
    elem->cloud_ff_sprite = sfSprite_create();
    sfSprite_setTexture(elem->cloud_ff_sprite, elem->cloud_ff_text, sfTrue);
    sfSprite_setTextureRect(elem->cloud_ff_sprite, elem->cloud_ff_rect);
    sfSprite_scale(elem->cloud_ff_sprite, scale);
    return (elem);
}

game_object_t *bf_clouds(game_object_t *elem)
{
    sfVector2f scale;

    elem->cloud_bf_rect.top = 0;
    elem->cloud_bf_rect.left = 0;
    elem->cloud_bf_rect.width = 384;
    elem->cloud_bf_rect.height = 216;
    scale.x = 5;
    scale.y = 4.8;
    elem->cloud_bf_text = sfTexture_createFromFile("images/cloud_bf.png", NULL);
    elem->cloud_bf_sprite = sfSprite_create();
    sfSprite_setTexture(elem->cloud_bf_sprite, elem->cloud_bf_text, sfTrue);
    sfSprite_setTextureRect(elem->cloud_bf_sprite, elem->cloud_bf_rect);
    sfSprite_scale(elem->cloud_bf_sprite, scale);
    return (elem);
}

game_object_t *far_mountains(game_object_t *elem)
{
    sfVector2f scale;
    sfVector2f pos;

    elem->mount_rect.top = 0;
    elem->mount_rect.left = 0;
    elem->mount_rect.width = 384;
    elem->mount_rect.height = 216;
    pos.x = 0;
    pos.y = 200;
    scale.x = 5;
    scale.y = 5;
    elem->mount_text = sfTexture_createFromFile("images/mount.png", NULL);
    elem->mount_sprite = sfSprite_create();
    sfSprite_setTexture(elem->mount_sprite, elem->mount_text, sfTrue);
    sfSprite_setTextureRect(elem->mount_sprite, elem->mount_rect);
    sfSprite_scale(elem->mount_sprite, scale);
    sfSprite_setPosition(elem->mount_sprite, pos);
    return (elem);


}

game_object_t *mountains(game_object_t *elem)
{
    sfVector2f scale;
    sfVector2f pos;

    elem->mount_bb_rect.top = 0;
    elem->mount_bb_rect.left = 0;
    elem->mount_bb_rect.width = 384;
    elem->mount_bb_rect.height = 216;
    pos.x = 0;
    pos.y = 90;
    scale.x = 5;
    scale.y = 4;
    elem->mount_bb_text = sfTexture_createFromFile("images/mount_bb.png", NULL);
    elem->mount_bb_sprite = sfSprite_create();
    sfSprite_setTexture(elem->mount_bb_sprite, elem->mount_bb_text, sfTrue);
    sfSprite_setTextureRect(elem->mount_bb_sprite, elem->mount_bb_rect);
    sfSprite_scale(elem->mount_bb_sprite, scale);
    sfSprite_setPosition(elem->mount_bb_sprite, pos);
    return (elem);
}
