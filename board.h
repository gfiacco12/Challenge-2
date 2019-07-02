#pragma once
#include <string>


using namespace std;

class Board
{
public:
    void initBoard();
    void printBoard();
    char* getBoard();
    int getValue(char* pointer, int x, int y, int size);
    int getIndex(int x, int y, int size);

private:
    //fixes board size
    char board[3][3];
};
