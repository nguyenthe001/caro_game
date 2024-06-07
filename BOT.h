#ifndef BOT_H
#define BOT_H
#include <unordered_map>
#include <algorithm>
#include "ChessBoard.h"
#include "Referee.h"
class BOT
{
private:
	int m_depth;
	std::unordered_map<std::string, int> transpositionTable;
public:
	BOT();
	void setDepth(int depth);
	int getDepth();
	bool isBlocked(const ChessBoard* chessBoard, int row, int col, int dx, int dy, char piece);
	int evaluate(ChessBoard* chessBoard);
	int minimax(ChessBoard* chessBoard, bool isMax, int alpha, int beta, int depth);
	std::pair<int, int> getNextMove(ChessBoard* chessBoard);
	std::pair<int, int> placeAPiece(ChessBoard* chessBoard, char chessPiece);
};
#endif