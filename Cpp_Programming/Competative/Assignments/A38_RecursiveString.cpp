// Write a recursive program which accept string from user and
// count number of characters

//////////////////////////////////////////////////////////////////////////////
//
//  Include required header files
//
//////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////
// 
//  Function name : Strlen
//  Input         : char
//  Output        : int
//  Description   : To count characters in string
//  Date          : 24/07/2026
//  Author        : Aishwarya Mohan Jadhav
//
//////////////////////////////////////////////////////////////////////////////

int Strlen(
            char *str                           // Variable to take input
          )
{
    static int iCount = 0;                      // Variable to store count

    if(*str != '\0')                            // Condition
    {
        iCount++;
        Strlen(++str);                          // Recursive call
    }

    return iCount;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Application to display count of characters in string
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];                           // Variable to store input
    int iRet = 0;                           // Variable to store return value of function

    cout << "Enter string : ";
    cin >> Arr;

    iRet = Strlen(Arr);                     // Function call
    cout << "Count of character is : " << iRet << endl;

    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Input  :    Hello    
//  Output :    5
//
//////////////////////////////////////////////////////////////////////////////