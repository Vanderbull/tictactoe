#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe
{
private:
    char board[3][3];

public:
    void DrawBoard();
    void PrintBoard();
    void GetMove(int move);
    void TogglePlayer(char player);
    bool DetermineDraw();
};

#endif
