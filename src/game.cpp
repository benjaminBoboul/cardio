//
// Created by benjamin on 19/01/23.
//

#include <sys/syslog.h>
#include "game.hpp"

Game::Game() {
    syslog(LOG_DEBUG, "Created new game %p.", this);
}

Game::~Game() {
    syslog(LOG_DEBUG, "Delete game %p.", this);
}

void Game::addPlayer(int index, Player* p) {
    syslog(LOG_DEBUG, "Add player %p in game %p at index %d", p, this, index);
    this->players[index] = p;
}

Player* Game::getPlayer(int index) {
    return this->players[index];
}

Battle* Game::fight()
{
    Battle _local_battle = Battle(this->players);
    syslog(LOG_NOTICE, "Start a new battle %p", &_local_battle);
    this->battles.push_back(&_local_battle);
    _local_battle.run();
    return nullptr;
}