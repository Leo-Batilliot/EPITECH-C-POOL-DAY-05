/*
** EPITECH PROJECT, 2024
** compute_factorial_rec
** File description:
** task 02
*/

int my_compute_factorial_rec(int nb)
{
    int result = 0;

    if (nb < 0 || nb > 12)
        return 0;
    if (nb == 0)
        return 1;
    result = nb * my_compute_factorial_rec(nb - 1);
    return result;
}
