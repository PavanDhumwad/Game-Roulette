#ifndef BETFACTORY_H
#define BETFACTORY_H
#include"Bet.h"
#include"string"
#include"StraightBet.h"
#include"SplitBet.h"
#include"StreetBet.h"
#include"CornerBet.h"
#include"LineBet.h"
#include"EvenOddBet.h"
#include"Special5Bet.h"
#include"RangeBet.h"
#include"ColourBet.h"
#include"HighLowBet.h"
class BetFactory
{
    public:
        BetFactory();
        virtual ~BetFactory();
        Bet* getInstance(int betName);//, int betAmt);

    protected:

    private:
};

#endif // BETFACTORY_H
