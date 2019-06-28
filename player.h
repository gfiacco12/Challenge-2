#pragma once
#include <string>
#include "utilities.cpp"
using namespace std;

class Player
{
public:
    void playerStats();
    void playerMove(char playerSymbol, char* board);
    bool checkWin(string name, char playerSymbol, char* board);
    char getSymbol();
    string getName();

private:
    string _name;
    char symbol;
};