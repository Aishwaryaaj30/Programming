// Write a program which accept number from user and print that number of '$' & '*' on screen.

///////////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Input :         int
//  Output :        void
//  Description :   Pattern printing
//  Date :          30/05/2026
//  Author :        Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////
void Pattern(int iNo)
{
    int iCnt = 0;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("$\t*\t");
    }
    printf("\n");
}

///////////////////////////////////////////////////////////
//
//  Application to display pattern 
//
///////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input :     5
//  Output :    $	*	$	*	$	*	$	*	$	*
//
//  Input :     3
//  Output :    $	*	$	*	$	*
//
//  Input :     -3
//  Output :    $	*	$	*	$	*
//
//  Complexity : O(n)
//
///////////////////////////////////////////////////////////