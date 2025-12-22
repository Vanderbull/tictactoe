#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe
{
private:
    char board[3][3];
    char currentPlayer;

public:
    TicTacToe();
    void PrintBoard();
    bool GetMove(int move);
    bool CheckWin();
    bool CheckDraw();
    void SwitchPlayer();
    char GetCurrentPlayer();
};

#endif
