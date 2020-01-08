#ifndef RANGEBET_H
#define RANGEBET_H

#include <Bet.h>


class RangeBet : public Bet
{
    public:
        RangeBet();
        virtual ~RangeBet();
        bool rangeBet(int,int);
        int payRatio(int ratio_amt);

    protected:

    private:
};

#endif // RANGEBET_H
