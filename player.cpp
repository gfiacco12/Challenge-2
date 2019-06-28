#include <iostream>
#include <string>
#include "board.h"
#include "player.h"

void Player::playerStats()
{
    string name; 
    char playerSymbol;

    cout << "Enter the player name: ";
    cin >> name;
    cout << "Enter your symbol: ";
    cin >> playerSymbol;

    this-> _name = name;
    this-> symbol = playerSymbol;
}

void Player::playerMove(char playerSymbol, char* board)
{
    int xcoord;
    int ycoord;

    cout << "Enter the x coordinate of your move: " << endl;
    cin >> xcoord;
    cout << "Enter the y coordinate of your move: " << endl;
    cin >> ycoord;

    int index = getIndex(xcoord, ycoord, 3);
    board[index] = playerSymbol;
    cout << board[index];
}

bool Player::checkWin(string name, char playerSymbol, char* board)
{
//first check to see if the first row is all the same symbol
    if ((board[0][0] = playerSymbol) && (board[0][1] = playerSymbol) && (board[0][2] = playerSymbol)) {
        cout << "Congratulations! Player " << name << "won the game!" << endl;
        return true;
    }
    else if ((board[1][0] = playerSymbol) && (board[1][1] = playerSymbol) && (board[1][2] = playerSymbol)) {
        cout << "Congratulations! Player " << name << "won the game!" << endl;
        return true;
    }
    else if ((board[2][0] = playerSymbol) && (board[2][1] = playerSymbol) && (board[2][2] = playerSymbol)) {
        cout << "Congratulations! Player " << name << "won the game!" << endl;
        return true;
    }
    //check vertical columns
    else if ((board[0][0] = playerSymbol) && (board[1][0] = playerSymbol) && (board[2][0] = playerSymbol)) {
        cout << "Congratulations! Player " << name << "won the game!" << endl;
        return true;
    }
    else if ((board[0][1] = playerSymbol) && (board[1][1] = playerSymbol) && (board[2][1] = playerSymbol)) {
        cout << "Congratulations! Player " << name << "won the game!" << endl;
        return true;
    }
    else if ((board[1][0] = playerSymbol) && (board[1][1] = playerSymbol) && (board[1][2] = playerSymbol)) {
        cout << "Congratulations! Player " << name << "won the game!" << endl;
        return true;
    }
    //check diagonals
    else if ((board[0][0] = playerSymbol) && (board[1][1] = playerSymbol) && (board[2][2] = playerSymbol)) {
        cout << "Congratulations! Player " << name << "won the game!" << endl;
        return true;
    }
    else if ((board[0][2] = playerSymbol) && (board[1][1] = playerSymbol) && (board[2][0] = playerSymbol)) {
        cout << "Congratulations! Player " << name << "won the game!" << endl;
        return true;
    } else {
        return false;
    }
}

char Player::getSymbol()
{
    return this-> symbol;
}

string Player::getName()
{
    return this-> _name;
}
