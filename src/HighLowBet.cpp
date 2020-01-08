#include "HighLowBet.h"
#include"common.h"

HighLowBet::HighLowBet()
{
    //ctor
}

HighLowBet::~HighLowBet()
{
    //dtor
}
bool HighLowBet::highLowBet(int range,int amt)
{
    this->setBetAmt(amt);
    int won = 4;//rand()%39;
    if(won==37 || won==38)
        return false;
    switch(range)
    {
        case FIRSTHALF: if(won>=1 && won<=18)
                        return true;
        case SECONDHALF: if(won>=19 && won<=36)
                        return true;
        default: return false;
    }
}
int HighLowBet::payRatio(int ratio_amt)
{
    return 1*ratio_amt;
}
