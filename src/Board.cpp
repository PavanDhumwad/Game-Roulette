#include "Board.h"
#include<iostream>

Board::Board(int row, int column, int range, int high)
{
    this->row = row;
    this->column = column;
    this->range = range;
    this->high = high;
}

Board::~Board()
{
    //dtor
}

void Board::initializeBoard()
{
    int count = 1;
    arr = new int*[getRow()];
    for(int i = 0; i < getRow(); i++)
        arr[i] = new int[getColumn()];

    colour = new char*[getRow()];
    for(int i = 0; i < getRow(); i++)
        colour[i] = new char[getColumn()];


    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column ; j++)
        {
            arr[i][j] = count;
            if(count%2 == 0)
                colour[i][j] = 'R';
            else
                colour[i][j] = 'B';
            count++;
        }
    }
//    for(int i=0; i<row; i++)
//    {
//        for(int j=0; j<column ; j++)
//        {
//            std::cout<<arr[i][j]<<"    "<<colour[i][j]<<std::endl;
//        }
//    }
}

int Board::getRange()
{
    return range;
}

int Board::getHigh()
{
    return high;
}
int Board::getRow()
{
    return row;
}

int Board::getColumn()
{
    return column;
}

