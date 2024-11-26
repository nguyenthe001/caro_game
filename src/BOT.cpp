#include "BOT.h"
#include <iostream>
#include <algorithm>
#include <climits>

BOT::BOT()
    :m_depth(0)
{}

void BOT::setDepth(int depth) {
    m_depth = depth;
}

int BOT::getDepth() {
    return m_depth;
}

//     int score = 0;
//     for (int i = 0; i < BOARD_SIZE; ++i) {
//         for (int j = 0; j < BOARD_SIZE; ++j) {
//             if ()
//             {
//                 /* code */
//             }
            
//                 score += 1;
//             }
//         }
//     }
//     return score;

// int BOT::horizontalScore(ChessBoard* chessBoard) {
//     int score = 0;

//     if ((chessBoard->getPiece(x, y) == chessBoard->getPiece(x, y + 1) &&
//          chessBoard->getPiece(x, y + 1) == chessBoard->getPiece(x, y + 2) &&
//          chessBoard->getPiece(x, y + 2) == chessBoard->getPiece(x, y + 3) &&
//          chessBoard->getPiece(x, y + 3) == chessBoard->getPiece(x, y + 4)) ||
//         (chessBoard->getPiece(x, y - 1) == chessBoard->getPiece(x, y) &&
//          chessBoard->getPiece(x, y) == chessBoard->getPiece(x, y + 1) &&
//          chessBoard->getPiece(x, y + 1) == chessBoard->getPiece(x, y + 2) &&
//          chessBoard->getPiece(x, y + 2) == chessBoard->getPiece(x, y + 3)) ||
//         (chessBoard->getPiece(x, y - 2) == chessBoard->getPiece(x, y - 1) &&
//          chessBoard->getPiece(x, y - 1) == chessBoard->getPiece(x, y) &&
//          chessBoard->getPiece(x, y) == chessBoard->getPiece(x, y + 1) &&
//          chessBoard->getPiece(x, y + 1) == chessBoard->getPiece(x, y + 2)) ||
//         (chessBoard->getPiece(x, y - 3) == chessBoard->getPiece(x, y - 2) &&
//          chessBoard->getPiece(x, y - 2) == chessBoard->getPiece(x, y - 1) &&
//          chessBoard->getPiece(x, y - 1) == chessBoard->getPiece(x, y) &&
//          chessBoard->getPiece(x, y) == chessBoard->getPiece(x, y + 1)) ||
//         (chessBoard->getPiece(x, y - 4) == chessBoard->getPiece(x, y - 3) &&
//          chessBoard->getPiece(x, y - 3) == chessBoard->getPiece(x, y - 2) &&
//          chessBoard->getPiece(x, y - 2) == chessBoard->getPiece(x, y - 1) &&
//          chessBoard->getPiece(x, y - 1) == chessBoard->getPiece(x, y))) {
//         score = 50000;
//     }
//     else if ((chessBoard->getPiece(x, y - 1) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == chessBoard->getPiece(x, y + 1) &&
//               chessBoard->getPiece(x, y + 1) == chessBoard->getPiece(x, y + 2) &&
//               chessBoard->getPiece(x, y + 2) == chessBoard->getPiece(x, y + 3) &&
//               chessBoard->getPiece(x, y + 3) == ' ') ||
//              (chessBoard->getPiece(x, y - 2) == chessBoard->getPiece(x, y - 1) &&
//               chessBoard->getPiece(x, y - 1) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == chessBoard->getPiece(x, y + 1) &&
//               chessBoard->getPiece(x, y + 1) == chessBoard->getPiece(x, y + 2) &&
//               chessBoard->getPiece(x, y + 2) == ' ') ||
//              (chessBoard->getPiece(x, y - 3) == chessBoard->getPiece(x, y - 2) &&
//               chessBoard->getPiece(x, y - 2) == chessBoard->getPiece(x, y - 1) &&
//               chessBoard->getPiece(x, y - 1) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == chessBoard->getPiece(x, y + 1) &&
//               chessBoard->getPiece(x, y + 1) == ' ') ||
//              (chessBoard->getPiece(x, y - 4) == chessBoard->getPiece(x, y - 3) &&
//               chessBoard->getPiece(x, y - 3) == chessBoard->getPiece(x, y - 2) &&
//               chessBoard->getPiece(x, y - 2) == chessBoard->getPiece(x, y - 1) &&
//               chessBoard->getPiece(x, y - 1) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == ' ')) {
//         score = (chessBoard->getPiece(x, y) == 'O') ? 7000 : 4320;
//     }
//     else if ((chessBoard->getPiece(x, y - 1) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == chessBoard->getPiece(x, y + 1) &&
//               chessBoard->getPiece(x, y + 1) == chessBoard->getPiece(x, y + 2) &&
//               chessBoard->getPiece(x, y + 2) == ' ') ||
//              (chessBoard->getPiece(x, y - 2) == chessBoard->getPiece(x, y - 1) &&
//               chessBoard->getPiece(x, y - 1) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == chessBoard->getPiece(x, y + 1) &&
//               chessBoard->getPiece(x, y + 1) == ' ') ||
//              (chessBoard->getPiece(x, y - 3) == chessBoard->getPiece(x, y - 2) &&
//               chessBoard->getPiece(x, y - 2) == chessBoard->getPiece(x, y - 1) &&
//               chessBoard->getPiece(x, y - 1) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == ' ')) {
//         score = 720;
//     }
//     else if ((chessBoard->getPiece(x, y - 1) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == chessBoard->getPiece(x, y + 1) &&
//               chessBoard->getPiece(x, y + 1) == ' ') ||
//              (chessBoard->getPiece(x, y - 2) == chessBoard->getPiece(x, y - 1) &&
//               chessBoard->getPiece(x, y - 1) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == ' ')) {
//         score = 120;
//     }
//     else if (chessBoard->getPiece(x, y - 3) == chessBoard->getPiece(x, y - 2) &&
//              chessBoard->getPiece(x, y - 2) == ' ' &&
//              chessBoard->getPiece(x, y) == chessBoard->getPiece(x, y + 1) &&
//              chessBoard->getPiece(x, y + 1) == ' ') {
//         score = 20;
//     }

