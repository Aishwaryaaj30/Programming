// Write generic program which accept N values from user and count frequency.

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
//  Function name : Frequency
//  Input         : T,  int,  T
//  Output        : T
//  Description   : To count frequency of number
//  Date          : 18/07/2026
//  Author        : Aishwarya Mohan Jadhav
//
//////////////////////////////////////////////////////////////////////////////

int Frequency(
            T *Arr,                         // Generic variable to take first input
            int iSize,                      // Generic variable to take second input
            T Freq                          // Generic variable to take third input
             ) 
{
    int iCnt = 0;                           // Loop counter
    int iCount = 0;

    for(iCnt = 1; iCnt <= iSize; iCnt++)
    {
        if(Arr[iCnt] == Freq)
        {
            iCount++;
        }
    }

    return iCount;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Application to display frequency of number.
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iRet = 0;

    int Arr[] = {10,20,30,10,30,40,10,40,10};
    iRet = Frequency(Arr, 9, 10);
    cout << iRet << endl;

    float Brr[] = {10.5,20.5,30.5,10.5,30.5,40.5,10.5,40.5,10.5};
    iRet = Frequency(Brr, 9, 40.5f);
    cout << iRet << endl;

    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Input  :    10 20 30 10 30 40 10 40 10      
//  Output :    3 
//
//  Input  :    10.5 20.5 30.5 10.5 30.5 40.5 10.5 40.5 10.5     
//  Output :    2
//
//////////////////////////////////////////////////////////////////////////////