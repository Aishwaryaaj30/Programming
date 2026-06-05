// Write a program which accept number from user and return summation of all its non factors

///////////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////
//
//  Function name : SumNonFact
//  Input :         int
//  Output :        int
//  Description :   perfom summation of all non factors
//  Date :          30/05/2026
//  Author :        Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

///////////////////////////////////////////////////////////
//
//  Application to display summation of all non factors
//
///////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input :     12
//  Output :    50
//
//  Input :     13
//  Output :    77
//
//  Input :     10
//  Output :    37
//
//  Complexity : O(n)
//
///////////////////////////////////////////////////////////