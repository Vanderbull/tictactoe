#include <iostream>
#include "TicTacToe.h"

using namespace std;

int main()
{
    TicTacToe game;
    char player = 'X';
    while(game.DetermineDraw() == false)
    {
        game.DrawBoard();
        game.GetMove(player);
        game.TogglePlayer(player);
    }

    system("pause");
}
