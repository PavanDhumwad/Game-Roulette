#include "RangeBet.h"
#include"common.h"
RangeBet::RangeBet()
{
    //ctor
}

RangeBet::~RangeBet()
{
    //dtor
}
bool RangeBet::rangeBet(int range,int amt)
{
    this->setBetAmt(amt);
    int won = 4;//rand()%39;
    if(won==37 || won==38)
        return false;
    switch(range)
    {
        case FIRST12: if(won>=1 && won<=12)
                        return true;
        case SECOND12: if(won>=13 && won<=24)
                        return true;
        case THIRD12: if(won>=25 && won<=36)
                        return true;
        default: return false;
    }
}
int RangeBet::payRatio(int ratio_amt)
{
    return 2*ratio_amt;
}
