// Accept string from user and accept one character
// Return frequency of that character.

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
//  Output        : int
//  Description   : To count frequency of character in string
//  Date          : 22/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class StringX
{
    public:
     
        int Countchar(
                            char *str,      // Pointer parameter to take input
                            char ch         // Parameter to take input    
                     )
        {
            int iCount = 0;                 // Variable to store count

            while(*str != '\0')             // Traverse first string till end
            {
                if(*str == ch)
                {
                    iCount++;
                }
                str++;
            }
            return iCount;
        }
};

///////////////////////////////////////////////////////////
//
//  Application to display frequency of character
//
///////////////////////////////////////////////////////////

int main()
{
    char Arr[20];                       // Array of character
    int iRet = 0;                       // Variable to store return value
    char ch = '\0';                     // Variable to store character

    cout << "Enter string : ";
    cin.getline(Arr, 20);

    cout << "Enter the character : ";
    cin >> ch;

    StringX sobj;                       // Object of class StringX
    iRet = sobj.Countchar(Arr, ch);     // Function call

    cout << "character frequency is : " << iRet << "\n";

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input  :    Marvellous
//              l
//  Output :    2
//
//  Input  :    Marvellous
//              w
//  Output :    0
//
///////////////////////////////////////////////////////////