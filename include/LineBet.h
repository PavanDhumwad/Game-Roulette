#ifndef LINEBET_H
#define LINEBET_H

#include <Bet.h>


class LineBet : public Bet
{
    public:
        LineBet();
        virtual ~LineBet();
        vector<string> lineBet(int row, Board * board, int amt);
        int payRatio(int);
    protected:

    private:
};

#endif // LINEBET_H
