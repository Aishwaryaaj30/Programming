// Write a program which accepts number from user and print even factors of that number.

/*
Algorithm
    START
        Accept number as No
        Find even factors of No
        Display the factors
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
//  Function name : DisplayEvenFactor
//  Input :         int
//  Output :        int
//  Description :   Display even factors
//  Date :          26/05/2026
//  Author :        Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

void DisplayEvenfactor(int iNo)
{
    int iCnt = 0;

    // Updator
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt % 2 == 0))
        {
            printf("%d\t", iCnt);
        }
    }
    printf("'n");

}

///////////////////////////////////////////////////////////
//
//  Application to Display Even factors of a number
//
///////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    DisplayEvenfactor(iValue);

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input :     36
//  Output :    2   6   12  18
//
///////////////////////////////////////////////////////////