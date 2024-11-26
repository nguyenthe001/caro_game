#include "ChessBoard.h"

ChessBoard::ChessBoard()
{
	this->m_board = new char* [BOARD_SIZE];
	for (int i = 0; i < BOARD_SIZE; ++i)
	{
		this->m_board[i] = new char[BOARD_SIZE];
		for (int j = 0; j < BOARD_SIZE; ++j)
		{
			this->m_board[i][j] = ' ';
		}
	}
}

void ChessBoard::drawBoard()
{
    std::cout << PURPLE << "   ";
    for (int i = 0; i < BOARD_SIZE; ++i)
    {
        std::cout << "  " << i << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < BOARD_SIZE; ++i)
    {
        std::cout << YELLOW << "   ";
        for (int j = 0; j < BOARD_SIZE; ++j)
        {
            std::cout << "+---";
        }
        std::cout << "+\n";
        std::cout << PURPLE << i << YELLOW << "  |";
        for (int j = 0; j < BOARD_SIZE; ++j)
        {
            if (this->m_board[i][j] == 'X') {
                std::cout << RED << ' ' << this->m_board[i][j] << YELLOW << " |";
            }
            else if (this->m_board[i][j] == 'O')
            {
                std::cout << GREEN << ' ' << this->m_board[i][j] << YELLOW << " |";
            }
            else if (this->m_board[i][j] == ' ') {
                std::cout << RESET << ' ' << this->m_board[i][j] << YELLOW << " |";
            }
        }
        std::cout << std::endl;
    }
    std::cout << YELLOW << "   ";
    for (int j = 0; j < BOARD_SIZE; ++j)
    {
        std::cout << "+---";
    }
    std::cout << "+\n";
}


char ChessBoard::getPiece(int m, int n)
{
    if (m < 0 || m >= BOARD_SIZE || n < 0 || n >= BOARD_SIZE) {
        return '\0';
    }
    return this->m_board[m][n];
}

void ChessBoard::setPiece(int m, int n, char chessPiece)
{
    this->m_board[m][n] = chessPiece;
}


bool ChessBoard::isCellEmpty(int m, int n)
{
    
    return this->m_board[m][n] == ' ';
}

ChessBoard::~ChessBoard()
{
	if (m_board != nullptr)
	{
		for (int i = 0; i < BOARD_SIZE; ++i) {
			delete[] this->m_board[i];
			this->m_board[i] = nullptr;
		}
		delete[] this->m_board;
		this->m_board = nullptr;
	}
}