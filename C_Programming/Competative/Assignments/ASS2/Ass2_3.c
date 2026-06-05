// Accept a number from user if number is less then 10 then print "Hello" otherwise print "Demo"

/*
Algorithm
    START
        Accept first number as No
        Check condition
            if No < 10
                print Hello
            otherwise
                print Demo
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
//  Input :         int
//  Output :        Hello   Demo
//  Description :   Display "Hello" if the number is less than 10 otherwise display "Demo"
//  Date :          26/05/2026
//  Author :        Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

///////////////////////////////////////////////////////////
//
//  Application to Display "Hello" if the number is less than 10 otherwise display "Demo"
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
//  Input :     8
//  Output :    Hello
//
//  Input :     15
//  Output :    Demo
//
///////////////////////////////////////////////////////////