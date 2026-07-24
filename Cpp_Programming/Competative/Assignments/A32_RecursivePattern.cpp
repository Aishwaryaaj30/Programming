// Write a program which display below pattern.

//////////////////////////////////////////////////////////////////////////////
//
//  Include required header files
//
//////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////
// 
//  Function name : Display
//  Input         : int
//  Output        : void
//  Description   : To display pattern using recursion
//  Date          : 24/07/2026
//  Author        : Aishwarya Mohan Jadhav
//
//////////////////////////////////////////////////////////////////////////////

void Display(
                int iNo                     // Variable to take input
            )
{
    static int iCount = 1;                  // Variable to store count

    if(iNo != 0)                            // Condition
    {
        cout << iCount << " ";
        iCount++;
        Display(--iNo);                     // Recursive call
    }
}

//////////////////////////////////////////////////////////////////////////////
//
//  Application to display pattern using recursion
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                         // Variable to store input

    cout << "Enter number : ";
    cin >> iValue;

    Display(iValue);                        // Function call

    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Input  :    5     
//  Output :    1 2 3 4 5
//
//  Input  :    7     
//  Output :    1 2 3 4 5 6 7
//
//////////////////////////////////////////////////////////////////////////////