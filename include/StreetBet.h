#ifndef STREETBET_H
#define STREETBET_H

#include <Bet.h>


class StreetBet : public Bet
{
    public:
        StreetBet();
        virtual ~StreetBet();
        vector<string> streetBet(int row, Board * board, int amt);
        int payRatio(int);

    protected:

    private:
};

#endif // STREETBET_H
