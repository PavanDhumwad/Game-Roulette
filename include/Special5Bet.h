#ifndef SPECIAL5BET_H
#define SPECIAL5BET_H

#include <Bet.h>


class Special5Bet : public Bet
{
    public:
        Special5Bet();
        virtual ~Special5Bet();
        vector<string> specialBet(Board * board, int amt);
        int payRatio(int);

    protected:

    private:
};

#endif // SPECIAL5BET_H
