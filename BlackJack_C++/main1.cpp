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

constexpr int g_maxScore { 21 } ;
constexpr int g_minDealer { 17 } ;

struct Player
{
    int score { } ;
} ;

bool hitOrStand()
{
    std::cout << "Hit or Stand (h or s)? " ;
    char ch { } ;
    std::cin >> ch ;
    
    return ch == 'h' ;
}

// We want this to return true whenever the player goes over
bool playerTurn( Player& player, const std::array<Card, 52>& deck, int& deckIndex )
{
    
    // a function to ask if the player wants to hit or stand
    // we also want to be able to do this forever
    while ( true )
    {
        if ( player.score > 21 )
        {
            std::cout << "Bust\n" ;
            return true ;
        }
        else
        {
            if ( hitOrStand() )
            {
                player.score += getCardValue( deck.at( deckIndex++ ) ) ;
                std::cout << "Player Score: " << player.score << '\n' ;
            }
            else
            {
                return false ;
            }
        }
    }
}

// We want this to return true whenever the dealer busts
bool dealerTurn( Player& dealer, const std::array<Card, 52>& deck, int& deckIndex )
{
    while ( dealer.score < g_minDealer )
    {
        dealer.score += getCardValue( deck.at( deckIndex++ ) ) ;
        std::cout << "Dealer Score: " << dealer.score << '\n' ;
    }
    
    if ( dealer.score > g_maxScore )
    {
        std::cout << "Bust\n" ;
        return true ;
    }
    
    return false ;
}

bool playBlackJack ( const std::array<Card, 52>& deck )
{
    // We need our player score
    Player player { 0 } ;
    
    // We need our dealer score
    Player dealer { 0 } ;
    
    // we also need a value to track the deck index
    int deckIndex { 0 } ;
    
    // lets give some values to the dealer
    dealer.score += getCardValue( deck.at(deckIndex++) ) ;
    std::cout << "Dealer Score: " << dealer.score << '\n' ;
    
    // lets give some values to p1
    player.score += getCardValue( deck.at(deckIndex++) ) ;
    std::cout << "Player Score: " << player.score << '\n' ;
    
    if ( playerTurn( player, deck, deckIndex ) )
    {
        return false ;
    }
    else if ( dealerTurn( dealer , deck , deckIndex ) )
    {
        return true ;
    }
    
    return player.score > dealer.score ;
}

int main()
{
    std::array<Card, 52> deck { newDeck() } ;
    shuffleDeck( deck ) ;
    
    if( playBlackJack( deck ) )
    {
        std::cout << "You Win!\n" ;
    }
    else
    {
        std::cout << "You lose\n" ;
    }
    
    return 0;
}
