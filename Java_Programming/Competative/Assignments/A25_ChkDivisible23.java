// Write a program to print all the numbers from 1 to N that are divible by 2 & 3

///////////////////////////////////////////////////////////
//
//  Class name    : Logic  
//  Function name : CheckDivisible23
//  Input         : int
//  Output        : int
//  Description   : To check Divisibility
//  Date          : 09/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Logic
{
    void CheckDivisible23(
                            int iNo         // variable to take input
                         )
    {
        int iCnt = 0;
        
        for(iCnt = 1; iCnt < iNo; iCnt++)
        {
            if(iCnt % 2 == 0 && iCnt % 3 == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

///////////////////////////////////////////////////////////
//
//  Application to print all the numbers that are divible by 2 & 5
//
///////////////////////////////////////////////////////////

class A25_ChkDivisible23
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();                     // Object of Function Logic
        lObj.CheckDivisible23(30);                // Call
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    30
//  Output :    6 12 18 24
//
///////////////////////////////////////////////////////////