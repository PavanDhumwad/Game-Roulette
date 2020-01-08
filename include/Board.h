#ifndef BOARD_H
#define BOARD_H


class Board
{
    public:
        Board(int row, int column, int range, int high);
        virtual ~Board();
        void initializeBoard();
        int getRange();
        int getHigh();
        int getRow();
        int getColumn();
        int **arr;
        char **colour;

    protected:

    private:
        int range, high;
        int row, column;


};

#endif // BOARD_H
