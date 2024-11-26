#ifndef BOT_H
#define BOT_H
#include "ChessBoard.h"
#include "Referee.h"
#include <algorithm>
#include <climits>
class BOT
{
private:
	int m_depth;
public:
	BOT();
	void setDepth(int depth);
	int getDepth();
	int horizontalScore(ChessBoard* chessBoard);
    int verticalScore(ChessBoard* chessBoard);
    int topdownDiagonalScore(ChessBoard* chessBoard);
    int downtopDiagonalScore(ChessBoard* chessBoard);
	int checkNeighbor(ChessBoard* chessBoard);
	int minimax(ChessBoard* chessBoard, bool isMax, int alpha, int beta, int depth);
	std::pair<int, int> getNextMove(ChessBoard* chessBoard);
	std::pair<int, int> placeAPiece(ChessBoard* chessBoard, char chessPiece);
};
#endif