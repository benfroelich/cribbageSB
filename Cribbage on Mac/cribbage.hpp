//
//  cribbage.hpp
//  Cribbage on Mac
//
//  Created by Ben Froelich on 10/1/16.
//  Copyright © 2016 Ben Froelich. All rights reserved.
//

#ifndef cribbage_hpp
#define cribbage_hpp

#include <stdio.h>
#include "Player.hpp"

class CribbagePlayerCollection : public PlayerCollection    // implement cribbage specifics
{
    void nextTurn();    // overriden virtual from parent class
private:
    typedef enum PLAYSTATE {PEGGING,        // peg
                            COUNTING,       // count hand
                            CUTTING,        // cut the deck
                            CRIB}           // count their crib
    playState;

};

#endif /* cribbage_hpp */
