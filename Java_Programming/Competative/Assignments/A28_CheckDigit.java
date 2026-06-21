// Accept character from user and check whether it is digit or not.

///////////////////////////////////////////////////////////
//
//  Import required package
//
///////////////////////////////////////////////////////////

import java.util.*;

///////////////////////////////////////////////////////////
//
//  Class name    : Alphabet  
//  Function name : chkDigit
//  Input         : char
//  Output        : boolean
//  Description   : To check character is digit or not
//  Date          : 20/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Alphabet
{
    boolean chkDigit(
                        char cValue         // variable to accept input
                    )
    {   
        if(cValue >= '1' && cValue <= '9')
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
//  Application to check whether character is digit or not.
//
///////////////////////////////////////////////////////////

class A28_CheckDigit
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);          // Object of scanner

        char cValue = '\0';                             // variable to Store input
        boolean bRet = false;                           // variable to take return value from function

        System.out.println("Enter the character : ");
        cValue = sobj.nextLine().charAt(0);

        Alphabet aObj = new Alphabet();                 // Object of function
        bRet = aObj.chkDigit(cValue);

        if(bRet == true)
        {
            System.out.println("It is Digit");
        }
        else
        {
            System.out.println("It is not a Digit");
        }
        
        sobj.close();
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    7
//  Output :    It is Digit
//
//  Input  :    d
//  Output :    It is not a Digit
//
///////////////////////////////////////////////////////////