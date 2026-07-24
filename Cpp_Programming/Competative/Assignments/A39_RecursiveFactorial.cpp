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
//  Function name : Sum
//  Input         : int
//  Output        : int
//  Description   : To return factorial 
//  Date          : 24/07/2026
//  Author        : Aishwarya Mohan Jadhav
//
//////////////////////////////////////////////////////////////////////////////

int Factorial(
                int iNo                         // Variable to take input
             )
{
    static int iFact = 1;                       // Variable to store sum of digits

    if(iNo != 0)                                // Condition
    {
        iFact = iFact * iNo;   
        Factorial(--iNo);                       // Recursive call
    }

    return iFact;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Application to display factorial
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                             // Variable to store input
    int iRet = 0;                               // Variable to store return value of function

    cout << "Enter number : ";
    cin >> iValue;

    iRet = Factorial(iValue);                   // Function call
    cout << "Factorial is : " << iRet << endl;

    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Input  :    5   
//  Output :    120
//
//////////////////////////////////////////////////////////////////////////////