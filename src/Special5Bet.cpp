#include "Special5Bet.h"

Special5Bet::Special5Bet()
{
    //ctor
}

Special5Bet::~Special5Bet()
{
    //dtor
}
vector<string> Special5Bet::specialBet(Board * board, int amt)
{
    this->setBetAmt(amt);
    vector<string> output;
    for(int i=0; i<board->getColumn(); i++)
        output.push_back(to_string(i));
    output.push_back("0");
    output.push_back("00");
}
int Special5Bet::payRatio(int ratio_amt)
{
    return 6*ratio_amt;
}
