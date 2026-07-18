// Write generic program to multiply two numbers.

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
//  Function name : Multiply
//  Input         : T,  T
//  Output        : T
//  Description   : To perform multiplication of two numbers
//  Date          : 18/07/2026
//  Author        : Aishwarya Mohan Jadhav
//
//////////////////////////////////////////////////////////////////////////////

T Multiply(
            T No1,                          // Generic variable to take first input
            T No2                           // Generic variable to take second input
          ) 
{
    T Ans;                                  // Generic variable to store answer

    Ans = No1 * No2;                        // Multiplication operation

    return Ans;                             // Return answer
}

//////////////////////////////////////////////////////////////////////////////
//
//  Application to display multiplication of two numbers
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iRet = Multiply(10,20);             // Function call
    cout << iRet << endl;

    float fRet = Multiply(10.0f, 20.0f);    // Funtion call
    cout << fRet << endl;

    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Input  :    10      20      
//  Output :    200
//
//  Input  :    10.0    20.0      
//  Output :    200
//
//////////////////////////////////////////////////////////////////////////////