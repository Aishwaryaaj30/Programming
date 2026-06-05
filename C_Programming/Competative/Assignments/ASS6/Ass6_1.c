/* Write a program which accept a number from user and if number is less than 50 print small,
   if it is greater then 50 and less than 100 print medium, if greater than 100 print large.
*/

///////////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////
//
//  Function name : Number
//  Input :         int
//  Output :        void
//  Description :   -
//  Date :          30/05/2026
//  Author :        Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if(iNo > 50 && iNo < 100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
    printf("\n");
}

///////////////////////////////////////////////////////////
//
//  Application to display 
//
///////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input :     75
//  Output :    Medium
//
//  Input :     10
//  Output :    Small
//
//  Input :     150
//  Output :    Large
//
//  Complexity : O(1)
//
///////////////////////////////////////////////////////////