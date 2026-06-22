// Accept string from user and reverse that string in place

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
//  Function name : RevStr
//  Input         : String
//  Output        : -
//  Description   : To reverse string
//  Date          : 22/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class StringX
{
    public:
     
        void RevStr(
                        char *str      // Pointer parameter to take input   
                   )
        {
            int iCnt = 0;              // Loop counter
            char *start = str;         // Pointer to store str address

            while(*str != '\0')        // Traverse first string till end
            {
                str++;
            }

            str--;

            while(str >= start)        // to Display string in reverse order
            {
                cout << *str;
                str--;
            }
            cout << "\n";
        }
};

///////////////////////////////////////////////////////////
//
//  Application to display last occurrence of character
//
///////////////////////////////////////////////////////////

int main()
{
    char Arr[20];                       // Array of character

    cout << "Enter string : ";
    cin.getline(Arr, 20);

    StringX sobj;                       // Object of class StringX
    sobj.RevStr(Arr);                   // Function call

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input  :    hello
//  Output :    olleh
//
//  Input  :    abcd
//  Output :    dcba
//
///////////////////////////////////////////////////////////