// Accept character from user and check whether it is alphabet or not.

///////////////////////////////////////////////////////////
//
//  Import required package
//
///////////////////////////////////////////////////////////

import java.util.*;

///////////////////////////////////////////////////////////
//
//  Class name    : Alphabet  
//  Function name : chkAlpha
//  Input         : char
//  Output        : boolean
//  Description   : To check it is character or not
//  Date          : 20/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Alphabet
{
    boolean chkAlpha(
                        char cValue         // variable to accept input
                    )
    {
        if((cValue >= 'a' && cValue <= 'z') || 
           (cValue >= 'A' && cValue <= 'Z'))
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
//  Application to check whether it is alphabet or not.
//
///////////////////////////////////////////////////////////

class A26_CheckAlpha
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);          // Object of scanner

        char cValue = '\0';                             // variable to Store input
        boolean bRet = false;                           // variable to take return value from function

        System.out.println("Enter the character : ");
        cValue = sobj.nextLine().charAt(0);

        Alphabet aObj = new Alphabet();                 // Object of function
        bRet = aObj.chkAlpha(cValue);

        if(bRet == true)
        {
            System.out.println("It is character");
        }
        else
        {
            System.out.println("It is not a character");
        }
        
        sobj.close();
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    F
//  Output :    It is character
//
//  Input  :    &
//  Output :    It is not a character
//
///////////////////////////////////////////////////////////