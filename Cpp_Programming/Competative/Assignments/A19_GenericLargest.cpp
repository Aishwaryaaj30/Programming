// Write generic program to accept N values from user and return largest value.

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
//  Function name : Max
//  Input         : T,  int
//  Output        : T
//  Description   : To return largest value
//  Date          : 18/07/2026
//  Author        : Aishwarya Mohan Jadhav
//
//////////////////////////////////////////////////////////////////////////////

T Max(
            T *Arr,                         // Generic variable to take first input
            int iSize                       // Generic variable to take second input
     ) 
{
    T Max = 0;                              // Generic variable to store max value
    int iCnt = 0;                           // Loop Counter

    Max = Arr[1];
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Max < Arr[iCnt])
        {
            Max = Arr[iCnt];
        }
    }

    return Max;                             // Return answer
}

//////////////////////////////////////////////////////////////////////////////
//
//  Application to display largest value
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int Arr[] = {10,20,30,40,50};            
    int iRet = Max(Arr, 5);                  // Function call
    cout << iRet << endl;

    float Brr[] = {10.5,3.7,9.8,8.7};        
    float fRet = Max(Brr, 4);               // Function call
    cout << fRet << endl;

    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Input  :    10  20  30  40  50      
//  Output :    50
//
//  Input  :    10.5  3.7  9.8  8.7     
//  Output :    10.5
//
//////////////////////////////////////////////////////////////////////////////