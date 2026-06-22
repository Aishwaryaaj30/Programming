// Accept string from user and display only digits from that string

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
//  Output        : -
//  Description   : To display digits from string
//  Date          : 22/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class StringX
{
    public:
     
        void DisplayDigit(
                            char *str       // Pointer variable to take input
                         )
        {
            while(*str != '\0')             // Traverse first string till end
            {
                if(*str >= '0' && *str <= '9')
                {
                    cout << *str;
                }
                str++;
            }
            cout << "\n";
        }
};

///////////////////////////////////////////////////////////
//
//  Application to display digits from that string
//
///////////////////////////////////////////////////////////

int main()
{
    char Arr[20];                      // Array of character
    
    cout << "Enter string : ";
    cin.getline(Arr, 20);

    StringX sobj;                       // Object of class StringX
    sobj.DisplayDigit(Arr);             // Function call

    return 0;
}

///////////////////////////////////////////////////////////
//
//  Input  :    Marve89llous121
//  Output :    89121
//
///////////////////////////////////////////////////////////