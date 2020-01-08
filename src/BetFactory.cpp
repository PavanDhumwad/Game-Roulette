#include "BetFactory.h"
#include<Bet.h>

BetFactory::BetFactory()
{
    //ctor
}

BetFactory::~BetFactory()
{
    //dtor
}
Bet* BetFactory::getInstance(int betName)//, int betAmt)
{
    switch(betName)
    {
        case 1: return new StraightBet();
                break;
        case 2: return new SplitBet();
                break;
        case 3: return new StreetBet();
                break;
        case 4: return new CornerBet();
                break;
        case 5: return new LineBet();
                break;
        case 6: return new EvenOddBet();
                break;
        case 7: return new Special5Bet();
                break;
        case 8: return new RangeBet();
                break;
        case 9: return new ColourBet();
                break;
        case 10: return new HighLowBet();
                break;
        default: return NULL;
    }
}
