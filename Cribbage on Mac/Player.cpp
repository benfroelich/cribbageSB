//
//  Player.cpp
//  Cribbage on Mac
//
//  Created by Ben Froelich on 9/24/16.
//  Copyright © 2016 Ben Froelich. All rights reserved.
//
#include <stdio.h>
#include <iostream>
#include "Player.hpp"

Player::Player()
{
    points.clear();
    points.push_back(0);
    name.clear();
};
void Player::addPoints(int numPoints)
{
    int currScore = points.back();
    points.push_back(currScore+numPoints);
}
int Player::getScore()
{
    return points.back();
}
void Game::executeTurn()
{
    int points = 0;
    // execute a turn
    std::cout << "enter number of points for " << currPlayer->getName() << " ";
    std::cin >> points;
    std::cout << "player " << currPlayer->getName() << " went!!!" << "\n";
    currPlayer->addPoints(points);
    std::cout << currPlayer->getName() << "'s " << "current score is "
    << currPlayer->getScore() << std::endl;
    if(currPlayer == players.end()-1)   // our iterator is at the last elem in vec
        currPlayer = players.begin();   // wrap around
    
    else currPlayer++;
}

Game::Game(unsigned numPlayers, unsigned minPlayers, unsigned maxPlayers)
{
    this->minPlayers = minPlayers;
    this->maxPlayers = maxPlayers;
    this->setNumPlayers(numPlayers);
}
void Game::setNumPlayers(unsigned int numPlayers)
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
