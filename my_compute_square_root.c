/*
** EPITECH PROJECT, 2024
** square root
** File description:
** TASK 05
*/

int my_compute_square_root(int nb)
{
    if (nb == 1)
        return 1;
    if (nb < 0 || nb == 0)
        return 0;
    for (int i = 0; i != nb; i++) {
        if (i * i == nb)
            return i;
    }
    return 0;
}
