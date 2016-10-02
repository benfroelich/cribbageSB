//
//  Player.hpp
//  Cribbage on Mac
//
//  Created by Ben Froelich on 9/24/16.
//  Copyright © 2016 Ben Froelich. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#define _LIBCPP_DEBUG_LEVEL 1
#include <stdio.h>
#include <string>
#include <vector>

class Player
{
public:
    Player * setName(std::string newName) {name = newName; return this;};
    std::string getName() {return name;}
private:
    std::string name;
    std::vector<unsigned> points;
};

class PlayerCollection
{
public:
    PlayerCollection(unsigned numPlayers);
    void setName(unsigned pNum, std::string name);
    virtual void nextTurn();    // override for different game types
private:
    std::vector<Player> players;
    std::vector<Player>::iterator currPlayer;
};

#endif /* Player_hpp */
