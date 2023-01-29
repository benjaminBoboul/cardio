//
// Created by benjamin on 19/01/23.
//

#ifndef CARDIO_GAME_H
#define CARDIO_GAME_H


#include <array>
#include <vector>
#include "player.hpp"
#include "battle.hpp"

class Game {
private:
    std::array<Player*, 2> players = {};
    std::vector<Battle*> battles = {};
public:
    Game();
    ~Game();

    void addPlayer(int index, Player* p);
    Player* getPlayer(int index);
    Battle* fight();
};


#endif //CARDIO_GAME_H
