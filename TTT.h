#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern const int ConvertTo25[9];

//user defined variable created using enums
enum
{
    NOUGHTS,
    CROSSES,
    BORDER,
    EMPTY
};

enum
{
    HUMANWIN,
    AIWIN,
    DRAW
};

//creates the board
void initializeBoard(int *board);

//prints out the board
void PrintBoard(const int *board);

void RunGame();
