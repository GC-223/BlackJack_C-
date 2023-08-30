//
//  Functions.cpp
//  BlackJack_C++
//
//  Created by Greyson Chavez on 8/29/23.
//

#include "Functions.hpp"

// we need a way to fill the deck
std::array<Card, 52> newDeck()
{
    std::array<Card, 52> deck { } ;

    int index { 0 } ;
    // if we loop through all the suits and all the ranks, then that will fill the array
    for ( int suit = 0 ; suit < static_cast<int>(CardSuit::max) ; ++suit)
    {
        for ( int rank = 0 ; rank < static_cast<int>(CardRank::max) ; ++rank )
        {
            deck[index].suit = static_cast<CardSuit>(suit) ;
            deck[index].rank = static_cast<CardRank>(rank) ;
            ++index ;
        }
    }
    
    return deck ;
}

// alright now lets get a function to print one card
void printCard( const Card& card )
{
    switch ( card.rank )
    {
        using enum CardRank ;
        case two:
            std::cout << 2 ;
            break ;
        case three:
            std::cout << 3 ;
            break ;
        case four:
            std::cout << 4 ;
            break ;
        case five:
            std::cout << 5 ;
            break ;
        case six:
            std::cout << 6 ;
            break ;
        case seven:
            std::cout << 7 ;
            break ;
        case eight:
            std::cout << 8 ;
            break ;
        case nine:
            std::cout << 9 ;
            break ;
        case ten:
            std::cout << 'T' ;
            break ;
        case jack:
            std::cout << 'J' ;
            break ;
        case queen:
            std::cout << 'Q' ;
            break ;
        case king:
            std::cout << 'K' ;
            break ;
        case ace:
            std::cout << 'A' ;
            break ;
        default:
            std::cout << "Error" ;
            break ;
    }
    
    switch ( card.suit )
    {
        using enum CardSuit ;
        case diamond:
            std::cout << 'D' ;
            break ;
        case heart:
            std::cout << 'H' ;
            break ;
        case spade:
            std::cout << 'S' ;
            break ;
        case club:
            std::cout << 'C' ;
            break ;
        default:
            std::cout << "Error" ;
            break ;
    }
}

// now a function to print the deck
void printDeck( const std::array<Card, 52>& deck)
{
    for( const auto& card : deck )
    {
        printCard( card ) ;
        std::cout << ' ' ;
    }
}


void printHand( const std::vector<Card>& hand )
{
    for ( const auto& card : hand )
    {
        printCard( card ) ;
        std::cout << ' ' ;
    }
}

// now a function to shuffle the deck
void shuffleDeck( std::array<Card, 52>& deck )
{
    std::mt19937 mt { std::random_device{}() } ;
    
    std::shuffle( deck.begin() , deck.end() , mt ) ;
}


// a new function to get the numeric value of a card
int getCardValue ( const Card& card )
{
    switch( card.rank )
    {
        using enum CardRank ;
        case two:
            return 2 ;
        case three:
            return 3 ;
        case four:
            return 4 ;
        case five:
            return 5 ;
        case six:
            return 6 ;
        case seven:
            return 7 ;
        case eight:
            return 8 ;
        case nine:
            return 9 ;
        case ten:
            return 10 ;
        case jack:
            return 10 ;
        case queen:
            return 10 ;
        case king:
            return 10 ;
        case ace:
            return 11 ;
        default:
            std::cout << "Error" ;
            return 0 ;
        
    }
}


