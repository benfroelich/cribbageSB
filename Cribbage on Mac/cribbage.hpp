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

class Cribbage : public Game    // implement cribbage specifics
{
    Cribbage() : Game(3, 2, 4) {};
    void nextTurn();    // overriden virtual from parent class
private:
    typedef enum PLAYSTATE {PEGGING,        // peg
                            COUNTING,       // count hand
                            CRIB,           // count their crib
                            NUM_PLAYSTATES}
    playState;

};

#endif /* cribbage_hpp */
