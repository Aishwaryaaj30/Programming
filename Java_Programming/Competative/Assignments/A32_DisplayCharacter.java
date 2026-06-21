/*
 Accept character from user. If character is small display 
 its corresponding capital character, and if it is small then
 display its corresponding capital.In other cases display as it is.
*/

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
//  Description   : Convert character (A-a)(b-B)(1-1)(%-%)
//  Date          : 21/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Alphabet
{
    void Display(
                    char cValue         // variable to accept input
                )
    {   
        if(cValue >= 'a' && cValue <= 'z')
        {
            System.out.println((char)(cValue - 32));
        }
        else if(cValue >= 'A' && cValue <= 'Z')
        {
            System.out.println((char)(cValue + 32));
        }
        else
        {
            System.out.println(cValue);
        }
    }
}

///////////////////////////////////////////////////////////
//
//  Application to convert character
//
///////////////////////////////////////////////////////////

class A32_DisplayCharacter
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
//  Output :    a
//
//  Input  :    d
//  Output :    D
//
//  Input  :    5
//  Output :    5
//
//  Input  :    %
//  Output :    %
//
///////////////////////////////////////////////////////////