// Accept character from user and check whether it is small case or not.

///////////////////////////////////////////////////////////
//
//  Import required package
//
///////////////////////////////////////////////////////////

import java.util.*;

///////////////////////////////////////////////////////////
//
//  Class name    : Alphabet  
//  Function name : chkSmall
//  Input         : char
//  Output        : boolean
//  Description   : To check character is small case or not
//  Date          : 20/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Alphabet
{
    boolean chkSmall(
                        char cValue         // variable to accept input
                    )
    {   
        if(cValue >= 'a' && cValue <= 'z')
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
//  Application to check whether character is small case or not.
//
///////////////////////////////////////////////////////////

class A29_AlphaSmall
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);          // Object of scanner

        char cValue = '\0';                             // variable to Store input
        boolean bRet = false;                           // variable to take return value from fuction

        System.out.println("Enter the character : ");
        cValue = sobj.nextLine().charAt(0);

        Alphabet aObj = new Alphabet();                 // Object of function
        bRet = aObj.chkSmall(cValue);

        if(bRet == true)
        {
            System.out.println("It is small case character");
        }
        else
        {
            System.out.println("It is not a small case character");
        }
        
        sobj.close();
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    g
//  Output :    It is small case character
//
//  Input  :    D
//  Output :    It is not a small case character
//
///////////////////////////////////////////////////////////