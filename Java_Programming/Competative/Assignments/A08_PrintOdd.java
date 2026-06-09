// Write a program to print all the odd number upto N

///////////////////////////////////////////////////////////
//
//  Class name    : Logic  
//  Function name : PrintOddNumbers
//  Input         : int
//  Output        : int
//  Description   : To print all the odd number upto N
//  Date          : 08/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Logic
{
    void PrintOddNumbers(
                            int iNo         // variable to take input
                        )
    {
        int iCnt = 0;                       // Counter 

        for(iCnt = 0; iCnt < iNo; iCnt++)
        {
            if(iCnt % 2 != 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

///////////////////////////////////////////////////////////
//
//  Application to print all the odd number upto N
//
///////////////////////////////////////////////////////////

class A08_PrintOdd
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();           // Object of Function Logic
        lObj.PrintOddNumbers(20);      // Call
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    20
//  Output :    1 3 5 7 9 11 13 15 17 19
//
///////////////////////////////////////////////////////////