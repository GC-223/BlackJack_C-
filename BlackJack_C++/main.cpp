//
//  main.cpp
//  BlackJack_C++
//
//  Created by Greyson Chavez on 8/28/23.
//



// What are all of the things that we need for the initial set up of the game?

// A deck - An array of cards
    // A card
        // A suit
        // A number/rank


#include <array>
#include <iostream>
#include <string>

// we need the different types of suits
// Relatively few, and they are enumerated
enum class CardSuit
{
    spade ,
    heart ,
    diamond ,
    club ,
    
    suitMax ,
} ;

// We now need the ranks
enum class CardRank
{
    one ,
    two ,
    three ,
    four ,
    five ,
    six ,
    seven ,
    eight ,
    nine ,
    ten ,
    jack ,
    queen ,
    king ,
    ace ,
    
    rankMax ,
} ;

// so lets start with a card structure
struct Card
{
    CardSuit suit { } ;
    CardRank rank { } ;
} ;



int main(int argc, const char * argv[])
{
    
    // now we want our deck
    // the deck is going to be an array of cards
    
    
    return 0;
}
