#include <iostream>
#include "TicTacToe.h"

using namespace std;


void TicTacToe::DrawBoard()
{
    system("cls");
    cout <<"\tWelcome to the Classes Tic Tac Toe! \n";
    char board[3][3] =
    { 
      {'1','2','3'},
      {'4','5','6'},
      {'7','8','9'},
    };

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}


void TicTacToe::GetMove(int move)
{
    char player = 'X';
    cout <<"\nEnter the number of the field you would like to move:\n";
    cin >> move;

    if( move == 1)
    {
        board[0][0] = player;
    }
    else if(move == 2)
    {
        board[0][1] = player;
    }
    else if(move == 3)
    {
        board[0][2] = player;
    }
    else if(move == 4)
    {
        board[1][0] = player;
    }
    else if(move == 5)
    {
        board[1][1] = player;
    }
    else if(move == 6)
    {
        board[1][2] = player;
    }
    else if(move == 7)
    {
        board[2][0] = player;
    }
    else if(move == 8)
    {
        board[2][1] = player;
    }
    else if(move == 9)
    {
        board[2][2] = player;
    }

}

void TicTacToe::TogglePlayer(char player)
{
    if (player == 'X')
        player = 'O';
    else if(player == 'O')
        player = 'X';
}

bool TicTacToe::DetermineDraw()
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(board[i][j] == 'X' && board[i][j] == 'O')
                return true;
            else 
                return false;
        }
    }
}

Here is the main file, I will keep looping through the game while it isn't a draw. I don't know why the move isn't shown on the board.
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
