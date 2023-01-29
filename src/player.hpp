//
// Created by benjamin on 19/01/23.
//

#ifndef CARDIO_PLAYER_H
#define CARDIO_PLAYER_H

#include <string>

class Player {
protected:
    std::string name;
    int health = 100;

public:
    Player();
    Player(std::string name);
    ~Player();

    virtual std::string getName();
    void setHealth(int health);
    int getHealth();
};


#endif //CARDIO_PLAYER_H
