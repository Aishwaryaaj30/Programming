// Write a program to print all the even number upto N

///////////////////////////////////////////////////////////
//
//  Class name    : Logic  
//  Function name : PrintEvenNumbers
//  Input         : int
//  Output        : int
//  Description   : To print all the even number upto N
//  Date          : 08/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Logic
{
    void PrintEvenNumbers(
                            int iNo         // variable to take input
                         )
    {
        int iCnt = 0;                       // Counter 

        for(iCnt = 0; iCnt < iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

///////////////////////////////////////////////////////////
//
//  Application to print all the even number upto N
//
///////////////////////////////////////////////////////////

class A7_PrintEven
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();           // Object of Function Logic
        lObj.PrintEvenNumbers(20);     // Call
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    20
//  Output :    0 2 4 6 7 8 10 12 14 16 18 
//
///////////////////////////////////////////////////////////