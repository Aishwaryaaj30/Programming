//Accept one number from user an print that number of * on screen

/*
Algorithm
    START
        Accept a number as No2
        Perform Iteration
        Display the result
    STOP
*/

///////////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////
//
//  Function name : Accept
//  Input :         int
//  Output :        *
//  Description :   Prints * on screen
//  Date :          26/05/2026
//  Author :        Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("*\t");
    }
}

///////////////////////////////////////////////////////////
//
//  Application to print * on screen
//
///////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Accept(iValue);

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input :     5
//  Output :    * * * * *
//
///////////////////////////////////////////////////////////