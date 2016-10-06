//
//  main.cpp
//  Cribbage on Mac
//
//  Created by Ben Froelich on 9/24/16.
//  Copyright © 2016 Ben Froelich. All rights reserved.
//

#include <iostream>
#include "Player.hpp"

Game players(2,1,5);    // create a 3 player game
	
int main(int argc, const char * argv[])
{

    players.setNumPlayers(5);
    players.nextTurn();
    players.nextTurn();
    players.nextTurn();
    players.nextTurn();
    players.nextTurn();
    players.nextTurn();
    players.nextTurn();
    
    return 0;
}