//     return score;
// }

// int BOT::verticalScore(ChessBoard* chessBoard) {
//     int score = 0;

//     if ((chessBoard->getPiece(x, y) == chessBoard->getPiece(x+1, y) &&
//          chessBoard->getPiece(x+1, y) == chessBoard->getPiece(x+2, y) &&
//          chessBoard->getPiece(x+2, y) == chessBoard->getPiece(x+3, y) &&
//          chessBoard->getPiece(x+3, y) == chessBoard->getPiece(x+4, y)) ||
//         (chessBoard->getPiece(x-1, y) == chessBoard->getPiece(x, y) &&
//          chessBoard->getPiece(x, y) == chessBoard->getPiece(x+1, y) &&
//          chessBoard->getPiece(x+1, y) == chessBoard->getPiece(x+2, y) &&
//          chessBoard->getPiece(x+2, y) == chessBoard->getPiece(x+3, y)) ||
//         (chessBoard->getPiece(x-2, y) == chessBoard->getPiece(x-1, y) &&
//          chessBoard->getPiece(x-1, y) == chessBoard->getPiece(x, y) &&
//          chessBoard->getPiece(x, y) == chessBoard->getPiece(x+1, y) &&
//          chessBoard->getPiece(x+1, y) == chessBoard->getPiece(x+2, y)) ||
//         (chessBoard->getPiece(x-3, y) == chessBoard->getPiece(x-2, y) &&
//          chessBoard->getPiece(x-2, y) == chessBoard->getPiece(x-1, y) &&
//          chessBoard->getPiece(x-1, y) == chessBoard->getPiece(x, y) &&
//          chessBoard->getPiece(x, y) == chessBoard->getPiece(x+1, y)) ||
//         (chessBoard->getPiece(x-4, y) == chessBoard->getPiece(x-3, y) &&
//          chessBoard->getPiece(x-3, y) == chessBoard->getPiece(x-2, y) &&
//          chessBoard->getPiece(x-2, y) == chessBoard->getPiece(x-1, y) &&
//          chessBoard->getPiece(x-1, y) == chessBoard->getPiece(x, y))) {
//         score = 50000;
//     }
    
