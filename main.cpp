#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>

#define random(x) (rand() % x + 1) //We should use i = random(9) + 1 as a rand number.

using namespace std;

int Sudoku[9][9];
int Array[9];

void init_all()
{
    /*********Init Sudoku array*********/
    int i, j;
    for(i = 0; i < 9; i ++)
    {
        for(j = 0; j < 9; j ++)
        {
            Sudoku[i][j] = 0;
        }
    }
    /*********Init the Array*********/
    for(i = 0; i <9; i ++)
    {
        Array[i] = 0;
    }
    /*********Init the ?*********/
}

void Judge()
{

}

void

void Print()
{
    int i, j;
    for(i = 0; i < 9; i ++)
    {
        for(j = 0; j < 9; j ++)
        {
            printf("%d ", Suduku[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    cin >> n;

    srand((int)time(0));

    return 0;
}
