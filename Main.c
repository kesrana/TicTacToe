#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TTT.h"

int main()
{
    int board[25];
    initializeBoard(&board[0]);
    board[ConvertTo25[0]] = CROSSES;
    PrintBoard(&board[0]);

    // this function ensures that a random # will be generated each time you run the code
    //srand(time(NULL));
    return 0;
}