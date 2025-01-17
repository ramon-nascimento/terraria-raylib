#!/bin/bash
g++ main.cpp src/player.cpp -Iincludes -o main -lraylib -lm -ldl -lpthread -lGL -lrt -lX11
