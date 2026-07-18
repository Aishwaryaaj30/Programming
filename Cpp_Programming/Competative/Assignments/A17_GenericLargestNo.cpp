// Write generic program to find largest number from three number

//////////////////////////////////////////////////////////////////////////////
//
//  Include required header files
//
//////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>                          // Generic template

//////////////////////////////////////////////////////////////////////////////
// 
//  Function name : Maximum
//  Input         : T,  T,  T
//  Output        : T
//  Description   : To find largest number
//  Date          : 18/07/2026
//  Author        : Aishwarya Mohan Jadhav
//
//////////////////////////////////////////////////////////////////////////////

T Maximum(
            T No1,                          // Generic variable to take first input
            T No2,                          // Generic variable to take second input
            T No3                           // Generic variable to take third input
         ) 
{
    if(No1 > No2 && No1 > No3)
    {
        return No1;
    }
    else if(No2 > No3)
    {
        return No2;
    }
    else
    {
        return No3;
    }
}

//////////////////////////////////////////////////////////////////////////////
//
//  Application to display largest number from three numbers.
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iRet = Maximum(10,20,30);                 // Function call
    cout << iRet << endl;

    float fRet = Maximum(10.0f, 40.0f, 25.0f);    // Funtion call
    cout << fRet << endl;

    double dRet = Maximum(50.0f, 40.0f, 25.0f);    // Funtion call
    cout << dRet << endl;

    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Input  :    10      20      30     
//  Output :    30
//
//  Input  :    10.0    40.0    25.0     
//  Output :    40
//
//  Input  :    50.0    40.0    25.0     
//  Output :    50
//
//////////////////////////////////////////////////////////////////////////////