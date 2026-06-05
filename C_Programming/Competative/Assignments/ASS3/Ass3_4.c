// Accept one character from user and convert case of that character

/*
Algorithm
    START
        Accept character as cValue
        Convert uppercase to lowercase & lowercase to uppercase
        Display the converted character
    STOP
*/

///////////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////////v

#include<stdio.h>

///////////////////////////////////////////////////////////
//
//  Function name : DisplayConvert
//  Input :         char
//  Output :        char
//  Description :   Performs case covertion of characters
//  Date :          26/05/2026
//  Author :        Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c", cValue - 32);
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c", cValue + 32);
    }
    printf("\n");
}

///////////////////////////////////////////////////////////
//
//  Application to convert case of characters
//
///////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter Character : ");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input :     a
//  Output :    A
//
//  Input :     D
//  Output :    d
//
///////////////////////////////////////////////////////////