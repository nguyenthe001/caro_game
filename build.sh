#!/bin/bash

nameFile="main"
pathFile="./main"

if [ -e $pathFile ]; then
    rm $nameFile
    echo "Building..."
else
    echo "Building..."
fi

make