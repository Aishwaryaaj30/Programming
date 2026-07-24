// Write a recursive program which accept string from user and
// count number of small characters.

//////////////////////////////////////////////////////////////////////////////
//
//  Include required header files
//
//////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////
// 
//  Function name : CountSmall
//  Input         : char
//  Output        : int
//  Description   : To count characters in string
//  Date          : 24/07/2026
//  Author        : Aishwarya Mohan Jadhav
//
//////////////////////////////////////////////////////////////////////////////

int CountSmall(
                char *str                       // Variable to take input
              )
{
    static int iCount = 0;                      // Variable to store count

    if(*str != '\0')                            // Condition
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }

        CountSmall(++str);                      // Recursive call
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
    char Arr[20];                               // Variable to store input
    int iRet = 0;                               // Variable to store return value of function

    cout << "Enter string : ";
    cin.getline(Arr, 20);

    iRet = CountSmall(Arr);                     // Function call
    cout << "Count of small characters is : " << iRet << endl;

    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Input  :    HeLLo WorLD    
//  Output :    4
//
//////////////////////////////////////////////////////////////////////////////