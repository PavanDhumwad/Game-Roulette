#include "CornerBet.h"
#include<iostream>
CornerBet::CornerBet():Bet()
{
    //ctor
}

CornerBet::~CornerBet()
{
    //dtor
}
vector<string> CornerBet::cornerBet(int row,int col, int amt, Board * board)
{
    this->setBetAmt(amt);
    vector<string> output;
    try
    {
        if(row+1>=board->getRow() || col+1>=board->getColumn())
            throw(row+1);
        output.push_back(to_string(board->arr[row][col]));
        output.push_back(to_string(board->arr[row][col+1]));
        output.push_back(to_string(board->arr[row+1][col]));
        output.push_back(to_string(board->arr[row+1][col+1]));
    }
    catch(int outOfRange)
    {
        cout<<"Array index out of bound "<<outOfRange<<endl;
    }
    return output;
}
int CornerBet::payRatio(int ratio_amt)
{
    return 8*ratio_amt;
}
