// Write a program to calculate power of number using loops.

///////////////////////////////////////////////////////////
//
//  Class name    : Logic  
//  Function name : CalculatePower
//  Input         : int
//  Output        : void
//  Description   : To calculate power of number using loops.
//  Date          : 09/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Logic
{
    void CalculatePower(
                            int iBase,         // variable to take first input
                            int iExp           // variable to take second input
                       )
    {
        int iResult = 1;
        int iCnt = 0;

        for(iCnt = 0; iCnt < iExp; iCnt++)
        {
            iResult = iResult * iBase;
        }
        
        System.out.println(iResult);
    }
}

///////////////////////////////////////////////////////////
//
//  Application to calculate power of number using loops.
//
///////////////////////////////////////////////////////////

class A15_CalculatePower
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();                           // Object of Function Logic
        lObj.CalculatePower(2, 5);              // Call
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    2   5
//  Output :    32
//
///////////////////////////////////////////////////////////