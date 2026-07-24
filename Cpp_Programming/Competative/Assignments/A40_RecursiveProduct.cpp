// Write a recursive program which accept number from user and
// return its product

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
//  Description   : To return product of digits 
//  Date          : 24/07/2026
//  Author        : Aishwarya Mohan Jadhav
//
//////////////////////////////////////////////////////////////////////////////

int Product(
                int iNo                         // Variable to take input
           )
{
    int iDigit = 0;                             // Variable to store single digit
    static int iMult = 1;                       // Variable to store sum of digits

    if(iNo != 0)                                // Condition
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;   
        Product(iNo);                         // Recursive call
    }

    return iMult;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Application to display product of digits 
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                             // Variable to store input
    int iRet = 0;                               // Variable to store return value of function

    cout << "Enter number : ";
    cin >> iValue;

    iRet = Product(iValue);                    // Function call
    cout << "Product is : " << iRet << endl;

    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Input  :    523   
//  Output :    30
//
//////////////////////////////////////////////////////////////////////////////