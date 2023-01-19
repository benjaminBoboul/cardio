//
// Created by benjamin on 19/01/23.
//

#include <sys/syslog.h>
#include "game.h"

Game::Game() {
    syslog(LOG_DEBUG, "Created new game %p.", this);
}

Game::~Game() {
    syslog(LOG_DEBUG, "Delete game %p.", this);
}

void Game::addPlayer(int index, Player* p) {
    this->players[index] = p;
}

Player* Game::getPlayer(int index) {
    return this->players[index];
}
