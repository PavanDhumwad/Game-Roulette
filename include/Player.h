#ifndef PLAYER_H
#define PLAYER_H
#include<BetFactory.h>

class Player
{
    public:
        Player(int ID, int initAmt);
        virtual ~Player();
        int getID();
        int getBalance();
        void setBalance(int balance);
        Bet* placeBet(int betName);//, int betAmt);
        void initPlayer();

    protected:

    private:
        int ID, balance;
};

#endif // PLAYER_H
