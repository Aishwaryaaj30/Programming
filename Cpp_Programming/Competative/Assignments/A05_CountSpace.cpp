// Accept string from user and count number of white spaces.

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
//  Function name : DisplayDigit
//  Input         : String
//  Output        : int
//  Description   : To count white spaces in string
//  Date          : 22/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class StringX
{
    public:
     
        int CountSpace(
                            char *str       // Pointer variable to take input
                      )
        {
            int iCount = 0;                 // Variable to store count

            while(*str != '\0')             // Traverse first string till end
            {
                if(*str == ' ')
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
//  Application to display number of white spaces
//
///////////////////////////////////////////////////////////

int main()
{
    char Arr[20];                       // Array of character
    int iRet = 0;                       // Variable to store return value

    cout << "Enter string : ";
    cin.getline(Arr, 20);

    StringX sobj;                       // Object of class StringX
    iRet = sobj.CountSpace(Arr);        // Function call

    cout << iRet << "\n";

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input  :    Marvellous Infosystems
//  Output :    1
//
///////////////////////////////////////////////////////////