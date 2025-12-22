#include <iostream>
#include "tictactoe.h"

using namespace std;

TicTacToe::TicTacToe()
{
    currentPlayer = 'X';
    char k = '1';
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            board[i][j] = k++;
        }
    }
}

void TicTacToe::PrintBoard()
{
    cout << "\tTic Tac Toe\n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool TicTacToe::GetMove(int move)
{
    int row = (move - 1) / 3;
    int col = (move - 1) % 3;

    if(move < 1 || move > 9 || board[row][col] == 'X' || board[row][col] == 'O')
    {
        return false;
    }

    board[row][col] = currentPlayer;
    return true;
}

bool TicTacToe::CheckWin()
{
    // Check rows
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return true;
    }

    // Check columns
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return true;
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return true;

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return true;

    return false;
}

bool TicTacToe::CheckDraw()
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(board[i][j] != 'X' && board[i][j] != 'O')
                return false;
        }
    }
    return true;
}

void TicTacToe::SwitchPlayer()
{
    if (currentPlayer == 'X')
        currentPlayer = 'O';
    else
        currentPlayer = 'X';
}

char TicTacToe::GetCurrentPlayer()
{
    return currentPlayer;
}
