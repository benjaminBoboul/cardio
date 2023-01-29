#include <sys/syslog.h>
#include "battle.hpp"
#include <ctime>
#include <stdexcept>


Battle::Battle(std::array<Player*, 2> players)
{
  this->players = std::move(players);
}

void Battle::run()
{

  if (false) // TODO: Throw exception if one player got 0 hp
    throw std::logic_error("All players must have health in order to run the battle.");
  
  std::srand(std::time(nullptr));
  int random_player_index = std::rand() % 2; 

  this->players[random_player_index]->setHealth(0);
  syslog(LOG_NOTICE, "Battle ended, player %p win", this->players[random_player_index]);
}
