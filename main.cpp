#include <iostream>
#include <string>
#include "board.h"
#include "player.h"

using namespace std;

int x;
int y;

int main()
{
    Board board;
    board.initBoard();
    board.printBoard();

    Player player1;
    Player player2;
    player1.playerStats();
    player2.playerStats();

    bool isDone = false;

    while (isDone == false) {
        player1.playerMove(player1.getSymbol(), board.getBoard());
        isDone = player1.checkWin(player1.getName(), player1.getSymbol(), board.getBoard());
        player2.playerMove(player2.getSymbol(), board.getBoard());
        isDone = player2.checkWin(player2.getName(), player2.getSymbol(), board.getBoard());
    }
   
    cin.get();
    return 0;
}