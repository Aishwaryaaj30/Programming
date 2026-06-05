// Write a program which accept number from user and display its factors in decreasing order

///////////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////
//
//  Function name : FactRev
//  Input :         int
//  Output :        void
//  Description :   display factors in decreasing order
//  Date :          30/05/2026
//  Author :        Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = (iNo/2) ; iCnt >= 1 ; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t", iCnt);
        }
    }
    printf("\n");
}

///////////////////////////////////////////////////////////
//
//  Application to display factors in decreasing order
//
///////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input :     12
//  Output :    6	4	3	2	1
//
//  Input :     13
//  Output :    1
//
//  Input :     10
//  Output :    5	2	1
//
//  Complexity : O(n)
//
///////////////////////////////////////////////////////////