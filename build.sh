#!/bin/bash

nameFile="main"
pathFile="./main"

if [ -e $pathFile ]; then
    rm $nameFile
    echo "Building..."
else
    echo "Building..."
fi

g++ -g -o main BOT.cpp CaroApp.cpp ChessBoard.cpp Controller.cpp Player.cpp Referee.cpp main.cpp