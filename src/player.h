//
// Created by benjamin on 19/01/23.
//

#ifndef CARDIO_PLAYER_H
#define CARDIO_PLAYER_H

#include <iostream>

class Player {
protected:
    std::string name;
public:
    Player();
    Player(std::string name);
    ~Player();

    virtual std::string getName();
};


#endif //CARDIO_PLAYER_H
