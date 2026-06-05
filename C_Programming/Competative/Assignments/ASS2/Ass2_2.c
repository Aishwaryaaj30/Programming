// Accept one number from user and print that number of * on screen

/*
Algorithm
    START
        Accept first number as No
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

void Display(int iNo)
{
    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        printf(" * ");
        iNo--;
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

    Display(iValue);

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input :     5
//  Output :    * * * * *
//
///////////////////////////////////////////////////////////