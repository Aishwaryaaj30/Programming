// Write a program to count how many even & odd numbers are present between 1 to N.

///////////////////////////////////////////////////////////
//
//  Class name    : Logic  
//  Function name : CountEvenOddRange
//  Input         : int
//  Output        : int
//  Description   : To Count Even & Odd numbers
//  Date          : 09/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Logic
{
    void CountEvenOddRange(
                            int iNo         // variable to take input
                          )
    {
        int iCountEven = 0;               // Variable to store count of even digits
        int iCountOdd = 0;                // Variable to store count of odd digits
        int iCnt = 0;
       
        for(iCnt = 0; iCnt < iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iCountEven++;
            }
            else
            {
                iCountOdd++;
            }
        }
        System.out.println("Count of Even digits is : " + iCountEven);
        System.out.println("Count of Odd digits is : " + iCountOdd);
    }
}

///////////////////////////////////////////////////////////
//
//  Application to print count of all even & odd digits 
//
///////////////////////////////////////////////////////////

class A22_CountEvenOdd
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();                  // Object of Function Logic
        lObj.CountEvenOddRange(50);       // Call
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    50
//  Output :    Even : 25
//              Odd  : 25
//
///////////////////////////////////////////////////////////