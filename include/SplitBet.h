#ifndef SPLITBET_H
#define SPLITBET_H

#include <Bet.h>
#include"Board.h"

class SplitBet : public Bet
{
    public:
        SplitBet();
        virtual ~SplitBet();
        vector<string> splitBet(int row, int col,int amt, Board * board);
        int payRatio(int ratio_amt);

    protected:

    private:
};

#endif // SPLITBET_H
