// Write a program which accept number from user and display all its non factors

///////////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////
//
//  Function name : NonFact
//  Input :         int
//  Output :        void
//  Description :   display all non factors
//  Date :          30/05/2026
//  Author :        Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\t", iCnt);
        }
    }
    printf("\n");
}

///////////////////////////////////////////////////////////
//
//  Application to display all non factors
//
///////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input :     12
//  Output :    5	7	8	9	10	11
//
//  Input :     13
//  Output :    2	3	4	5	6	7	8	9	10	11	12
//
//  Input :     10
//  Output :    3	4	6	7	8	9
//
//  Complexity : O(n)
//
///////////////////////////////////////////////////////////