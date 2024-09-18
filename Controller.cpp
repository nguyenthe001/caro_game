#include "Controller.h"
void Controller::writeReplay(std::string str ,std::string end)
{
	std::ofstream file("replays.txt", std::ios::app);
	if (!file) {
		std::cerr << "Can not open file!\n";
	}
	file<< str + end;
	file.close();
}

void Controller::writeStep(std::string str, std::string end)
{
	std::ofstream file("replaysInfo.txt", std::ios::app);
	if (!file) {
		std::cerr << "Can not open file!\n";
	}
	file << str + end;
	file.close();
}

void Controller::PvP(ChessBoard* chessBoard, Player* player1, Player* player2, Referee* referee) {
	chessBoard->drawBoard();
	std::string displayName[2];
	for (int i = 0; i < 2; i++)
	{
		std::cout << "Enter name of player " << i + 1 << " :";
		std::cin >> displayName[i];
	}
	this->writeReplay(displayName[0], ";");
	this->writeReplay(displayName[1], ";");
	player1->setName(displayName[0]);
	player2->setName(displayName[1]);
	system("clear");
	chessBoard->drawBoard();
	int count = 0;
	while (true)
	{
		std::pair<int, int> move = player1->placeAPiece(chessBoard, 'X');
		this->writeStep(std::to_string(move.first), ";");
		this->writeStep(std::to_string(move.second), ";");
		++count;
		system("clear");
		chessBoard->drawBoard();
		if (referee->checkWin(chessBoard, move.first, move.second, 'X')) {
			std::cout << player1->getName() << " won!\n";
			this->writeReplay(player1->getName(), ";");
			break;
		}


		if (count >= BOARD_SIZE * BOARD_SIZE && referee->checkDraw(chessBoard))
		{
			std::cout << "Draw!\n";
			break;
		}
		move = player2->placeAPiece(chessBoard, 'O');
		this->writeStep(std::to_string(move.first), ";");
		this->writeStep(std::to_string(move.second), ";");
		++count;
		system("clear");
		chessBoard->drawBoard();
		if (referee->checkWin(chessBoard, move.first, move.second, 'O')) {
			std::cout << player2->getName() << " won!\n";
			this->writeReplay(player2->getName(), ";");
			break;
		}

		if (count >= BOARD_SIZE * BOARD_SIZE && referee->checkDraw(chessBoard))
		{
			std::cout << "Draw!\n";
			break;
		}
	}
	this->writeReplay("", "\n");
	this->writeStep("", "\n");
}

void Controller::PvB(ChessBoard* chessBoard, Player* player1, BOT* bot, Referee* referee)
{
	chessBoard->drawBoard();
	std::string displayName;
	std::cout << "Enter name of player :";
	std::cin >> displayName;

	player1->setName(displayName);
	system("clear");
	chessBoard->drawBoard();
	int count = 0;
	while (true)
	{
		std::pair<int, int> move = player1->placeAPiece(chessBoard, 'X');
		++count;
		system("clear");
		chessBoard->drawBoard();
		if (referee->checkWin(chessBoard, move.first, move.second, 'X')) {
			std::cout << player1->getName() << " won!\n";
			break;
		}
		if (count >= BOARD_SIZE * BOARD_SIZE && referee->checkDraw(chessBoard))
		{
			std::cout << "Draw!\n";
			break;
		}
		move = bot->placeAPiece(chessBoard, 'O');
		++count;
		system("clear");
		chessBoard->drawBoard();
		if (referee->checkWin(chessBoard, move.first, move.second, 'O')) {
			std::cout << "Bot won!\n";
			break;
		}
		if (count >= BOARD_SIZE * BOARD_SIZE && referee->checkDraw(chessBoard))
		{
			std::cout << "Draw!\n";
			break;
		}
	}
}

