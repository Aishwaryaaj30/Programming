// Write a program to find the sum of all even numbers upto N.

///////////////////////////////////////////////////////////
//
//  Class name    : Logic  
//  Function name : SumEvenNumbers
//  Input         : int
//  Output        : void
//  Description   : To Sum all even numbers upto N.
//  Date          : 09/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Logic
{
    void SumEvenNumbers(
                            int iNo                // variable to take input
                       )
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 0; iCnt < iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        System.out.println(iSum);
    }
}

///////////////////////////////////////////////////////////
//
//  Application to Sum all even numbers upto N.
//
///////////////////////////////////////////////////////////

class A16_SumEven
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();                           // Object of Function Logic
        lObj.SumEvenNumbers(10);              // Call
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    10
//  Output :    20
//
///////////////////////////////////////////////////////////