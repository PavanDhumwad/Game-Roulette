#include "EvenOddBet.h"

EvenOddBet::EvenOddBet()
{
    //ctor
}

EvenOddBet::~EvenOddBet()
{
    //dtor
}
bool EvenOddBet::evenOddBet(bool num,int amt)
{
    this->setBetAmt(amt);
    int won = 4;//rand()%39;
    if(won==37 || won==38)
        return false;
    else if(num==true && won%2==0)
        return true;
    else if(num==false && won%2!=0)
        return true;
    else
        return false;

}
int EvenOddBet::payRatio(int  ratio_amt)
{
    return 1*ratio_amt;
}
