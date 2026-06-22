// Accept string from user and toggle the case

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
//  Function name : StrToggle
//  Input         : String
//  Output        : -
//  Description   : To toggle the string 
//  Date          : 22/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class StringX
{
    public:
     
        void StrToggle(
                        char *str       // Pointer variable to take input
                      )
        {
            while(*str != '\0')         // Traverse first string till end
            {
                if(*str >= 'a' && *str <= 'z')
                {
                    *str = *str - 32;
                }
                else if(*str >= 'A' && *str <= 'Z')
                {
                    *str = *str + 32;
                }
                str++;
            }
        }
};

///////////////////////////////////////////////////////////
//
//  Application to display the toggled string
//
///////////////////////////////////////////////////////////

int main()
{
    char Arr[20];                      // Array of character
    
    cout << "Enter string : ";
    cin.getline(Arr, 20);

    StringX sobj;                       // Object of class StringX
    sobj.StrToggle(Arr);                // Function call

    cout << "Modified string : " << Arr << "\n";

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input  :    Marvellous Multi OS
//  Output :    mARVELLOUS mULTI os
//
///////////////////////////////////////////////////////////