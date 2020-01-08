#include "StreetBet.h"
#include"Board.h"
#include<iostream>
StreetBet::StreetBet():Bet()
{
    //ctor
}

StreetBet::~StreetBet()
{
    //dtor
}
vector<string> StreetBet::streetBet(int row, Board * board, int amt)
{
    this->setBetAmt(amt);
    vector<string> output;
    try
    {
        if(row>=board->getRow())
            throw (row);
        for(int col=0; col<board->getColumn(); col++)
        {
            output.push_back(to_string(board->arr[row][col]));
        }

    }
    catch(int outOfBound)
    {cout<<"Array index out of bound "<<outOfBound<<endl;}
    return output;
}
int StreetBet::payRatio(int ratio_amt)
{
    return 11*ratio_amt;
}
