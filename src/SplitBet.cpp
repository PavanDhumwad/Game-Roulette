#include "SplitBet.h"
#include"Board.h"
#include<iostream>
using namespace std;
SplitBet::SplitBet():Bet()
{
    //ctor
}

SplitBet::~SplitBet()
{
    //dtor
}
vector<string> SplitBet::splitBet(int row,int col, int amt, Board * board)
{
    this->setBetAmt(amt);
    vector<string> output;
    try
    {
        if(row-1<0)
            throw (row-1);
        output.push_back(to_string(board->arr[row-1][col]));
    }
    catch(int outOfBound)
    {cout<<"Array Index Out of Bound "<<outOfBound<<endl;}

    try
    {
        if(col-1<0)
            throw (col-1);
        output.push_back(to_string(board->arr[row][col-1]));
    }
    catch(int outOfBound)
    {cout<<"Array Index Out of Bound "<<outOfBound<<endl;}

    try
    {
        if(col+1>=board->getColumn())
            throw (col+1);
        output.push_back(to_string(board->arr[row][col+1]));
    }
    catch(int outOfBound)
    {cout<<"Array Index Out of Bound "<<outOfBound<<endl;}

    try
    {
        if(row+1>=board->getRow())
            throw (row+1);
        output.push_back(to_string(board->arr[row+1][col]));
    }
    catch(int outOfBound)
    {cout<<"Array Index Out of Bound "<<outOfBound<<endl;}
    return output;

}
int SplitBet::payRatio(int ratio_amt)
{
    return 17*ratio_amt;
}
