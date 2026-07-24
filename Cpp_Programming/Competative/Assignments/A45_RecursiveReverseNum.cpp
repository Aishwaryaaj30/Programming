// Write a recursive program which accept number from user and
// return its factorial

//////////////////////////////////////////////////////////////////////////////
//
//  Include required header files
//
//////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////
// 
//  Function name : Reverse
//  Input         : int
//  Output        : int
//  Description   : To return reverse digit 
//  Date          : 24/07/2026
//  Author        : Aishwarya Mohan Jadhav
//
//////////////////////////////////////////////////////////////////////////////

int Reverse(
                int iNo                         // Variable to take input
           )
{
    static int iRev = 0;                        // Variable to store sum of digits

    if(iNo != 0)                                // Condition
    {
        iRev = (iRev * 10) + (iNo % 10);
        Reverse(iNo / 10);                      // Recursive call
    }

    return iRev;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Application to display reversed digit
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                             // Variable to store input
    int iRet = 0;                               // Variable to store return value of function

    cout << "Enter number : ";
    cin >> iValue;

    iRet = Reverse(iValue);                   // Function call
    cout << "Reverse number is : " << iRet << endl;

    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Input  :    523   
//  Output :    325
//
//////////////////////////////////////////////////////////////////////////////