// Write a program to find the sum of digits of a number

/*
Algorithm
    START
        Accept number iNo
        Initialize iSum = 0
        While iNo is not equal to 0:
            Find the last digit : idigit = iNo % 10
            Add digit to iSum: iSum = iSum + iDigit
            Remove the last digit: iNo = iNo / 10
        Display result (iSum)
    STOP
 */

///////////////////////////////////////////////////////////
//
//  Class name    : Logic  
//  Function name : SumofDigits
//  Input         : int
//  Output        : int
//  Description   : Perform summation of digits
//  Date          : 08/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Logic
{
    void SumofDigits(
                        int iNo         // variable to take input
                    )
    {
        int iDigit = 0;                 // Variable for operation
        int iSum = 0;                   // Variable to store sum of digits

        while(iNo != 0)                 // Logic
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        System.out.println("Summation of digits is : " + iSum);
    }
}

///////////////////////////////////////////////////////////
//
//  Application to perform summation of digits
//
///////////////////////////////////////////////////////////

class A1_SumDigits
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();        // Object of Function Logic
        lObj.SumofDigits(1234);     // Call
    }
}

///////////////////////////////////////////////////////////
//
//  Input :     1234
//  Output :    10
//
///////////////////////////////////////////////////////////