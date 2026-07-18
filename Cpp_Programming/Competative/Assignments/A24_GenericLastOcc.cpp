// Write generic program which accept N values from user and search last Occurrence.

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
//  Function name : SearchLast
//  Input         : T,  int,  T
//  Output        : T
//  Description   : To search last occurrence of the number
//  Date          : 18/07/2026
//  Author        : Aishwarya Mohan Jadhav
//
//////////////////////////////////////////////////////////////////////////////

int SearchLast(
            T *Arr,                         // Generic variable to take first input
            int iSize,                      // Generic variable to take second input
            T Occ                           // Generic variable to take third input
              ) 
{
    int iCnt = 0;                           // Loop counter
    int iLast = 1;                          // Variable to store last occurrence
    for(iCnt = 0; iCnt <= iSize; iCnt++)
    {
        if(Arr[iCnt] == Occ)
        {
            iLast = iCnt + 1;
        }
    }
    return iLast;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Application to display last occurrence of the number
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iRet = 0;

    int Arr[] = {10,20,30,10,30,40,10,40,10};
    iRet = SearchLast(Arr, 9, 40);
    cout << iRet << endl;

    float Brr[] = {10.5,20.5,30.5,10.5,30.5,40.5,10.5,40.5,10.5};
    iRet = SearchLast(Brr, 9, 10.5f);
    cout << iRet << endl;

    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Input  :    10 20 30 10 30 40 10 40 10      
//  Output :    8 
//
//  Input  :    10.5 20.5 30.5 10.5 30.5 40.5 10.5 40.5 10.5     
//  Output :    9
//
//////////////////////////////////////////////////////////////////////////////