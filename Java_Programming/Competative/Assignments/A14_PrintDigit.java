// Write a program to print each digit seperatly on screen

///////////////////////////////////////////////////////////
//
//  Class name    : Logic  
//  Function name : PrintDigits
//  Input         : int
//  Output        : void
//  Description   : To print each digit seperatly
//  Date          : 09/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Logic
{
    void PrintDigits(
                        int iNo         // variable to take input
                    )
    {
        int iDigit = 0;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            System.out.println(iDigit);
            iNo = iNo / 10;
        }
    }
}

///////////////////////////////////////////////////////////
//
//  Application to print each digit seperatly on screen.
//
///////////////////////////////////////////////////////////

class A14_PrintDigit
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();                     // Object of Function Logic
        lObj.PrintDigits(9876);                  // Call
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    9876
//  Output :    6 7 8 9
//
///////////////////////////////////////////////////////////