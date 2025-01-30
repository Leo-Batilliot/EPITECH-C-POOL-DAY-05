/*
** EPITECH PROJECT, 2024
** compute factorial
** File description:
** task 01
*/

int my_compute_factorial_it(int nb)
{
    int res = 1;
    int i = 1;

    if (nb == 0)
        return res;
    if (nb < 0 || nb > 12)
        return 0;
    for (i; i <= nb; i++)
        res *= i;
    return res;
}
