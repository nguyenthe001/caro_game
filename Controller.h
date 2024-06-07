#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
#include <iomanip>
#include <fstream>
#include "BOT.h"
#include "ChessBoard.h"
#include "Player.h"
#include "Referee.h"
class Controller
{
private:
public:
	void writeReplay(std::string str, std::string end);
	void writeStep(std::string str, std::string end);
	void PvB(ChessBoard* chessBoard, Player* player1, BOT* bot, Referee* referee);
	void PvP(ChessBoard* chessBoard, Player* player1, Player* player2, Referee* referee);
	void replay();
	void showPlayerInfor();
	void guild();
};
#endif

