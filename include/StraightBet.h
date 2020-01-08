#ifndef STRAIGHTBET_H
#define STRAIGHTBET_H

#include <Bet.h>
//#include<vector>
//#include<string>
//using namespace std;

class StraightBet : public Bet
{
    public:
        //StraightBet(int amt);
        StraightBet();
        virtual ~StraightBet();
        vector<string> straightBet(string slot,int amt);
        int payRatio(int ratio_amt);
    protected:

    private:
};

#endif // STRAIGHTBET_H
