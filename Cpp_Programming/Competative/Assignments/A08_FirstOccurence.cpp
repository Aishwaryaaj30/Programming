// Accept string from user and accept one character
// Return index of first occurrence of that character.

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
//  Function name : Firstchar
//  Input         : String
//  Output        : int
//  Description   : To display 1st occurrence of character
//  Date          : 22/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class StringX
{
    public:
     
        int Firstchar(
                            char *str,      // Pointer parameter to take 1st input
                            char ch         // Parameter to take 2nd input    
                     )
        {
            int iCnt = 0;                   // Loop counter
            int iIndex = -1;                // Variable to store index value

            for(iCnt = 0; str[iCnt] != '\0'; iCnt++)
            {
                if(str[iCnt] == ch)
                {
                    iIndex = iCnt;
                    break;
                }
            }
            return iIndex;
        }
};

///////////////////////////////////////////////////////////
//
//  Application to display 1st occurrence of character
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
    iRet = sobj.Firstchar(Arr, ch);     // Function call

    cout << "Character location is : " << iRet << "\n";

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input  :    Marvellous
//              w
//  Output :    -1
//
//  Input  :    Marvellous
//              e
//  Output :    4
//
///////////////////////////////////////////////////////////