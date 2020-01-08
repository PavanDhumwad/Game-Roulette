#ifndef BET_H
#define BET_H
#include<vector>
#include<string>
#include"Board.h"
using namespace std;

class Bet
{
    public:
        Bet();
        //Bet(int betAmt);
        virtual ~Bet();
        virtual vector<string> straightBet(string slot, int amt);
        virtual vector<string> splitBet(int row, int col,int amt, Board * board);
        virtual vector<string> streetBet(int row, Board * board, int amt);
        virtual vector<string> cornerBet(int row, int col,int amt, Board * board);
        virtual vector<string> lineBet(int row, Board * board, int amt);
        virtual bool evenOddBet(bool num,int amt);
        virtual vector<string> specialBet(Board * board, int amt);
        virtual bool rangeBet(int,int);
        virtual bool colourBet(char,Board *,int amt);
        virtual bool highLowBet(int,int);
        virtual int payRatio(int ratio_amt) = 0;
        int getBetAmt();
        void setBetAmt(int amt);

    protected:
    private:
        int betAmt;
};

#endif // BET_H
