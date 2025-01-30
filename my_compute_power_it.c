/*
** EPITECH PROJECT, 2024
** power it
** File description:
** task 03
*/

int my_compute_power_it(int nb, int p)
{
    int temp = nb;

    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    for (p; p > 1; p--)
        nb = nb * temp;
    return nb;
}
