// Write a program to find factorial of given number.

///////////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////
//
//  Function name : Factorial
//  Input :         int
//  Output :        int
//  Description :   print factorial of given number.
//  Date :          30/05/2026
//  Author :        Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo ; iCnt >=1 ; iCnt--)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

///////////////////////////////////////////////////////////
//
//  Application to display factorial of given number.
//
///////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is : %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input :     5
//  Output :    120
//
//  Input :     -5
//  Output :    120
//
//  Input :     4
//  Output :    24
//
//  Complexity : O(n)
//
///////////////////////////////////////////////////////////