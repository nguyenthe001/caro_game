#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H
#include <iostream>
#include <sstream>
#define YELLOW "\033[33m"
#define PURPLE "\033[35m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

constexpr auto BOARD_SIZE = 10;
class ChessBoard
{
private:
	char** m_board;
public:
	ChessBoard();
	std::string toString();
	void drawBoard();
	char getPiece(int m, int n);
	void setPiece(int m, int n, char chessPiece);
	bool isCellEmpty(int m, int n);
	~ChessBoard();
};
#endif
