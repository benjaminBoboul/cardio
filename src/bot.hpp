//
// Created by benjamin on 19/01/23.
//

#ifndef CARDIO_BOT_H
#define CARDIO_BOT_H


#include "player.hpp"

class Bot : public Player {

public:
    std::string getName() override;

    using Player::Player;
};


#endif //CARDIO_BOT_H
