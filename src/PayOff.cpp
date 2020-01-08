#include "PayOff.h"
#include"Bet.h"
#include"Wheel.h"
#include<algorithm>
#include<iostream>
PayOff::PayOff()
{
    //ctor
}

PayOff::~PayOff()
{
    //dtor
}

int PayOff::settleAmount(Bet * b, vector<string> result )
{
    //std::cout<<Wheel::generateWinningNum()<<endl;
    int won = 4;//rand()%39;
    string search_won;
    if(won==37)
        search_won = "0";
    else if(won == 38)
        search_won = "00";
    else
        search_won = to_string(won);

    auto it = std::find (result.begin(), result.end(),search_won);
    if (it != result.end())
    {
        return b->payRatio(b->getBetAmt());
    }
    else
    {
        return b->getBetAmt()*-1;
    }
}

int PayOff::settleAmount(Bet * b,bool result)
{
    if(result)
        return b->payRatio(b->getBetAmt());
    else
        return b->getBetAmt()*-1;
}
