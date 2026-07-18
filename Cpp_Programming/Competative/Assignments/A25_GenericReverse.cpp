// Write generic program which accept N values from user and reverse the contents.

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
//  Function name : Reverse
//  Input         : T,  int
//  Output        : T
//  Description   : To reverse the contents
//  Date          : 18/07/2026
//  Author        : Aishwarya Mohan Jadhav
//
//////////////////////////////////////////////////////////////////////////////

void Reverse(
            T *Arr,                         // Generic variable to take first input
            int iSize                       // Generic variable to take second input
            ) 
{
    int iCnt = 0;                           // Loop counter

    for(iCnt = iSize - 1; iCnt >= 0; iCnt--)
    {
        cout << Arr[iCnt] << " ";
    }
    cout << endl << endl;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Application to display reverse contents.
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int Arr[] = {10,20,30,10,30,40,10,40,10};
    Reverse(Arr, 9);

    float Brr[] = {10.5,20.5,30.5,10.5,30.5,40.5,10.5,40.5,10.5};
    Reverse(Brr, 9);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Input  :    10 20 30 10 30 40 10 40 10      
//  Output :    10 40 10 40 30 10 30 20 10  
//
//  Input  :    10.5 20.5 30.5 10.5 30.5 40.5 10.5 40.5 10.5     
//  Output :    10.5 40.5 10.5 40.5 30.5 10.5 30.5 20.5 10.5 
//
//////////////////////////////////////////////////////////////////////////////