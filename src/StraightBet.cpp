#include "StraightBet.h"

//StraightBet::StraightBet(int amt):Bet(amt)
//{
//    //ctor
//}

StraightBet::~StraightBet()
{
    //dtor
}
StraightBet::StraightBet():Bet()
{
    //dtor
}

vector<string> StraightBet::straightBet(string slot, int amt)
{
    this->setBetAmt(amt);
    vector<string> output;
    output.push_back(slot);
    return (output);
}

int StraightBet::payRatio(int ratio_amt)
{
    return 35*ratio_amt;
}
