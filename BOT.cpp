#include "BOT.h"
#include <iostream>
#include <algorithm>

BOT::BOT()
    :m_depth(0)
{}

void BOT::setDepth(int depth) {
    m_depth = depth;
}

int BOT::getDepth() {
    return m_depth;
}

int BOT::evaluate(ChessBoard* chessBoard) {
    // Implement your evaluation function here
    return 0;
}

int BOT::minimax(ChessBoard* chessBoard, bool isMax, int alpha, int beta, int depth) {
    Referee referee;
    int score = evaluate(chessBoard);

    if (depth == 0 || score == 10 || score == -10 || referee.checkDraw(chessBoard)) {
        return score;
    }

    if (isMax) {
        int bestScore = -100000;
        for (int i = 0; i < BOARD_SIZE; i++) {
            for (int j = 0; j < BOARD_SIZE; j++) {
                if (chessBoard->isCellEmpty(i, j)) {
                    chessBoard->setPiece(i, j, 'O');
                    bestScore = std::max(bestScore, minimax(chessBoard, !isMax, alpha, beta, depth - 1));
                    chessBoard->setPiece(i, j, ' ');
                    alpha = std::max(alpha, bestScore);
                    if (beta <= alpha) break;
                }
            }
        }
        return bestScore;
    }
    else {
        int bestScore = 100000;
        for (int i = 0; i < BOARD_SIZE; i++) {
            for (int j = 0; j < BOARD_SIZE; j++) {
                if (chessBoard->isCellEmpty(i, j)) {
                    chessBoard->setPiece(i, j, 'X');
                    bestScore = std::min(bestScore, minimax(chessBoard, !isMax, alpha, beta, depth - 1));
                    chessBoard->setPiece(i, j, ' ');
                    beta = std::min(beta, bestScore);
                    if (beta <= alpha) break;
                }
            }
        }
        return bestScore;
    }
}

std::pair<int, int> BOT::getNextMove(ChessBoard* chessBoard)
{
    int bestScore = -100000;
    std::pair<int, int> move;

    for (int i = 0; i < BOARD_SIZE; ++i)
    {
        for (int j = 0; j < BOARD_SIZE; ++j)
        {
            if (chessBoard->isCellEmpty(i, j))
            {
                chessBoard->setPiece(i, j, 'O');
                int score = minimax(chessBoard, false, -100000, 100000, getDepth());
                chessBoard->setPiece(i, j, ' ');
                if (score > bestScore)
                {
                    bestScore = score;
                    move = { i, j };
                }
            }
        }
    }
    return move;
}

std::pair<int, int> BOT::placeAPiece(ChessBoard* chessBoard, char chessPiece) {
    std::cout << "BOT...";
    std::pair<int, int> move = getNextMove(chessBoard);
    chessBoard->setPiece(move.first, move.second, chessPiece);
    return move;
}
