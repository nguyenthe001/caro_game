#!/bin/bash

targetFolder="build"

if [ ! -d "$targetFolder" ]; then
    echo "-- Creating build directory..."
    mkdir "$targetFolder"
fi

cd "$targetFolder"

echo "-- Running cmake to configure the project..."
cmake ..

echo "-- Building the project..."
cmake --build .

cd ..
