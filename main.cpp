#include <iostream>
#include "tictactoe.h"

using namespace std;

int main()
{
    TicTacToe game;
    int move;
    bool validMove;

    while (true)
    {
        system("clear");
        game.PrintBoard();
        cout << "Player " << game.GetCurrentPlayer() << ", enter your move (1-9): ";
        cin >> move;

        validMove = game.GetMove(move);

        if (!validMove)
        {
            cout << "Invalid move. Try again." << endl;
            system("pause");
            continue;
        }

        if (game.CheckWin())
        {
            system("clear");
            game.PrintBoard();
            cout << "Player " << game.GetCurrentPlayer() << " wins!" << endl;
            break;
        }

        if (game.CheckDraw())
        {
            system("clear");
            game.PrintBoard();
            cout << "It's a draw!" << endl;
            break;
        }

        game.SwitchPlayer();
    }

    system("pause");
    return 0;
}
