// Accept number from user and check whether number is even or odd 

/*
Algorithm

    START
        Accept first number as No
        Check condition no % 2 == 0
            if True
                print no is even
            otherwise(False)
                print no is odd
        Display the result
    STOP
*/

///////////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define True 1
#define False 0

///////////////////////////////////////////////////////////
//
//  Function name : ChkEven
//  Input :         int
//  Output :        Boolean
//  Description :   Checks number is even or odd
//  Date :          26/05/2026
//  Author :        Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return True;
    }
    else
    {
        return False;
    }
}

///////////////////////////////////////////////////////////
//
//  Application to display number is even or odd
//
///////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if(bRet == True)
    {
        printf("%d is Even", iValue);
    }
    else
    {
        printf("%d is Odd", iValue);
    }

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input :     4
//  Output :    4 is Even
//
//  Input :     7
//  Output :    7 is Odd
//
///////////////////////////////////////////////////////////