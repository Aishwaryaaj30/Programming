// Write a program which accept number from user and display its table in reverse order.

///////////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////
//
//  Function name : TableRev
//  Input :         int
//  Output :        void
//  Description :   print table in reverse order
//  Date :          30/05/2026
//  Author :        Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

void TableRev(int iNo)
{
    int iCnt = 0;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10 ; iCnt >= 1 ; iCnt--)
    {
        printf("%d\t", iNo * iCnt);
    }
    printf("\n");
}

///////////////////////////////////////////////////////////
//
//  Application to display table in reverse order 
//
///////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input :     2
//  Output :    20	18	16	14	12	10	8	6	4	2
//
//  Input :     5
//  Output :    50	45	40	35	30	25	20	15	10	5
//
//  Input :     -5
//  Output :    50	45	40	35	30	25	20	15	10	5
//
//  Complexity : O(n)
//
///////////////////////////////////////////////////////////