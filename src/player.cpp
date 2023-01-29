//
// Created by benjamin on 19/01/23.
//

#include "player.hpp"

#include <utility>
#include <sys/syslog.h>

Player::Player(std::string name) {
    syslog(LOG_DEBUG, "Created new player %s at %p.", name.c_str(), this);
    this->name = std::move(name);
}

Player::~Player() {
    syslog(LOG_DEBUG, "Delete player %p.", this);
}

std::string Player::getName() {
    return this->name;
}

void Player::setHealth(int health)
{
    this->health = health;
}

int Player::getHealth()
{
    return this->health;
}

Player::Player() = default;
