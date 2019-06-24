#include <iostream>
#include <string>
#include "board.h"
#include "player.h"

//initialize the board
void Board::initBoard()
{
    for (int y = 0; y < 3; y++){
        for (int x = 0; x < 3; x++){
            board[y][x] = '.';
        }
    }
}

//actually prints out the board, make it look nice
void Board::printBoard()
{
    cout << "| ";
    for (int x = 0; x < 3; x++){
        cout << x + 1 << " | ";
    }
    cout << "\n-------------" << endl;
    for (int y = 0; y < 3; y++) {
        cout << "| ";
        for (int x = 0; x < 3; x++){
            cout << board[y][x] << " | ";
        }
        cout << "\n-------------" << endl;
    }
}

char Board::getBoard()
{
    return board[3][3];
}