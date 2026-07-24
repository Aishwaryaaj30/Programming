// Write a recursive program which accept number from user and
// return smallest digit

//////////////////////////////////////////////////////////////////////////////
//
//  Include required header files
//
//////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////
// 
//  Function name : Min
//  Input         : int
//  Output        : int
//  Description   : To return smallest digit 
//  Date          : 24/07/2026
//  Author        : Aishwarya Mohan Jadhav
//
//////////////////////////////////////////////////////////////////////////////

int Min(
            int iNo                             // Variable to take input
        )
{
    int iDigit = 0;                             // Variable to store digit
    static int iMin = 9;                        // Variable to store minimum of digits

    if(iNo != 0)                                // Condition
    {
        iDigit = iNo % 10; 

        if(iMin > iDigit)
        {
            iMin = iDigit;
        }  
        iNo = iNo / 10;
        Min(iNo);                               // Recursive call
    }

    return iMin;
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

    iRet = Min(iValue);                         // Function call
    cout << "Smallest number is : " << iRet << endl;

    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Input  :    87983   
//  Output :    3
//
//////////////////////////////////////////////////////////////////////////////