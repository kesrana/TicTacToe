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

//since the board is 25x25, the borders are ignored and only the middle square is meant to be played on
const int ConvertTo25[9] = {
    6, 7, 8,
    11, 12, 13,
    16, 17, 18};

//creates the board
void initializeBoard(int *board);

//prints out the board
void PrintBoard(const int *board);

void RunGame();
