#ifndef PLAYER_H
#define PLAYER_H
#include <limits>
#include <string>
#include "ChessBoard.h"
class Player
{
private:
	std::string m_name;
public:
	Player();
	void setName(std::string name);
	std::string getName();
	std::pair<int, int> placeAPiece(ChessBoard* chessBoard, char chessPiece);
	std::pair<int, int> getNextMove();
};
#endif
