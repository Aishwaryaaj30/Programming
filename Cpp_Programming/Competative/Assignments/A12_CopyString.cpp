// Accept string from user and copy the contents of that string
// into another string. (Implement strncpy() function).

///////////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////
//
//  Class name    : StringX  
//  Function name : StrNCpy
//  Input         : String
//  Output        : -
//  Description   : To copy the contents of string in another
//  Date          : 22/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class StringX
{
    public:
     
        void StrNCpy(
                        char *src,       // Pointer parameter to take 1st input   
                        char *dest,      // Pointer parameter to take 2nd input
                        int iCnt         // Parameter to take 3rd input
                   )
        {
            // Filter
            if(*src == '\0')
            {
                cout << "Empty String\n";
            }

            while((*src != '\0') && (iCnt != 0))    // Traverse first string till end and copy
            {
                *dest = *src;
                src++;
                dest++;
                iCnt--;
            }
            *dest = '\0';
        }
};

///////////////////////////////////////////////////////////
//
//  Application to display copied contents of string in another string
//
///////////////////////////////////////////////////////////

int main()
{
    char Arr[30] = "Marvellous Multi OS";       // Array of character
    char Brr[30];                               // Empty Array of character

    StringX sobj;                               // Object of class StringX
    sobj.StrNCpy(Arr, Brr, 10);                 // Function call

    cout << Brr << "\n";

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input  :    Marvellous Multi OS
//  Output :    Marvellous Multi OS
//
///////////////////////////////////////////////////////////