// Write generic program to accept N values from user and return smallest value.

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
//  Function name : Min
//  Input         : T,  int
//  Output        : T
//  Description   : To return smallest value
//  Date          : 18/07/2026
//  Author        : Aishwarya Mohan Jadhav
//
//////////////////////////////////////////////////////////////////////////////

T Min(
            T *Arr,                         // Generic variable to take first input
            int iSize                       // Generic variable to take second input
     ) 
{
    T Min = 0;                              // Generic variable to store min value
    int iCnt = 0;                           // Loop Counter

    Min = Arr[1];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Min > Arr[iCnt])
        {
            Min = Arr[iCnt];
        }
    }

    return Min;                             // Return answer
}

//////////////////////////////////////////////////////////////////////////////
//
//  Application to display smallest value
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int Arr[] = {10,20,30,40,50};            
    int iRet = Min(Arr, 5);                  // Function call
    cout << iRet << endl;

    float Brr[] = {10.5,3.7,9.8,8.7};        
    float fRet = Min(Brr, 4);               // Function call
    cout << fRet << endl;

    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Input  :    10  20  30  40  50      
//  Output :    10
//
//  Input  :    10.5  3.7  9.8  8.7     
//  Output :    3.7
//
//////////////////////////////////////////////////////////////////////////////