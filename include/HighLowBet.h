#ifndef HIGHLOWBET_H
#define HIGHLOWBET_H

#include <Bet.h>


class HighLowBet : public Bet
{
    public:
        HighLowBet();
        virtual ~HighLowBet();
        bool highLowBet(int,int);
        int payRatio(int ratio_amt);
    protected:

    private:
};

#endif // HIGHLOWBET_H
