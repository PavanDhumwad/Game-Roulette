#include "Bet.h"
#include<iostream>

using namespace std;
Bet::~Bet()
{
    //dtor
}
Bet::Bet()
{
    //dtor
}
void Bet::setBetAmt(int amt)
{
   this->betAmt = amt;
}
int Bet::getBetAmt()
{
    return this->betAmt;
}
vector<string> Bet::straightBet(string slot, int amt)
{
    cout<<"Nothing..."<<endl;

}
vector<string> Bet::splitBet(int row, int col,int amt, Board * board)
{
    cout<<"Nothing..."<<endl;
}
vector<string> Bet::streetBet(int row, Board * board, int amt)
{
    cout<<"Nothing..."<<endl;
}
vector<string> Bet::cornerBet(int row, int col,int amt, Board * board)
{
    cout<<"Nothing..."<<endl;
}
vector<string> Bet::lineBet(int row, Board * board, int amt)
{
    cout<<"Nothing..."<<endl;
}
bool Bet::evenOddBet(bool num,int amt)
{
    cout<<"Nothing..."<<endl;
}
vector<string> Bet::specialBet(Board * board, int amt)
{
    cout<<"Nothing..."<<endl;
}
bool Bet::rangeBet(int range,int amt)
{
    cout<<"Nothing..."<<endl;
}
bool Bet::colourBet(char colour,Board * board, int amt)
{
    cout<<"Nothing..."<<endl;
}
bool Bet::highLowBet(int range,int amt)
{
    cout<<"Nothing..."<<endl;
}
