// Accept single digit from user and print it into word.

///////////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////
//
//  Function name : Display
//  Input :         int
//  Output :        void
//  Description :   print digit it into word.
//  Date :          30/05/2026
//  Author :        Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

void Display(int iNo)
{
    // Updator
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 1)
    {
        printf("One");
    }
    else if(iNo == 2)
    {
        printf("Two");
    }
    else if(iNo == 3)
    {
        printf("Three");
    }
    else if(iNo == 4)
    {
        printf("Four");
    }
    else if(iNo == 5)
    {
        printf("Five");
    }
    else if(iNo == 6)
    {
        printf("Six");
    }
    else if(iNo == 7)
    {
        printf("Seven");
    }
    else if(iNo == 8)
    {
        printf("Eight");
    }
    else if(iNo == 9)
    {
        printf("Nine");
    }
    else
    {
        printf("Invalid Number");
    }
    printf("\n");
}

///////////////////////////////////////////////////////////
//
//  Application to display print digit into word.
//
///////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a digit : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input :     9
//  Output :    Nine
//
//  Input :     -3
//  Output :    Three
//
//  Input :     12
//  Output :    Invalid Number
//
// complexity : O(1)
//
///////////////////////////////////////////////////////////