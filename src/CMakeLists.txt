cmake_minimum_required(VERSION 3.22)

project(cardio)
set(CMAKE_CXX_STANDARD 14)

add_executable(
    cardio
        main.cpp player.cpp player.h game.cpp game.h bot.cpp bot.h)