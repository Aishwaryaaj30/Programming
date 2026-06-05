// Program to print 5 times "Marvellous" on screen

/*
Algorithm
    START
        Performs Iteration
        Display result
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
//  Input :         -
//  Output :        -
//  Description :   Performs Iteration using for loop 
//  Date :          26/05/2026
//  Author :        Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

void Display()
{
    int i = 0;                  // Loop counter

    for(i = 1 ; i<= 5 ; i++)    // Iteration
    {
        printf("Marvellous\n");
    }
}

///////////////////////////////////////////////////////////
//
//  Application to perform iteration
//
///////////////////////////////////////////////////////////

int main()
{
    Display();
    
    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input :     -
//  Output :    Marvellous
//              Marvellous
//              Marvellous
//              Marvellous
//              Marvellous
//
///////////////////////////////////////////////////////////