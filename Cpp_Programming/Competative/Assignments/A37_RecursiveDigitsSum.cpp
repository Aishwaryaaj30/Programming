// Write a recursive program which accept number from user and
// return summation of its digits

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
//  Description   : To perform summation of digits using recursion
//  Date          : 24/07/2026
//  Author        : Aishwarya Mohan Jadhav
//
//////////////////////////////////////////////////////////////////////////////

int Sum(
            int iNo                         // Variable to take input
        )
{
    int iDigit = 0;                         // Variable to store single digit
    static int iSum = 0;                    // Variable to store sum of digits

    if(iNo != 0)                            // Condition
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        Sum(iNo);                         // Recursive call
    }

    return iSum;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Application to display summation of digits using recursion
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                         // Variable to store input
    int iRet = 0;                           // Variable to store return value of function

    cout << "Enter number : ";
    cin >> iValue;

    iRet = Sum(iValue);                     // Function call
    cout << "summation of digits is : " << iRet << endl;

    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Input  :    879    
//  Output :    24
//
//////////////////////////////////////////////////////////////////////////////