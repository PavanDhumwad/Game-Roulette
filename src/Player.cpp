#include"common.h"
#include "Player.h"
#include<Bet.h>
Player::Player(int ID, int initAmt)
{
    this->ID = ID;
    this->balance = initAmt;
}

Player::~Player()
{
    //dtor
}
int Player::getID()
{
    return this->ID;
}
int Player::getBalance()
{
    return this->balance;
}
void Player::setBalance(int balance)
{
    this->balance = balance;
}
Bet* Player::placeBet(int betName)//, int betAmt)
{
    BetFactory* betFactory = new BetFactory();
    return betFactory->getInstance(betName);//, betAmt);
}
