// Accept two numbers from user and display first number in second number of times
/*
Algorithm

    START
        Accept first number as No
        Accept second number as freq
        Loop from 1 to freq
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
//  Function name : Display
//  Input :         int  int 
//  Output :        int
//  Description :   Display first number in second number of times
//  Date :          26/05/2026
//  Author :        Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

void Display(int iNo1, int iFreq)
{
    //Updater
    if(iFreq < 0)
    {
        iFreq = -iFreq;
    }

    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iFreq ; iCnt++)
    {
        printf("%d ", iNo1);
    }
}

///////////////////////////////////////////////////////////
//
//  Application to Display first number in second number of times
//
///////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    printf("Enter frequency : ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input :     12  5
//  Output :    12  12  12  12   12
//
//  Input :     -2  3
//  Output :    -2  -2  -2
//
///////////////////////////////////////////////////////////