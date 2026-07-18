// Write generic program to accept N values from user and return addition.

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
//  Function name : AddN
//  Input         : T,  int
//  Output        : T
//  Description   : To perform addition of N numbers
//  Date          : 18/07/2026
//  Author        : Aishwarya Mohan Jadhav
//
//////////////////////////////////////////////////////////////////////////////

T AddN(
            T *Arr,                         // Generic variable to take first input
            int iSize                       // Generic variable to take second input
      ) 
{
    T Sum = 0;                              // Generic variable to store sum
    int iCnt = 0;                           // Loop Counter
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }

    return Sum;                             // Return answer
}

//////////////////////////////////////////////////////////////////////////////
//
//  Application to display addition of N numbers
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int Arr[] = {10,20,30,40,50};            // Function call
    int iRet = AddN(Arr, 5);
    cout << iRet << endl;

    float Brr[] = {10.0,3.7,9.8,8.7};        // Function call
    float fRet = AddN(Brr, 4);
    cout << fRet << endl;

    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Input  :    10  20  30  40  50      
//  Output :    150
//
//  Input  :    10.0  3.7  9.8  8.7     
//  Output :    32.2
//
//////////////////////////////////////////////////////////////////////////////