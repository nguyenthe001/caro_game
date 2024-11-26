#include "Player.h"

Player::Player()
{}

void Player::setName(std::string name)
{
	this->m_name = name;
}

std::string Player::getName()
{
	return this->m_name;
}

std::pair<int, int> Player::getNextMove()
{
    int m, n;
    std::cin >> m >> n;
    return std::make_pair(m, n);
}

std::pair<int, int> Player::placeAPiece(ChessBoard* chessBoard, char chessPiece) {
    std::cout << this->getName() << ": ";
    std::pair<int, int> move;
    while (true) {
        try {
            move = this->getNextMove();
            if (!std::cin) {
                throw std::invalid_argument("[!] Data type is incorrect");
            }
            if (move.first < 0 || move.first >= BOARD_SIZE || move.second < 0 || move.second >= BOARD_SIZE) {
                throw std::out_of_range("[!] Out of range!");
            }
            if (!chessBoard->isCellEmpty(move.first, move.second)) {
                throw std::runtime_error("[!] This box already has a piece!");
            }
            chessBoard->setPiece(move.first, move.second, chessPiece);
            break;
        }
        catch (const std::exception& e) {
            std::cout << e.what() << ". Please re-enter: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    return move;
}