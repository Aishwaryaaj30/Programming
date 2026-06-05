// Write a program which accept number from user and print all odd numbers up to N.

///////////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////
//
//  Function name : OddDisplay
//  Input :         int
//  Output :        void
//  Description :   print all odd numbers up to N.
//  Date :          30/05/2026
//  Author :        Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t", iCnt);
        }
    }
    printf("\n");
}

///////////////////////////////////////////////////////////
//
//  Application to display all odd numbers up to N.

//
///////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input :     18
//  Output :    1	3	5	7	9	11	13	15	17
//
//  Complexity : O(n)
//
///////////////////////////////////////////////////////////