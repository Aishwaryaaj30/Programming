// Write a program to check whether the number is divible by 5 & 11 or not

///////////////////////////////////////////////////////////
//
//  Class name    : Logic  
//  Function name : CheckDivisible
//  Input         : int
//  Output        : void
//  Description   : To check Divisibility
//  Date          : 09/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Logic
{
    void CheckDivisible(
                            int iNo         // variable to take input
                       )
    {
        if(iNo % 5 == 0 && iNo % 11 == 0)
        {
            System.out.println("Divisible");
        }
        else
        {
            System.out.println("Not Divisible");
        }
    }
}

///////////////////////////////////////////////////////////
//
//  Application to check whether the number is divible by 5 & 11 or not
//
///////////////////////////////////////////////////////////

class A13_ChkDivisible
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();                     // Object of Function Logic
        lObj.CheckDivisible(55);                 // Call
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    55
//  Output :    Divisible
//
///////////////////////////////////////////////////////////