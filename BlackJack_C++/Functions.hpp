//
//  Functions.hpp
//  BlackJack_C++
//
//  Created by Greyson Chavez on 8/29/23.
//

#ifndef Functions_hpp
#define Functions_hpp

#include <algorithm>
#include <array>
#include <iostream>
#include <random>
#include <string>
#include <vector>
#include "Classes.hpp"


std::array<Card, 52> newDeck() ;

void printCard( const Card& card ) ;

void printDeck( const std::array<Card, 52>& deck) ;

void printHand( const std::vector<Card>& hand ) ;

void shuffleDeck( std::array<Card, 52>& deck ) ;

int getCardValue ( const Card& card ) ;

#endif /* Functions_hpp */
