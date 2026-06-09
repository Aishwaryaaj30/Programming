// Write a program to check whether the given year is a leap year or not.

///////////////////////////////////////////////////////////
//
//  Class name    : Logic  
//  Function name : CheckLeapYear
//  Input         : int
//  Output        : void
//  Description   : To check leap year
//  Date          : 09/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Logic
{
    void CheckLeapYear(
                        int year         // variable to take input
                      )
    {
        if(year % 4 == 0)
        {
            System.out.println("It is a leap year");
        }
        else
        {
            System.out.println("It is not a leap year");
        }
    }
}

///////////////////////////////////////////////////////////
//
//  Application to To check Leap year
//
///////////////////////////////////////////////////////////

class A11_LeapYear
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();                       // Object of Function Logic
        lObj.CheckLeapYear(2024);                 // Call
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    2024
//  Output :    Leap Year
//
///////////////////////////////////////////////////////////