//
//  Player.cpp
//  Cribbage on Mac
//
//  Created by Ben Froelich on 9/24/16.
//  Copyright © 2016 Ben Froelich. All rights reserved.
//

#include <iostream>
#include "Player.hpp"

void PlayerCollection::nextTurn()
{
    // execute a cribbage turn
    std::cout << "player " << currPlayer->getName() << " went!!!" << "\n";
    
    if(currPlayer == players.end()) currPlayer = players.begin();   // wrap around
    else currPlayer++;
}

PlayerCollection::PlayerCollection(unsigned numPlayers)
{
    players.clear();
    _LIBCPP_ASSERT(false, "hi");
    _LIBCPP_ASSERT(1, "hi?");
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
