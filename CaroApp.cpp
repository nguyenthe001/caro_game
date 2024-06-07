#include "CaroApp.h"

CaroApp::CaroApp()
	:referee(nullptr), chessBoard(nullptr), player1(nullptr), player2(nullptr), controller(nullptr), bot(nullptr)
{
}

void CaroApp::init()
{
	this->chessBoard = new ChessBoard();
	this->player1 = new Player();
	this->player2 = new Player();

    if (controller == nullptr)
    {
        this->controller = new Controller();
    }
    if (referee == nullptr)
    {
        this->referee = new Referee();
    }
    if (bot == nullptr)
    {
        this->bot = new BOT();
    }
}

void CaroApp::reset()
{
	delete this->player1;
	this->player1 = nullptr;
	delete this->player2;
	this->player2 = nullptr;
	delete this->chessBoard;
	this->chessBoard = nullptr;
    this->init();
}

void CaroApp::start() {
    int selection;
    do {
        std::cout << YELLOW << "  ____    __      ___   ___\n";
        std::cout << " ///__   // \\   || _ \\ / _ \\\n";
        std::cout << " |||    ///\\ \\  |||_) | | | |\n";
        std::cout << " |||__ ////// \\ ||_ < | |_| |\n";
        std::cout << " \\\\___///    \\_\\|| \\_\\ \\___/\n";
        std::cout << "\n-------" << RESET <<" MAIN MENU " << YELLOW << "------- ";
        std::cout << PURPLE << "\n[1] Play" << RESET <<" with Other Player";
        std::cout << PURPLE << "\n[2] Play" << RESET << " with Bot";
        std::cout << PURPLE << "\n[3] Replay";
        std::cout << PURPLE << "\n[4] Player's" << RESET << " Information";
        std::cout << PURPLE << "\n[5] Guild";
        std::cout << PURPLE << "\n[0] Exit";
        std::cout << RESET << "\nPress number to choice: ";
        while (true) {
            try {
                std::cin >> selection;
                std::cin.ignore();
                if (!std::cin) {
                    throw std::invalid_argument("[!] Data type is incorrect");
                }
                if (selection > 5) {
                    throw std::invalid_argument("[!] Enter 0 to 5");
                }
                break;
            }
            catch (const std::exception& e) {
                std::cout << e.what() << ". Please try again: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }

        switch (selection) {
        case 1:
            system("cls");
            controller->PvP(this->chessBoard, this->player1, this->player2, this->referee);
            this->reset();
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");
            int selection;
            do {
                std::cout << YELLOW << "\n-------" << RESET << " PLAY WITH BOT " << YELLOW << "------- ";
                std::cout << PURPLE << "\n[1] Easy " << RESET << "Mode";
                std::cout << PURPLE << "\n[2] Noraml " << RESET << "Mode";
                std::cout << PURPLE << "\n[3] Hard " << RESET << "Mode";
                std::cout << PURPLE << "\n[4] Back" << RESET << "to MAIN MENU";
                std::cout << RESET << "\nPress number to choice: ";
                while (true) {
                    try {
                        std::cin >> selection;
                        std::cin.ignore();
                        if (!std::cin) {
                            throw std::invalid_argument("[!] Data type is incorrect");
                        }
                        if (selection > 5) {
                            throw std::invalid_argument("[!] Enter 0 to 5");
                        }
                        break;
                    }
                    catch (const std::exception& e) {
                        std::cout << e.what() << ". Please try again: ";
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                }

                switch (selection) {
                case 1:
                    bot->setDepth(0);
                    controller->PvB(this->chessBoard, this->player1, this->bot, this->referee);
                    break;
                case 2:
                    bot->setDepth(1);
                    controller->PvB(this->chessBoard, this->player1, this->bot, this->referee);
                    break;
                case 3:
                    bot->setDepth(2);
                    controller->PvB(this->chessBoard, this->player1, this->bot, this->referee);
                    break;
                case 4:
                    system("cls");
                    break;
                }
            } while (selection);
            this->reset();
            system("pause");
            system("cls");
            break;
        case 3:
            system("cls");
            controller->replay();
            system("pause");
            system("cls");
            break;
        case 4:
            system("cls");
            controller->showPlayerInfor();
            system("pause");
            system("cls");
            break;
        case 5:
            system("cls");
            controller->guild();
            system("pause");
            system("cls");
            break;
        case 0:
            break;
        }
    } while (selection);
}


CaroApp::~CaroApp()
{
	delete this->player1;
	this->player1 = nullptr;
	delete this->player2;
	this->player2 = nullptr;
	delete this->chessBoard;
	this->chessBoard = nullptr;
	delete this->referee;
	this->referee = nullptr;
    delete this->controller;
    controller = nullptr;
    delete this->bot;
    bot = nullptr;
}