////
////  main.cpp
////  BlackJack_C++
////
////  Created by Greyson Chavez on 8/28/23.
////
//
//
//
//// What are all of the things that we need for the initial set up of the game?
//
//// A deck - An array of cards
//    // A card
//        // A suit
//        // A number/rank
//
//#include <algorithm>    // for std::shuffle
//#include <array>
//#include <iostream>
//#include <random>       // for mersenne twister
//#include <string>
//
//// we need the different types of suits
//// Relatively few, and they are enumerated
//enum class CardSuit
//{
//    spade ,
//    heart ,
//    diamond ,
//    club ,
//    
//    suitMax ,
//} ;
//
//// We now need the ranks
//enum class CardRank
//{
//    two ,
//    three ,
//    four ,
//    five ,
//    six ,
//    seven ,
//    eight ,
//    nine ,
//    ten ,
//    jack ,
//    queen ,
//    king ,
//    ace ,
//    
//    rankMax ,
//} ;
//
//// so lets start with a card structure
//struct Card
//{
//    CardSuit suit { } ;
//    CardRank rank { } ;
//} ;
//
//// we need some sort of function to create an array of Cards
//std::array<Card, 52> newDeck()
//{
//    std::array<Card, 52> deck { } ;
//    
//    // we have our array declared
//    // now we want to loop through our array
//    // keep track of the index of newDeck
//    int index { 0 } ;
//    
//    // if we have an outer loop through the suits
//    for ( int suit = 0 ; suit < static_cast<int>(CardSuit::suitMax) ; ++suit )
//    {
//        for ( int rank = 0 ; rank < static_cast<int>(CardRank::rankMax) ; ++rank )
//        {
//            deck[index].suit = static_cast<CardSuit>(suit) ;
//            deck[index].rank = static_cast<CardRank>(rank) ;
//            ++index ;
//        }
//    }
//    return deck ;
//}
//
//// honestly we should have a function that prints one card
//void printCard( const Card& card )
//{
//    // we now want to be able to print each card
//    
//    // a switch statement to print the rank
//    switch( card.rank )
//    {
//        using enum CardRank ;
//        case two:
//            std::cout << 2 ;
//            break ;
//        case three:
//            std::cout << 3 ;
//            break ;
//        case four:
//            std::cout << 4 ;
//            break ;
//        case five:
//            std::cout << 5 ;
//            break ;
//        case six:
//            std::cout << 6 ;
//            break ;
//        case seven:
//            std::cout << 7 ;
//            break ;
//        case eight:
//            std::cout << 8 ;
//            break ;
//        case nine:
//            std::cout << 9 ;
//            break ;
//        case ten:
//            std::cout << 'T' ;
//            break ;
//        case jack:
//            std::cout << 'J' ;
//            break ;
//        case queen:
//            std::cout << 'Q' ;
//            break ;
//        case king:
//            std::cout << 'K' ;
//            break ;
//        case ace:
//            std::cout << 'A' ;
//            break ;
//        default:
//            std::cout << "Error" ;
//            break ;
//            
//    }
//    
//    // a switch statement to print the suit
//    switch ( card.suit )
//    {
//            using enum CardSuit ;
//        case spade:
//            std::cout << 'S' ;
//            break ;
//        case heart:
//            std::cout << 'H' ;
//            break ;
//        case diamond:
//            std::cout << 'D' ;
//            break ;
//        case club:
//            std::cout << 'C' ;
//            break ;
//        default:
//            std::cout << "Error" ;
//            break ;
//    }
//    
//}
//
//
//void printDeck( const std::array<Card, 52>& deck )
//{
//    // we want to loop through the entire function
//    for ( const auto& element : deck )
//    {
//        printCard( element ) ;
//        std::cout << ' ' ;
//    }
//}
//
//// now we want a function shuffle the deck
//void shuffleDeck( std::array<Card, 52>& deck )
//{
//    
//    // just so we only seed once
//    static std::mt19937 mt { std::random_device{}() } ;
//    
//    std::shuffle( deck.begin() , deck.end() , mt ) ;
//}
//
//// now then for blackjack we need the cards to match up to a numerical value
//int getCardValue ( Card& card )
//{
//    // we use another long switch statement but we just return numerical values instead
//    switch( card.rank )
//    {
//        using enum CardRank ;
//        case two:
//            return 2 ;
//        case three:
//            return 3 ;
//        case four:
//            return 4 ;
//        case five:
//            return 5 ;
//        case six:
//            return 6 ;
//        case seven:
//            return 7 ;
//        case eight:
//            return 8 ;
//        case nine:
//            return 9 ;
//        case ten:
//            return 10 ;
//        case jack:
//            return 10 ;
//        case queen:
//            return 10 ;
//        case king:
//            return 10 ;
//        case ace:
//            return 11 ; // Ace is special, and we will deal with that later
//        default:
//            std::cout << "Error" ;
//            return 0 ;
//    }
//}
//
//int main(int argc, const char * argv[])
//{
//    
//    // now we want our deck
//    // the deck is going to be an array of cards
//    std::array<Card, 52> deck { newDeck() } ;
//    
//    // We want to be able to see our deck
//    // So a function to print the deck
//    printDeck( deck ) ;
//    std::cout << '\n' ;
//    
//    shuffleDeck( deck ) ;
//    
//    printDeck( deck ) ;
//    
//    std::cout << '\n' << getCardValue( deck[2] ) << '\n' ;
//    
//    
//    
//    return 0;
//}
