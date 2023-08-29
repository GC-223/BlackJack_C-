//
//  main1.cpp
//  BlackJack_C++
//
//  Created by Greyson Chavez on 8/29/23.
//


// For a game of blackjack
// We need a deck of cards
    // each card has a suit and a rank


#include <algorithm>
#include <array>
#include <iostream>
#include <random>
#include <string>
#include <vector>
#include "Functions.hpp"


void dealCard( std::vector<Card>& hand , const std::array<Card, 52>& deck )
{
    // a variable to keep track of deck index forever
    static int deckIndex { 0 } ;
    
    hand.push_back( deck[deckIndex] ) ;
    ++deckIndex ;
}

void newGame( std::vector<Card>& dealer, std::vector<Card>& player, const std::array<Card, 52>& deck)
{
    for ( int i = 0 ; i < 3 ; ++i )
    {
        if ( i % 2 == 0 )
        {
            dealCard( player, deck ) ;
        }
        else
        {
            dealCard( player, deck ) ;
        }
    }
}

// now we need a function to hit or stay
bool hitStay()
{
    std::cout << "Enter 1 to hit; Enter 2 to stand\n" ;
    int input { } ;
    std::cin >> input ;
    
    return input == 1 ;
}

// a function to 

// we finally need a function to play blackJack
void playBlackJack ( std::array<Card, 52>& deck )
{
    // We are only going to have two players at first
    std::vector<Card> dealer ;
    std::vector<Card> player ;
    
    // we are going to need a function to deal a card
    // We need a function for the start of the game
    newGame( dealer, player, deck ) ;
    
    if ( hitStay() )
    {
        dealCard( player, deck ) ;
    }
    
    // now for the dealer
    if ( hitStay() )
    {
        dealCard( dealer, deck ) ;
    }
    
}

int main()
{
    std::array<Card, 52> deck { newDeck() } ;
    
    printDeck( deck ) ;
    
    shuffleDeck( deck ) ;
    
    std::cout << "\n\n" ;
    
    printDeck( deck ) ;
    
    std::cout << "\n\n" ;

    playBlackJack( deck ) ;
    
    return 0;
}
