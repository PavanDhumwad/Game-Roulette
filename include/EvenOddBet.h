#ifndef EVENODDBET_H
#define EVENODDBET_H

#include <Bet.h>


class EvenOddBet : public Bet
{
    public:
        EvenOddBet();
        virtual ~EvenOddBet();
        bool evenOddBet(bool num,int amt);
        int payRatio(int);

    protected:

    private:
};

#endif // EVENODDBET_H
