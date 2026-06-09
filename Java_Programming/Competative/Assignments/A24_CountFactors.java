// Write a program to count total number of factors of given number

///////////////////////////////////////////////////////////
//
//  Class name    : Logic  
//  Function name : CountFactors
//  Input         : int
//  Output        : int
//  Description   : To Count all factors of given number
//  Date          : 09/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Logic
{
    void CountFactors(
                            int iNo         // variable to take input
                       )
    {
        int iCnt = 0;                   // Counter 
        int iCount = 0;

        for(iCnt = 1; iCnt < iNo; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iCount++;
            }
        }
        System.out.println(iCount);
    }
}

///////////////////////////////////////////////////////////
//
//  Application to count all factors of given number
//
///////////////////////////////////////////////////////////

class A24_CountFactors
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();               // Object of Function Logic
        lObj.CountFactors(20);             // Call
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    20
//  Output :    5
//
///////////////////////////////////////////////////////////