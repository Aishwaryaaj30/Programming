// Accept 2 string from user and concat second string after first string.
// (Implement strcat() function)

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
//  Function name : StrCatX
//  Input         : String
//  Output        : -
//  Description   : To concat 2nd string into 1st string
//  Date          : 22/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class StringX
{
    public:
     
        void StrCatX(
                        char *src,      // Pointer parameter to take 1st input   
                        char *dest      // Pointer parameter to take 2nd input
                    )
        {
            // Filter
            if(*src == '\0')            
            {
                cout << "Empty String\n";
            }

            while(*src != '\0')        // Traverse first string till end 
            {
                src++;
            }

            while(*dest != '\0')       // Copy contents of destination in source 
            {
                *src = *dest; 
                dest++;
                src++;
            }
            *dest = '\0';
        }
};

///////////////////////////////////////////////////////////
//
//  Application to display concat 2nd string into 1st string
//
///////////////////////////////////////////////////////////

int main()
{
    char Arr[30] = "Marvellous Infosystems";  // Array of character
    char Brr[30] = " Logic Building";           // Empty Array of character

    StringX sobj;                             // Object of class StringX
    sobj.StrCatX(Arr, Brr);                   // Function call

    cout << Arr << "\n";

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input  :    Marvellous Infosystems
//              Logic Building
//  Output :    Marvellous Infosystems Logic Building
//
///////////////////////////////////////////////////////////