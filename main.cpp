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

    char* pointerToArray = board.getBoard();

    Player player1;
    Player player2;
    player1.playerStats();
    player2.playerStats();

    bool isDone = false;

    while (isDone == false) {
        player1.playerMove(player1.getSymbol(), pointerToArray);
        isDone = player1.checkWin(player1.getName(), player1.getSymbol(), pointerToArray);
        player2.playerMove(player2.getSymbol(), pointerToArray);
        isDone = player2.checkWin(player2.getName(), player2.getSymbol(), pointerToArray);
    }
   
    cin.get();
    return 0;
}