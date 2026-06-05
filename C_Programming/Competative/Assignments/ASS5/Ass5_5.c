// Write a program which accept number from user and print first 5 muliples of N

///////////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////
//
//  Function name : MultipleDisplay
//  Input :         int
//  Output :        void
//  Description :   print first 5 muliples of N
//  Date :          30/05/2026
//  Author :        Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= (iNo + 1) ; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }
    printf("\n");
}

///////////////////////////////////////////////////////////
//
//  Application to display first 5 muliples of N 
//
///////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input :     4
//  Output :    4	8	12	16	20
//
//  Complexity : O(n)
//
///////////////////////////////////////////////////////////