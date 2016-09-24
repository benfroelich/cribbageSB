//
//  main.cpp
//  Cribbage on Mac
//
//  Created by Ben Froelich on 9/24/16.
//  Copyright © 2016 Ben Froelich. All rights reserved.
//

#include <iostream>
#include "Player.hpp"

PlayerCollection players(3);
	
int main(int argc, const char * argv[])
{

    players.nextTurn();
    players.nextTurn();
    players.nextTurn();
    players.nextTurn();
    players.nextTurn();
    players.nextTurn();
    players.nextTurn();
    
    return 0;
}
