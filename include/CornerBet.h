#ifndef CORNERBET_H
#define CORNERBET_H

#include <Bet.h>


class CornerBet : public Bet
{
    public:
        CornerBet();
        virtual ~CornerBet();
        vector<string> cornerBet(int row, int col,int amt, Board * board);
        int payRatio(int ratio_amt);
    protected:

    private:
};

#endif // CORNERBET_H
