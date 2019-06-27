#pragma once
#include <string>

using namespace std;

class Board
{
public:
    void initBoard();
    void printBoard();
    char** getBoard();

private:
    //fixes board size
    char** board[3][3];
};
