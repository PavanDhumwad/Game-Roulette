#ifndef PAYOFF_H
#define PAYOFF_H
#include<string>
#include<vector>
#include<Bet.h>
using namespace std;
class PayOff
{
    public:
        PayOff();
        virtual ~PayOff();
        int settleAmount(Bet *,vector<string>);
        int settleAmount(Bet * b,bool result);

    protected:

};

#endif // PAYOFF_H
