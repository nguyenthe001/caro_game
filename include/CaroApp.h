#ifndef CARO_APP_H
#define CARO_APP_H
#include <iostream>
#include <limits>
#include "Player.h"
#include "BOT.h"
#include "ChessBoard.h"
#include "Referee.h"
#include "Controller.h"

#define YELLOW "\033[33m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

class CaroApp
{
private:
	std::string version;
	Referee* referee;
	ChessBoard* chessBoard;
	Player* player1;
	Player* player2;
	Controller* controller;
	BOT* bot;
public:
	CaroApp();
	void init();
	void reset();
	void start();
	~CaroApp();
};
#endif
