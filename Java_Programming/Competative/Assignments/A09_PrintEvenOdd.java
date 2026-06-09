// Write a program to find the sum of even & odd digits separately in a number

///////////////////////////////////////////////////////////
//
//  Class name    : Logic  
//  Function name : SumEvenOdd
//  Input         : int
//  Output        : int
//  Description   : To print sum of all even & odd digits 
//  Date          : 08/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Logic
{
    void SumEvenOdd(
                        int iNo         // variable to take input
                   )
    {
        int iSumEven = 0;               // Variable to store sum of even digits
        int iSumOdd = 0;                // Variable to store sum of odd digits
        int iDigit = 0;                 // Variable to perform operation

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit % 2 == 0)
            {
                iSumEven = iSumEven + iDigit;
            }
            else
            {
                iSumOdd = iSumOdd + iDigit;
            }
            iNo = iNo / 10;
        }
        System.out.println("Sum of Even digits is : " + iSumEven);
        System.out.println("Sum of Odd digits is : " + iSumOdd);
    }
}

///////////////////////////////////////////////////////////
//
//  Application to print sum of all even & odd digits 
//
///////////////////////////////////////////////////////////

class A09_PrintEvenOdd
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();           // Object of Function Logic
        lObj.SumEvenOdd(123456);       // Call
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    123456
//  Output :    Sum of Even digits is : 12
//              Sum of Odd digits is : 9
//
///////////////////////////////////////////////////////////