//     else if ((chessBoard->getPiece(x-1, y) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == chessBoard->getPiece(x+1, y) &&
//               chessBoard->getPiece(x+1, y) == chessBoard->getPiece(x+2, y) &&
//               chessBoard->getPiece(x+2, y) == chessBoard->getPiece(x+3, y) &&
//               chessBoard->getPiece(x+3, y) == ' ') ||
//              (chessBoard->getPiece(x-2, y) == chessBoard->getPiece(x-1, y) &&
//               chessBoard->getPiece(x-1, y) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == chessBoard->getPiece(x+1, y) &&
//               chessBoard->getPiece(x+1, y) == chessBoard->getPiece(x+2, y) &&
//               chessBoard->getPiece(x+2, y) == ' ') ||
//              (chessBoard->getPiece(x-3, y) == chessBoard->getPiece(x-2, y) &&
//               chessBoard->getPiece(x-2, y) == chessBoard->getPiece(x-1, y) &&
//               chessBoard->getPiece(x-1, y) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == chessBoard->getPiece(x+1, y) &&
//               chessBoard->getPiece(x+1, y) == ' ') ||
//              (chessBoard->getPiece(x-4, y) == chessBoard->getPiece(x-3, y) &&
//               chessBoard->getPiece(x-3, y) == chessBoard->getPiece(x-2, y) &&
//               chessBoard->getPiece(x-2, y) == chessBoard->getPiece(x-1, y) &&
//               chessBoard->getPiece(x-1, y) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == ' ')) {
//         score = (chessBoard->getPiece(x, y) == 'O') ? 7000 : 4320;
//     }
    
//     else if ((chessBoard->getPiece(x-1, y) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == chessBoard->getPiece(x+1, y) &&
//               chessBoard->getPiece(x+1, y) == chessBoard->getPiece(x+2, y) &&
//               chessBoard->getPiece(x+2, y) == chessBoard->getPiece(x+3, y) && 
//               chessBoard->getPiece(x+3, y) == ' ') ||
//              (chessBoard->getPiece(x-2, y) == chessBoard->getPiece(x-1, y) &&
//               chessBoard->getPiece(x-1, y) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == chessBoard->getPiece(x+1, y) &&
//               chessBoard->getPiece(x+1, y) == chessBoard->getPiece(x+2, y) && 
//               chessBoard->getPiece(x+2, y) == ' ')) {
//         score = 720;
//     }
    
//     else if ((chessBoard->getPiece(x-2, y) == chessBoard->getPiece(x-1, y) &&
//               chessBoard->getPiece(x-1, y) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == chessBoard->getPiece(x+1, y) &&
//               chessBoard->getPiece(x+1, y) == chessBoard->getPiece(x+2, y) &&
//               chessBoard->getPiece(x+2, y) == ' ') ||
//              (chessBoard->getPiece(x-3, y) == chessBoard->getPiece(x-2, y) &&
//               chessBoard->getPiece(x-2, y) == chessBoard->getPiece(x-1, y) &&
//               chessBoard->getPiece(x-1, y) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == chessBoard->getPiece(x+1, y) &&
//               chessBoard->getPiece(x+1, y) == ' ')) {
//         score = 720;
//     }
        
//     return score;
// }

// int BOT::topdownDiagonalScore(ChessBoard* chessBoard) {
//     int score = 0;

