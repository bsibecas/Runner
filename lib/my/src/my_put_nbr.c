/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** display nbr
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int nbr = 0;

    if (nb < 0)
    {
        my_putchar('-');
        nbr = nb * - 1;
    }
    else
        nbr = nb;
    if (nbr <= 9)
        my_putchar(nbr + 48);
    else
    {
        my_put_nbr(nbr / 10);
        my_put_nbr(nbr % 10);
    }
    return (nbr);
}
