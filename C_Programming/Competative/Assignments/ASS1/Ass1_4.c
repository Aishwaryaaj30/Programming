//Accept one number and check whether it is divisible by 5 or not

/*
Algorithm
    START
        Performs Iteration
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
//  Function name : Check
//  Input :         int
//  Output :        int
//  Description :   check number is divisible by 5 or not
//  Date :          26/05/2026
//  Author :        Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

BOOL  Check(int iNo)
{
    if((iNo % 5) == 0)
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
//  Application to check number is divisible 
//
///////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = False;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == True)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input :     20
//  Output :    Divisible by 5
//
//  Input :     14
//  Output :    Not Divisible by 5
//
///////////////////////////////////////////////////////////