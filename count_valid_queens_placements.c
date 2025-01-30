/*
** EPITECH PROJECT, 2024
** nqueens
** File description:
** task 08
*/

/*    checks the top-left diagonal to see if the queen is safe    */
int check_while_p(int i, int j, int board[20][20])
{
    for (; i >= 0 && j >= 0; i--) {
        if (board[i][j] == 1)
            return 1;
        j--;
    }
    return 0;
}

/*    checks the bottom-left diagonal to see if the queen is safe    */
int check_while_m(int i, int j, int board[20][20])
{
    for (; i < 20 && j >= 0; i++) {
        if (board[i][j])
            return 1;
        j--;
    }
    return 0;
}

/*    checks if the queen would be placed on the line of another queen    */
/*    otherwise, it checks both diagonals, return 0 if everything is safe    */
int check_if_safe(int board[20][20], int row, int col)
{
    for (int y = 0; y < col; y++)
        if (board[row][y])
            return 1;
    if (check_while_p(row, col, board))
        return 1;
    if (check_while_m(row, col, board))
        return 1;
    return 0;
}

/*    loops though a column, placing queens on every line    */
/*    if a queen is safe, it goes to the next column    */
/*    and tries to place queens on each line, etc...    */
/*    if the count of columns containing a valid queen is equal to n    */
/*    which means it found a solution, the function return + 1.    */
int place_queens(int board[20][20], int col, int n)
{
    int count = 0;

    if (col >= n)
        return 1;
    for (int row = 0; row < n; row++)
        if (check_if_safe(board, row, col) == 0) {
            board[row][col] = 1;
            count += place_queens(board, col + 1, n);
            board[row][col] = 0;
        }
    return count;
}

/*    set up the board, check the argument in case n < 1    */
/*    returns the number of n*n boards in which n queens are all safe    */
int count_valid_queens_placements(int n)
{
    int board[20][20] = {0};

    if (n < 1)
        return 0;
    return place_queens(board, 0, n);
}
