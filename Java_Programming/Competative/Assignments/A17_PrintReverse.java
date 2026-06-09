// Write a program to print numbers from N down to 1 in Reverse

///////////////////////////////////////////////////////////
//
//  Class name    : Logic  
//  Function name : SumEvenNumbers
//  Input         : int
//  Output        : void
//  Description   : To print numbers in reverse order
//  Date          : 09/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Logic
{
    void PrintReverse(
                            int iNo                // variable to take input
                     )
    {
        int iCnt = 0;

        for(iCnt = iNo; iCnt >= 1; iCnt--)
        {
            System.out.println(iCnt);
        }
    }
}

///////////////////////////////////////////////////////////
//
//  Application to print numbers in reverse order
//
///////////////////////////////////////////////////////////

class A17_PrintReverse
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();                // Object of Function Logic
        lObj.PrintReverse(10);              // Call
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    10
//  Output :    10 9 8 7 6 5 4 3 2 1
//
///////////////////////////////////////////////////////////