void Controller::replay()
{
	struct Replay
	{
		std::string player1;
		std::string player2;
		std::string playerWin;
	};
	std::vector<Replay> Replays;
	std::ifstream input1;
	input1.open("replays.txt");
	std::string data;
	while (getline(input1, data)) {
		Replay replay;
		std::string delimiter = ";";
		int posOfDelimiter = data.find(delimiter);
		replay.player1 = data.substr(0, posOfDelimiter);
		data = data.substr(posOfDelimiter + 1, data.length() - 1);
		posOfDelimiter = data.find(delimiter);
		replay.player2 = data.substr(0, posOfDelimiter);
		data = data.substr(posOfDelimiter + 1, data.length() - 1);
		posOfDelimiter = data.find(delimiter);
		replay.playerWin = data.substr(0, posOfDelimiter);
		Replays.push_back(replay);
	}
	input1.close();

	int count = 1;
	for (auto replay : Replays) {
		std::cout << count << "." << "Player 1: " << replay.player1 << "| Player 2: " << replay.player2 << "| Player Won: " << replay.playerWin << std::endl;
		++count;
	}

	std::ifstream input2("replaysInfo.txt");
	if (!input2) {
		std::cerr << "Unable to open file replaysInfo.txt";
		return;
	}
	std::string data2;
	int num_lines_to_read ; 
	std::cout << "Enter the matches you want to replay: ";
	std::cin >> num_lines_to_read;
	std::cin.ignore();
	system("clear");
	int line_count = 0;
	ChessBoard chessBoard;
	char currentPiece = 'X'; 

	while (getline(input2, data2)) {
		if (line_count == num_lines_to_read - 1) {
			std::string delimiter = ";";
			size_t posOfDelimiter = 0;
			while ((posOfDelimiter = data2.find(delimiter)) != std::string::npos) {
				int x = std::stoi(data2.substr(0, posOfDelimiter));
				data2.erase(0, posOfDelimiter + delimiter.length());
				posOfDelimiter = data2.find(delimiter);
				int y = std::stoi(data2.substr(0, posOfDelimiter));
				data2.erase(0, posOfDelimiter + delimiter.length());
				chessBoard.setPiece(x, y, currentPiece);
				chessBoard.drawBoard();
				std::cout << "Press any key to continue...";
				std::cin.get();
				system("clear");
				currentPiece = (currentPiece == 'X') ? 'O' : 'X';
			}
			break;
		}
		line_count++;
	}
	input2.close();
}

void Controller::showPlayerInfor() {
	struct PlayerStats {
		int gamesPlayed = 0;
		int gamesWon = 0;
	};
	std::ifstream inputFile("replays.txt");
	std::map<std::string, PlayerStats> playerStats;

	if (inputFile.is_open()) {
		std::string line;
		while (getline(inputFile, line)) {
			std::string delimiter = ";";
			size_t posOfDelimiter = line.find(delimiter);
			std::string player1 = line.substr(0, posOfDelimiter);
			line.erase(0, posOfDelimiter + delimiter.length());
			posOfDelimiter = line.find(delimiter);
			std::string player2 = line.substr(0, posOfDelimiter);
			line.erase(0, posOfDelimiter + delimiter.length());
			std::string playerWin = line.substr(0, line.find("\n"));

			// Update games played
			playerStats[player1].gamesPlayed++;
			playerStats[player2].gamesPlayed++;

			// Update games won
			if (playerWin == player1 || playerWin == player2) {
				playerStats[playerWin].gamesWon++;
			}
		}
		inputFile.close();
	}
	else {
		std::cout << "Unable to open input file";
	}

	// Print player information
	for (const auto& player : playerStats) {
		std::cout << "Player: " << player.first << "\n";
		std::cout << "Games Played: " << player.second.gamesPlayed << "\n";
		std::cout << "Games Won: " << player.second.gamesWon << "\n";
		std::cout << "------------------------\n";
	}
}



void Controller::guild()
{
	std::cout << "xin chao";
}

