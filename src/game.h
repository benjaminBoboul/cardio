//
// Created by benjamin on 19/01/23.
//

#ifndef CARDIO_GAME_H
#define CARDIO_GAME_H


#include <array>
#include "player.h"

class Game {
private:
    std::array<Player*, 2> players = {};
public:
    Game();
    ~Game();

    void addPlayer(int index, Player* p);
    Player* getPlayer(int index);
};


#endif //CARDIO_GAME_H
