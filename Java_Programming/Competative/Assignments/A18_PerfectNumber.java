// Write a program to check whether a number is perfect or not.

///////////////////////////////////////////////////////////
//
//  Class name    : Logic  
//  Function name : CheckPerfect
//  Input         : int
//  Output        : void
//  Description   : To check whether a number is perfect or not.
//  Date          : 09/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Logic
{
    void CheckPerfect(
                        int iNo         // variable to take input
                    )
    {
        int iCnt = 0;                   // Counter 
        int iSum = 0;

        for(iCnt = 1; iCnt < (iNo/2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        
        if(iSum == (iNo/2))
        {
            System.out.println("Number is a perfect number");
        }
        else
        {
            System.out.println("Number is a not perfect number");
        }
    }
}

///////////////////////////////////////////////////////////
//
//  Application to check whether a number is perfect or not. 
//
///////////////////////////////////////////////////////////

class A18_PerfectNumber
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();             // Object of Function Logic
        lObj.CheckPerfect(6);           // Call
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    6
//  Output :    Number is a Perfect Number
//
///////////////////////////////////////////////////////////