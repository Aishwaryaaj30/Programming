// Accept string from user and copy small characters of that string
// into another string.

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
//  Function name : StrCpyCap
//  Input         : String
//  Output        : -
//  Description   : To copy small characters of string in another
//  Date          : 22/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class StringX
{
    public:
     
        void StrCpySmall(
                        char *src,      // Pointer parameter to take 1st input   
                        char *dest      // Pointer parameter to take 2nd input
                        )
        {
            // Filter
            if(*src == '\0')
            {
                cout << "Empty String\n";
            }

            while(*src != '\0')         // Traverse first string till end
            {
                if((*src >= 'a') && (*src <= 'z'))  // Check small characters and copy
                {
                    *dest = *src;
                    dest++;
                }
                src++;
            }
            *dest = '\0';
        }
};

///////////////////////////////////////////////////////////
//
//  Application to display copied small characters of string in another string
//
///////////////////////////////////////////////////////////

int main()
{
    char Arr[30] = "Marvellous multi OS";       // Array of character
    char Brr[30];                               // Empty Array of character

    StringX sobj;                               // Object of class StringX
    sobj.StrCpySmall(Arr, Brr);                 // Function call

    cout << Brr << "\n";

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input  :    Marvellous multi OS
//  Output :    arvellous multi
//
///////////////////////////////////////////////////////////