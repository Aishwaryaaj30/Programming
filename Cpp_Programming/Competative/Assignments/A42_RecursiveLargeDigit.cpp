// Write a recursive program which accept number from user and
// return largest digit

//////////////////////////////////////////////////////////////////////////////
//
//  Include required header files
//
//////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////
// 
//  Function name : Max
//  Input         : int
//  Output        : int
//  Description   : To return largest digit 
//  Date          : 24/07/2026
//  Author        : Aishwarya Mohan Jadhav
//
//////////////////////////////////////////////////////////////////////////////

int Max(
            int iNo                             // Variable to take input
        )
{
    int iDigit = 0;                             // Variable to store digit
    static int iMax = 0;                        // Variable to store maximum of digits

    if(iNo != 0)                                // Condition
    {
        iDigit = iNo % 10; 
        if(iMax < iDigit)
        {
            iMax = iDigit;
        }  
        iNo = iNo / 10;
        Max(iNo);                               // Recursive call
    }

    return iMax;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Application to display largest digit
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                             // Variable to store input
    int iRet = 0;                               // Variable to store return value of function

    cout << "Enter number : ";
    cin >> iValue;

    iRet = Max(iValue);                         // Function call
    cout << "Largest number is : " << iRet << endl;

    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Input  :    87983   
//  Output :    9
//
//////////////////////////////////////////////////////////////////////////////