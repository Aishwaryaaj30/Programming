// Program to divide two numbers

/*
Algorithm
    START
        Accept first number as No1
        Accept second number as No2
        Perform Division of No1 and No2
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
//  Function name : Divide
//  Input :         int, int
//  Output :        int
//  Description :   Performs division of two int
//  Date :          26/05/2026
//  Author :        Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

int Divide(int iNo1,            // First input
           int iNo2             // Second input
          )
{
    int iAns = 0;               // Variable to store result

    if(iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;         // Perform Division

    return iAns;
}

///////////////////////////////////////////////////////////
//
//  Application to perform division of two int values
//
///////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 15;           // To store first input
    int iValue2 = 5;            // To store second input
    int iRet = 0;               // to store result

    iRet = Divide(iValue1, iValue2);    // Function call

    printf("Division is %d", iRet);

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input :     15      5
//  Output :    3
//
///////////////////////////////////////////////////////////