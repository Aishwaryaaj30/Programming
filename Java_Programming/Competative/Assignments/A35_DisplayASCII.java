// Accept character from user and display its ASCII value in
// decimal, octal and hexadecimal format.

///////////////////////////////////////////////////////////
//
//  Import required package
//
///////////////////////////////////////////////////////////

import java.util.*;

///////////////////////////////////////////////////////////
//
//  Class name    : Alphabet  
//  Function name : Display
//  Input         : char
//  Output        : -
//  Description   : To display ASCII value of character
//  Date          : 21/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Alphabet
{
    void Display(
                    char cValue         // Variable to accept input
                )
    {
        int iValue = (int)cValue;       // Typecast char to int

        System.out.println("Decimal : " + iValue);
        System.out.println("Octal : " + Integer.toOctalString(iValue));
        System.out.println("Hexadecimal : 0X" + Integer.toHexString(iValue));
    }  
}

///////////////////////////////////////////////////////////
//
//  Application to display ASCII value of character
//
///////////////////////////////////////////////////////////

class A35_DisplayASCII
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);          // Object of scanner
        char cValue = '\0';                             // variable to Store input

        System.out.println("Enter the character : ");
        cValue = sobj.nextLine().charAt(0);

        Alphabet aObj = new Alphabet();                 // Object of function
        aObj.Display(cValue);                           // function Call

        sobj.close();
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    A
//  Output :    Decimal : 65
//              Octal : 101
//              Hexadecimal : 0X41
//
///////////////////////////////////////////////////////////