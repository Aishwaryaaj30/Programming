// Write a program which accept number from user and display its multiplication of factors

///////////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////
//
//  Function name : MultFact
//  Input :         int
//  Output :        int
//  Description :   performs multiplication of factors
//  Date :          30/05/2026
//  Author :        Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}

///////////////////////////////////////////////////////////
//
//  Application to display multiplication of factors
//
///////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d", iRet);
    printf("\n");

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input :     12
//  Output :    144 (1*2*3*4*6)
//
//  Input :     13
//  Output :    1
//
//  Input :     10
//  Output :    10
//
// Complexity : O(n)
//
///////////////////////////////////////////////////////////