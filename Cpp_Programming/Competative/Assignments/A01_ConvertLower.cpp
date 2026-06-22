// Accept string from user and convert it into lower case

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
//  Function name : StrLower
//  Input         : String
//  Output        : -
//  Description   : To convert the string into lower case
//  Date          : 22/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class StringX
{
    public:
     
        void StrLower(
                        char *str       // Pointer variable to take input
                     )
        {
            while(*str != '\0')         // Traverse first string till end
            {
                if(*str >= 'A' && *str <= 'Z')
                {
                    *str = *str + 32;
                }
                str++;
            }
        }
};

///////////////////////////////////////////////////////////
//
//  Application to display the string converted into lower case
//
///////////////////////////////////////////////////////////

int main()
{
    char Arr[20];                      // Array of character
    
    cout << "Enter string : ";
    cin.getline(Arr, 20);

    StringX sobj;                       // Object of class StringX
    sobj.StrLower(Arr);                 // Function call

    cout << "Modified string : " << Arr << "\n";
    
    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input  :    Marvellous Multi OS
//  Output :    marvellous multi os
//
///////////////////////////////////////////////////////////