//
//  Classes.hpp
//  BlackJack_C++
//
//  Created by Greyson Chavez on 8/29/23.
//

#ifndef Classes_hpp
#define Classes_hpp

enum class CardRank
{
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
    
    max ,
} ;

enum class CardSuit
{
    diamond ,
    heart ,
    spade ,
    club ,
    
    max ,
} ;

struct Card
{
    CardRank rank { } ;
    CardSuit suit { } ;
} ;


#endif /* Classes_hpp */
