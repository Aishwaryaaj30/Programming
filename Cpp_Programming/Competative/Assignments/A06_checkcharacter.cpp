// Accept string from user and accept one character
// Check whether that character is present in string or not.

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
//  Function name : ChkChar
//  Input         : String
//  Output        : boolean
//  Description   : To check character in string
//  Date          : 22/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class StringX
{
    public:
     
        bool CountSpace(
                            char *str,      // Pointer parameter to take input
                            char ch         // Parameter to take input    
                       )
        {
            while(*str != '\0')             // Traverse first string till end
            {
                if(*str == ch)
                {
                    return true;
                }
                str++;
            }
            return false;
        }
};

///////////////////////////////////////////////////////////
//
//  Application to check and display the character from string
//
///////////////////////////////////////////////////////////

int main()
{
    char Arr[20];                       // Array of character
    bool bRet = 0;                       // Variable to store return value
    char ch = '\0';                     // Variable to store character

    cout << "Enter string : ";
    cin.getline(Arr, 20);

    cout << "Enter the character : ";
    cin >> ch;

    StringX sobj;                       // Object of class StringX
    bRet = sobj.CountSpace(Arr, ch);    // Function call

    if(bRet == true)
    {
        cout << "Character found\n";
    }
    else
    {
        cout << "Character not found\n";
    }

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input  :    Marvellous
//              e
//  Output :    true
//
//  Input  :    Marvellous
//              i
//  Output :    false
//
///////////////////////////////////////////////////////////