// Accept character from user and check whether it is capital or not.

///////////////////////////////////////////////////////////
//
//  Import required package
//
///////////////////////////////////////////////////////////

import java.util.*;

///////////////////////////////////////////////////////////
//
//  Class name    : Alphabet  
//  Function name : chkCapital
//  Input         : char
//  Output        : boolean
//  Description   : To check character is capital or not
//  Date          : 20/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Alphabet
{
    boolean chkCapital(
                        char cValue         // variable to accept input
                      )
    {   
        if(cValue >= 'A' && cValue <= 'Z')
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
//  Application to check whether character is capital or not.
//
///////////////////////////////////////////////////////////

class A27_AlphaCapital
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);          // Object of scanner

        char cValue = '\0';                             // variable to Store input
        boolean bRet = false;                           // variable to take return value from fuction

        System.out.println("Enter the character : ");
        cValue = sobj.nextLine().charAt(0);

        Alphabet aObj = new Alphabet();                 // Object of function
        bRet = aObj.chkCapital(cValue);

        if(bRet == true)
        {
            System.out.println("It is capital character");
        }
        else
        {
            System.out.println("It is not a chapital character");
        }
        
        sobj.close();
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    F
//  Output :    It is capital character
//
//  Input  :    d
//  Output :    It is not a capital character
//
///////////////////////////////////////////////////////////