//     if ((chessBoard->getPiece(x, y) == chessBoard->getPiece(x + 1, y + 1) &&
//          chessBoard->getPiece(x + 1, y + 1) == chessBoard->getPiece(x + 2, y + 2) &&
//          chessBoard->getPiece(x + 2, y + 2) == chessBoard->getPiece(x + 3, y + 3) &&
//          chessBoard->getPiece(x + 3, y + 3) == chessBoard->getPiece(x + 4, y + 4)) ||
//         (chessBoard->getPiece(x - 1, y - 1) == chessBoard->getPiece(x, y) &&
//          chessBoard->getPiece(x, y) == chessBoard->getPiece(x + 1, y + 1) &&
//          chessBoard->getPiece(x + 1, y + 1) == chessBoard->getPiece(x + 2, y + 2) &&
//          chessBoard->getPiece(x + 2, y + 2) == chessBoard->getPiece(x + 3, y + 3)) ||
//         (chessBoard->getPiece(x - 2, y - 2) == chessBoard->getPiece(x - 1, y - 1) &&
//          chessBoard->getPiece(x - 1, y - 1) == chessBoard->getPiece(x, y) &&
//          chessBoard->getPiece(x, y) == chessBoard->getPiece(x + 1, y + 1) &&
//          chessBoard->getPiece(x + 1, y + 1) == chessBoard->getPiece(x + 2, y + 2)) ||
//         (chessBoard->getPiece(x - 3, y - 3) == chessBoard->getPiece(x - 2, y - 2) &&
//          chessBoard->getPiece(x - 2, y - 2) == chessBoard->getPiece(x - 1, y - 1) &&
//          chessBoard->getPiece(x - 1, y - 1) == chessBoard->getPiece(x, y) &&
//          chessBoard->getPiece(x, y) == chessBoard->getPiece(x + 1, y + 1)) ||
//         (chessBoard->getPiece(x - 4, y - 4) == chessBoard->getPiece(x - 3, y - 3) &&
//          chessBoard->getPiece(x - 3, y - 3) == chessBoard->getPiece(x - 2, y - 2) &&
//          chessBoard->getPiece(x - 2, y - 2) == chessBoard->getPiece(x - 1, y - 1) &&
//          chessBoard->getPiece(x - 1, y - 1) == chessBoard->getPiece(x, y))) {
//         score = 50000;
//     }
//     else if ((chessBoard->getPiece(x - 1, y - 1) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == chessBoard->getPiece(x + 1, y + 1) &&
//               chessBoard->getPiece(x + 1, y + 1) == chessBoard->getPiece(x + 2, y + 2) &&
//               chessBoard->getPiece(x + 2, y + 2) == chessBoard->getPiece(x + 3, y + 3) && 
//               chessBoard->getPiece(x + 3, y + 3) == ' ') ||
//              (chessBoard->getPiece(x - 2, y - 2) == chessBoard->getPiece(x - 1, y - 1) &&
//               chessBoard->getPiece(x - 1, y - 1) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == chessBoard->getPiece(x + 1, y + 1) &&
//               chessBoard->getPiece(x + 1, y + 1) == chessBoard->getPiece(x + 2, y + 2) &&
//               chessBoard->getPiece(x + 2, y + 2) == ' ') ||
//              (chessBoard->getPiece(x - 3, y - 3) == chessBoard->getPiece(x - 2, y - 2) &&
//               chessBoard->getPiece(x - 2, y - 2) == chessBoard->getPiece(x - 1, y - 1) &&
//               chessBoard->getPiece(x - 1, y - 1) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == chessBoard->getPiece(x + 1, y + 1) &&
//               chessBoard->getPiece(x + 1, y + 1) == ' ') ||
//              (chessBoard->getPiece(x - 4, y - 4) == chessBoard->getPiece(x - 3, y - 3) &&
//               chessBoard->getPiece(x - 3, y - 3) == chessBoard->getPiece(x - 2, y - 2) &&
//               chessBoard->getPiece(x - 2, y - 2) == chessBoard->getPiece(x - 1, y - 1) &&
//               chessBoard->getPiece(x - 1, y - 1) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == ' ')) {
//         score = (chessBoard->getPiece(x, y) == 'O') ? 7000 : 4320; // (2) +OOOO+
//     }
//     else if ((chessBoard->getPiece(x - 1, y - 1) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == chessBoard->getPiece(x + 1, y + 1) &&
//               chessBoard->getPiece(x + 1, y + 1) == chessBoard->getPiece(x + 2, y + 2) &&
//               chessBoard->getPiece(x + 2, y + 2) == ' ') ||
//              (chessBoard->getPiece(x - 2, y - 2) == chessBoard->getPiece(x - 1, y - 1) &&
//               chessBoard->getPiece(x - 1, y - 1) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == chessBoard->getPiece(x + 1, y + 1) &&
//               chessBoard->getPiece(x + 1, y + 1) == ' ')) {
//         score = 720;
//     }

