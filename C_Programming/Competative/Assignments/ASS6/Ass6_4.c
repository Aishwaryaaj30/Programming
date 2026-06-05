// Write a program which accept number from user and display its table.

///////////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////
//
//  Function name : Table
//  Input :         int
//  Output :        void
//  Description :   print table.
//  Date :          30/05/2026
//  Author :        Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt = 0;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= 10 ; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }
    printf("\n");
}

///////////////////////////////////////////////////////////
//
//  Application to display its table.
//
///////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input :     2
//  Output :    2	4	6	8	10	12	14	16	18	20
//
//  Input :     5
//  Output :    5	10	15	20	25	30	35	40	45	50
//
//  Input :     -5
//  Output :    5	10	15	20	25	30	35	40	45	50 
//
//  Complexity : O(n)
//
///////////////////////////////////////////////////////////