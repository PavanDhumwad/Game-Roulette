#include <iostream>
#include"common.h"
#include"Board.h"
#include"Player.h"
#include"Wheel.h"
#include"PayOff.h"
using namespace std;

int main()
{
    Player* pavan = new Player(1,100);
    Bet * b1;
    Board* board;
    PayOff* pay = new PayOff();
    int amt = 0;
    vector<string> result;
    bool output;

    Wheel * wheel = new Wheel();
    wheel->generateWinningNum();
    

    board = new Board(3,3,12,18);
    board->initializeBoard();

//    b1 = pavan->placeBet(STRAIGHTBET);
//    result = b1->straightBet("4",10); //4
//    amt = pay->settleAmount(b1,result);
//    pavan->setBalance(pavan->getBalance()+amt);
//
//    b1 = pavan->placeBet(SPLITBET);
//    result = b1->splitBet(1,1,20,board);//2 4  6 8
//    amt = pay->settleAmount(b1,result);
//    pavan->setBalance(pavan->getBalance()+amt);
//
//    b1 = pavan->placeBet(STREETBET);
//    result = b1->streetBet(1,board,10); // 4  5 6
//    amt = pay->settleAmount(b1,result);
//    pavan->setBalance(pavan->getBalance()+amt);
//
//    b1 = pavan->placeBet(CORNERBET);
//    result = b1->cornerBet(1,0,40,board); // 4 5 7 8
//    amt = pay->settleAmount(b1,result);
//    pavan->setBalance(pavan->getBalance()+amt);
//
//    b1 = pavan->placeBet(LINEBET);
//    result = b1->lineBet(1,board,10); // 4 5 7 8
//    amt = pay->settleAmount(b1,result);
//    pavan->setBalance(pavan->getBalance()+amt);
//
//    b1 = pavan->placeBet(EVENODDBET);
//    output = b1->evenOddBet(false,10);
//    amt = pay->settleAmount(b1,output);
//    pavan->setBalance(pavan->getBalance()+amt);
//
//    b1 = pavan->placeBet(SPECIAL5BET);
//    result = b1->specialBet(board,10);
//    amt = pay->settleAmount(b1,result);
//    pavan->setBalance(pavan->getBalance()+amt);
//
//    b1 = pavan->placeBet(RANGEBET);
//    output = b1->rangeBet(SECOND12,10);
//    amt = pay->settleAmount(b1,output);
//    pavan->setBalance(pavan->getBalance()+amt);
//
//    b1 = pavan->placeBet(COLOURBET);
//    output = b1->colourBet('R',board,10);
//    amt = pay->settleAmount(b1,output);
//    pavan->setBalance(pavan->getBalance()+amt);

    b1 = pavan->placeBet(HIGHLOWBET);
    output = b1->highLowBet(FIRSTHALF,10);
    amt = pay->settleAmount(b1,output);
    pavan->setBalance(pavan->getBalance()+amt);

    cout<<pavan->getBalance()<<endl;

}
