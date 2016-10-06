//
//  Player.cpp
//  Cribbage on Mac
//
//  Created by Ben Froelich on 9/24/16.
//  Copyright © 2016 Ben Froelich. All rights reserved.
//

#include <iostream>
#include "Player.hpp"

void Game::nextTurn()
{
    // execute a cribbage turn
    std::cout << "player " << currPlayer->getName() << " went!!!" << "\n";
    
    if(currPlayer == players.end()-1)   // std::vector::end() returns the "past-the-end" element in the vector, so subtract 1
        currPlayer = players.begin();   // wrap around
    
    else currPlayer++;
}

Game::Game(unsigned numPlayers, unsigned minPlayers, unsigned maxPlayers)
{
    this->minPlayers = minPlayers;
    this->maxPlayers = maxPlayers;
    this->setNumPlayers(numPlayers);
}
void Game::setNumPlayers(<#unsigned int numPlayers#>)
{
    players.clear();
    for(int p=0; p<numPlayers; p++)
    {
        std::string pName = "Player ";
        pName += std::to_string(p+1);
        Player newP;
        newP.setName(pName);
        players.push_back(newP);
    }
    players.shrink_to_fit();
    currPlayer = players.begin();
}
