//
//  main.cpp
//  Cribbage on Mac
//
//  Created by Ben Froelich on 9/24/16.
//  Copyright © 2016 Ben Froelich. All rights reserved.
//

#include <iostream>
#include "Player.hpp"

Game game(2,1,5);    // create a game
	
int main(int argc, const char * argv[])
{

    game.setNumPlayers(5);
    for(int i=0; i<10; i++)
        game.executeTurn();

    
    return 0;
}
