// Accept string from user and copy capital characters of that string
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
//  Description   : To copy capital characters of string in another
//  Date          : 22/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class StringX
{
    public:
     
        void StrCpyCap(
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
                if((*src >= 'A') && (*src <= 'Z'))  // Check capital characters and copy 
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
//  Application to display copied capital characters of string in another string
//
///////////////////////////////////////////////////////////

int main()
{
    char Arr[30] = "Marvellous Multi OS";       // Array of character
    char Brr[30];                               // Empty Array of character

    StringX sobj;                               // Object of class StringX
    sobj.StrCpyCap(Arr, Brr);                   // Function call

    cout << Brr << "\n";

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input  :    Marvellous Multi OS
//  Output :    MMOS
//
///////////////////////////////////////////////////////////