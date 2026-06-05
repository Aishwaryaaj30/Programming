// Write a program which accepts one number from user and print that number of even numbers on screen

/*
Algorithm
    START
        Accept number as No
        Print zeven numbers
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
//  Function name : PrintEven
//  Input :         int
//  Output :        int
//  Description :   Prints even number on screen
//  Date :          26/05/2026
//  Author :        Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        return;
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("%d\t", iCnt * 2);
    }

    printf("\n");
}

///////////////////////////////////////////////////////////
//
//  Application to Display even number on screen
//
///////////////////////////////////////////////////////////

int main()
{

    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input :     7
//  Output :    2   4   6   8   10  12  14
//
///////////////////////////////////////////////////////////