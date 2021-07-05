/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "../include/my_runner.h"

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        info_game();
    else if (ac > 2)
        return (84);
    else
        my_runner();
    return (0);
}
