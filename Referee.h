#ifndef REFEREE_H
#define REFEREE_H
#include "ChessBoard.h"
constexpr auto WINNING_PIECES = 5;
class Referee
{
private:
public:
	bool checkWin(ChessBoard* chessBoard, int lastMoveX, int lastMoveY, char chessPiece);
	bool checkDraw(ChessBoard* chessBoard);
};
#endif

