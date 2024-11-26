#include "Referee.h"

bool Referee::checkWin(ChessBoard* chessBoard, int lastMoveX, int lastMoveY, char chessPiece)
{
    int dx[] = { -1, 0, -1, -1 };
    int dy[] = { 0, -1, -1, 1 };

    for (int direction = 0; direction < 4; ++direction) {
        int count = 1;
        for (int step = 1; step <= WINNING_PIECES; ++step) {
            int x = lastMoveX + step * dx[direction];
            int y = lastMoveY + step * dy[direction];
            if (x < 0 || x >= BOARD_SIZE || y < 0 || y >= BOARD_SIZE || chessBoard->getPiece(x, y) != chessPiece) {
                break;
            }
            ++count;
        }
        for (int step = 1; step <= WINNING_PIECES; ++step) {
            int x = lastMoveX - step * dx[direction];
            int y = lastMoveY - step * dy[direction];
            if (x < 0 || x >= BOARD_SIZE || y < 0 || y >= BOARD_SIZE || chessBoard->getPiece(x, y) != chessPiece) {
                break;
            }
            ++count;
        }
        if (count >= WINNING_PIECES) {
            return true;
        }
    }

    return false;
}

bool Referee::checkDraw(ChessBoard* chessBoard)
{
    for (int i = 0; i < BOARD_SIZE; ++i)
    {
        for (int j = 0; j < BOARD_SIZE; ++j)
        {
            if (chessBoard->getPiece(i, j) == ' ')
            {
                return false;
            }
        }
    }
    return true;
}