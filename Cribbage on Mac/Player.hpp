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

class Game
{
public:
    Game(unsigned numPlayers, unsigned minPlayers, unsigned maxPlayers);
    void setName(unsigned pNum, std::string name);
    void setNumPlayers(unsigned int numPlayers);
    virtual void nextTurn();    // override for different game types
private:
    std::vector<Player> players;
    std::vector<Player>::iterator currPlayer;
    unsigned minPlayers;    // max number of players
    unsigned maxPlayers;    // min number of players
};

#endif /* Player_hpp */
