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

#include <string>   // declare here because the class declares members
#include <vector>   // declare here because the class declares members

class Player
{
public:
    Player();
    Player * setName(std::string newName) {name = newName; return this;};
    std::string getName() {return name;}
    void addPoints(int numPoints);
    int getScore(); // return current score
    int getScoreHistory(unsigned int turnNum);
    int getNumTurns();
    void undo();
    void redo();
private:
    std::string name;
    std::vector<int> points;
};

class Game
{
public:
    Game(unsigned numPlayers, unsigned minPlayers, unsigned maxPlayers);
    void setName(unsigned pNum, std::string name);
    void setNumPlayers(unsigned int numPlayers);
    virtual void begin();   // start the game
    virtual void executeTurn();    // override for different game types
private:
    typedef enum {INIT, INPLAY, FINISHED} gameState_t;
    gameState_t gameState;
    std::vector<Player> players;
    std::vector<Player>::iterator currPlayer;
    unsigned minPlayers;    // max number of players
    unsigned maxPlayers;    // min number of players
};

#endif /* Player_hpp */
