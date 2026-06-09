// Write a program to check whether the number is positive negative, zero.

///////////////////////////////////////////////////////////
//
//  Class name    : Logic  
//  Function name : CheckSign
//  Input         : int
//  Output        : void
//  Description   : To check number sign (+, -, 0)
//  Date          : 08/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Logic
{
    void CheckSign(
                        int iNo         // variable to take input
                  )
    {
        if(iNo > 0)
        {
            System.out.println("Positive Number");
        }
        else if(iNo < 0)
        {
            System.out.println("Negative Number");
        }
        else if(iNo == 0)
        {
            System.out.println("Number is Zero");
        }
        else
        {
            System.out.println("Invalid Number");
        }
    }
}

///////////////////////////////////////////////////////////
//
//  Application to To check number sign (+, -, 0)
//
///////////////////////////////////////////////////////////

class A10_CheckSign
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();           // Object of Function Logic
        lObj.CheckSign(-8);                 // Call
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    -8
//  Output :    Negative Number
//
///////////////////////////////////////////////////////////