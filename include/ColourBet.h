#ifndef COLOURBET_H
#define COLOURBET_H

#include <Bet.h>


class ColourBet : public Bet
{
    public:
        ColourBet();
        virtual ~ColourBet();
        bool colourBet(char,Board *,int amt);
        int payRatio(int ratio_amt);
    protected:

    private:
};

#endif // COLOURBET_H