//     return score;
// }



// int BOT::downtopDiagonalScore(ChessBoard* chessBoard) {
//     int score = 0;

//     if ((chessBoard->getPiece(x, y) == chessBoard->getPiece(x+1, y-1) &&
//          chessBoard->getPiece(x+1, y-1) == chessBoard->getPiece(x+2, y-2) &&
//          chessBoard->getPiece(x+2, y-2) == chessBoard->getPiece(x+3, y-3) &&
//          chessBoard->getPiece(x+3, y-3) == chessBoard->getPiece(x+4, y-4)) ||
//         (chessBoard->getPiece(x-1, y+1) == chessBoard->getPiece(x, y) &&
//          chessBoard->getPiece(x, y) == chessBoard->getPiece(x+1, y-1) &&
//          chessBoard->getPiece(x+1, y-1) == chessBoard->getPiece(x+2, y-2) &&
//          chessBoard->getPiece(x+2, y-2) == chessBoard->getPiece(x+3, y-3)) ||
//         (chessBoard->getPiece(x-2, y+2) == chessBoard->getPiece(x-1, y+1) &&
//          chessBoard->getPiece(x-1, y+1) == chessBoard->getPiece(x, y) &&
//          chessBoard->getPiece(x, y) == chessBoard->getPiece(x+1, y-1) &&
//          chessBoard->getPiece(x+1, y-1) == chessBoard->getPiece(x+2, y-2)) ||
//         (chessBoard->getPiece(x-3, y+3) == chessBoard->getPiece(x-2, y+2) &&
//          chessBoard->getPiece(x-2, y+2) == chessBoard->getPiece(x-1, y+1) &&
//          chessBoard->getPiece(x-1, y+1) == chessBoard->getPiece(x, y) &&
//          chessBoard->getPiece(x, y) == chessBoard->getPiece(x+1, y-1)) ||
//         (chessBoard->getPiece(x-4, y+4) == chessBoard->getPiece(x-3, y+3) &&
//          chessBoard->getPiece(x-3, y+3) == chessBoard->getPiece(x-2, y+2) &&
//          chessBoard->getPiece(x-2, y+2) == chessBoard->getPiece(x-1, y+1) &&
//          chessBoard->getPiece(x-1, y+1) == chessBoard->getPiece(x, y))) {
//         score = 50000;
//     }

//     else if ((chessBoard->getPiece(x-1, y+1) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == chessBoard->getPiece(x+1, y-1) &&
//               chessBoard->getPiece(x+1, y-1) == chessBoard->getPiece(x+2, y-2) &&
//               chessBoard->getPiece(x+2, y-2) == chessBoard->getPiece(x+3, y-3) &&
//               chessBoard->getPiece(x+3, y-3) == ' ') ||
//              (chessBoard->getPiece(x-2, y+2) == chessBoard->getPiece(x-1, y+1) &&
//               chessBoard->getPiece(x-1, y+1) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == chessBoard->getPiece(x+1, y-1) &&
//               chessBoard->getPiece(x+1, y-1) == chessBoard->getPiece(x+2, y-2) &&
//               chessBoard->getPiece(x+2, y-2) == ' ') ||
//              (chessBoard->getPiece(x-3, y+3) == chessBoard->getPiece(x-2, y+2) &&
//               chessBoard->getPiece(x-2, y+2) == chessBoard->getPiece(x-1, y+1) &&
//               chessBoard->getPiece(x-1, y+1) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == chessBoard->getPiece(x+1, y-1) &&
//               chessBoard->getPiece(x+1, y-1) == ' ') ||
//              (chessBoard->getPiece(x-4, y+4) == chessBoard->getPiece(x-3, y+3) &&
//               chessBoard->getPiece(x-3, y+3) == chessBoard->getPiece(x-2, y+2) &&
//               chessBoard->getPiece(x-2, y+2) == chessBoard->getPiece(x-1, y+1) &&
//               chessBoard->getPiece(x-1, y+1) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == ' ')) {
//         score = (chessBoard->getPiece(x, y) == 'O') ? 7000 : 4320;
//     }

