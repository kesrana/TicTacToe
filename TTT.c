#include "TTT.h"

//since the board is 25x25, the borders are ignored and only the middle square is meant to be played on
const int ConvertTo25[9] = {
    6, 7, 8,
    11, 12, 13,
    16, 17, 18};

void initializeBoard(int *board)
{
    int index = 0;

    // initialize the borders and the play board
    for (index = 0; index < 25; index++)
    {
        board[index] = BORDER;
    }
    for (index = 0; index < 9; index++)
    {
        board[ConvertTo25[index]] = EMPTY;
    }
}

void PrintBoard(const int *board)
{
    int index = 0;
    printf("\nBoard:\n");

    for (index = 0; index < 25; index++)
    {
        // start a new line when the 5th column is reached
        if (index != 0 && index % 5 == 0)
        {
            printf("\n");
        }
        // print out what is at the index of the board
        printf("%4d", board[index]);
    }
    printf("\n");
}

void RunGame()
{
}