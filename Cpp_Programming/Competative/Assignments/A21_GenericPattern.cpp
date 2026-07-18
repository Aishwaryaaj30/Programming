// Write generic program which accept on value and one number from user.
// Print that value that number of times on screen.

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
//  Function name : Display
//  Input         : T,  int
//  Output        : T
//  Description   : To print value in given number of times
//  Date          : 18/07/2026
//  Author        : Aishwarya Mohan Jadhav
//
//////////////////////////////////////////////////////////////////////////////

void Display(
            T Value,                        // Generic variable to take first input
            int iSize                       // Generic variable to take second input
          ) 
{
    int iCnt = 0;                           // Loop counter

    for(iCnt = 1; iCnt <= iSize; iCnt++)
    {
        cout<< Value << " ";
    }

    cout << endl;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Application to display value in given number of times
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    Display('M', 7);
    Display(11, 3);
    Display(3.7, 6);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Input  :    M   7      
//  Output :    M   M   M   M   M   M   M  
//
//  Input  :    11  3      
//  Output :    11  11  11
//
//  Input  :    3.7  6      
//  Output :    3.7 3.7 3.7 3.7 3.7 3.7
//
//////////////////////////////////////////////////////////////////////////////