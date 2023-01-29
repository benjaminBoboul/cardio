#ifndef CARDIO_BATTLE_H
#define CARDIO_BATTLE_H

#include "player.hpp"
#include <array>

class Battle {
  private:
    std::array<Player*, 2> players;
  public:
    Battle(std::array<Player*, 2> players);
    void run();
    Player* getWinner();
};

#endif