//     else if ((chessBoard->getPiece(x-1, y+1) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == chessBoard->getPiece(x+1, y-1) &&
//               chessBoard->getPiece(x+1, y-1) == chessBoard->getPiece(x+2, y-2) &&
//               chessBoard->getPiece(x+2, y-2) == chessBoard->getPiece(x+3, y-3) &&
//               chessBoard->getPiece(x+3, y-3) == ' ') ||
//              (chessBoard->getPiece(x-2, y+2) == chessBoard->getPiece(x-1, y+1) &&
//               chessBoard->getPiece(x-1, y+1) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == chessBoard->getPiece(x+1, y-1) &&
//               chessBoard->getPiece(x+1, y-1) == chessBoard->getPiece(x+2, y-2) &&
//               chessBoard->getPiece(x+2, y-2) == ' ') ||
//              (chessBoard->getPiece(x-3, y+3) == chessBoard->getPiece(x-2, y+2) &&
//               chessBoard->getPiece(x-2, y+2) == chessBoard->getPiece(x-1, y+1) &&
//               chessBoard->getPiece(x-1, y+1) == chessBoard->getPiece(x, y) &&
//               chessBoard->getPiece(x, y) == chessBoard->getPiece(x+1, y-1) &&
//               chessBoard->getPiece(x+1, y-1) == ' ')) {
//         score = 720;
//     }

//     return score;
// }


int BOT::checkNeighbor(ChessBoard* chessBoard) {
    int score = 0;
    for (int i = 0; i < BOARD_SIZE; ++i) {
        for (int j = 0; j < BOARD_SIZE; ++j) {
            if (chessBoard->getPiece(i, j) == 'X') {
                if(chessBoard->getPiece(i - 1, j - 1) == 'O'||
                chessBoard->getPiece(i-1, j) == 'O'||
                chessBoard->getPiece(i-1, j+1) == 'O'||
                chessBoard->getPiece(i, j-1) == 'O'||
                chessBoard->getPiece(i, j+1) == 'O'||
                chessBoard->getPiece(i+1, j-1) == 'O'||
                chessBoard->getPiece(i+1, j) == 'O'||
                chessBoard->getPiece(i+1, j+1) == 'O')
                score += 1;
            }
        }
    }
    return score;
}



int BOT::minimax(ChessBoard* chessBoard, bool isMax, int alpha, int beta, int depth) {
    int score = checkNeighbor(chessBoard);
    if (depth == 0) return score;

    if (isMax) {
        int bestScore = INT_MIN;
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
        int bestScore = INT_MAX;
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
    int bestScore = INT_MIN;
    std::pair<int, int> move;

    for (int i = 0; i < BOARD_SIZE; ++i)
    {
        for (int j = 0; j < BOARD_SIZE; ++j)
        {
            if (chessBoard->isCellEmpty(i, j))
            {
                chessBoard->setPiece(i, j, 'O');
                int score = minimax(chessBoard, false, INT_MIN, INT_MAX, getDepth());
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
    std::cout << "BOT...\n";
    std::pair<int, int> move = getNextMove(chessBoard);
    chessBoard->setPiece(move.first, move.second, chessPiece);
    return move;
}
