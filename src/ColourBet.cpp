#include "ColourBet.h"

ColourBet::ColourBet()
{
    //ctor
}

ColourBet::~ColourBet()
{
    //dtor
}
bool ColourBet::colourBet(char colour, Board * board, int amt)
{
    this->setBetAmt(amt);
    int won = 4;//rand()%39;
    if(won==37 || won==38)
        return false;
    for(int i =0; i<board->getRow(); i++)
    {
        for(int j=0;j<board->getColumn();j++)
        {
            if(board->arr[i][j] == won && colour==board->colour[i][j])
            {
                return true;
            }
        }
    }
    return false;
}
int ColourBet::payRatio(int ratio_amt)
{
    return 1*ratio_amt;
}
