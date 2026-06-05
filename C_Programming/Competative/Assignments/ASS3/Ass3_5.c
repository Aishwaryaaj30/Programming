// Accept a character from user and check whether that character is a vowel or not.

/*
Algorithm
    START
        Accept first number as No1
        Accept second number as No2
        Perform addition of No1 and No2
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

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////
//
//  Function name : CheckVowel
//  Input :         char
//  Output :        boolean
//  Description :   checks character is vowel or not
//  Date :          26/05/2026
//  Author :        Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

BOOL checkVowel(char cValue)
{
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' ||
       cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

///////////////////////////////////////////////////////////
//
//  Application to check whether that character is a vowel or not.
//
///////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character : ");
    scanf("%c", &cValue);

    bRet = checkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is a vowel");
    }
    else
    {
        printf("It is not a vowel");
    }

    printf("\n");
    
    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input :     a
//  Output :    It is a vowel
//
//  Input :     A
//  Output :    It is a vowel
//
//  Input :     b
//  Output :    It is not a vowel
//
///////////////////////////////////////////////////////////