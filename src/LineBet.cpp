#include "LineBet.h"
#include"StreetBet.h"
#include<iostream>
LineBet::LineBet():Bet()
{
    //ctor
}

LineBet::~LineBet()
{
    //dtor
}
vector<string> LineBet::lineBet(int row, Board * board, int amt)
{
    this->setBetAmt(amt);
    StreetBet * bet = new StreetBet();
    vector<string> output, output2;
    if(row==board->getRow()-1)
        output = bet->streetBet(row-1,board,amt);
    else
        output = bet->streetBet(row+1,board,amt);
    output2 = bet->streetBet(row,board,amt);
    output.insert( output.end(), output2.begin(), output2.end());

    delete bet;
    for(auto it = output.begin(); it != output.end(); it++)
        cout<<*it<<"    ";
    return output;
}

int LineBet::payRatio(int ratio_amt)
{
    return 5*ratio_amt;
}

