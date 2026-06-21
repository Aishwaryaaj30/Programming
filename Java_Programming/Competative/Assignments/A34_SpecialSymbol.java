// Accept character from user and check whether it is special symbol or not

///////////////////////////////////////////////////////////
//
//  Import required package
//
///////////////////////////////////////////////////////////

import java.util.*;

///////////////////////////////////////////////////////////
//
//  Class name    : Alphabet  
//  Function name : Checkspecial
//  Input         : char
//  Output        : boolean
//  Description   : To check and display special characters
//  Date          : 21/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Alphabet
{
    boolean CheckSpecial(
                            char cValue         // variable to accept input
                        )
    {   
        if((cValue >= '!' && cValue <= '/') ||
           (cValue >= ':' && cValue <= '@') ||
           (cValue >= '[' && cValue <= '`') ||
           (cValue >= '{' && cValue <= '~')
          )
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

///////////////////////////////////////////////////////////
//
//  Application to check display special character
//
///////////////////////////////////////////////////////////

class A34_SpecialSymbol
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);          // Object of scanner
        Boolean bRet = false;                           // variable to take return value from function
        char cValue = '\0';                             // variable to Store input

        System.out.println("Enter the character : ");
        cValue = sobj.nextLine().charAt(0);

        Alphabet aObj = new Alphabet();                 // Object of function
        bRet = aObj.CheckSpecial(cValue);               // function Call

        if(bRet == true)
        {
            System.out.println("It is special character");
        }
        else
        {
            System.out.println("It is not a special character");
        }
        sobj.close();
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    %
//  Output :    It is special character
//
//  Input  :    d
//  Output :    It is not a special character
//
///////////////////////////////////////////////////////////