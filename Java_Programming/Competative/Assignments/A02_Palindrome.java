// Write a program to check whether a number is palindrome or not.

/*
Algorithm
    START
        Accept number iNo
        Initialize iSum = 0, iTemp = 0, iRev = 0
        Initialize iTemp to iNo
        While iNo is not equal to 0:
            Find the last digit : idigit = iNo % 10
            Add digit to : iRev = (iRev*10) + iDigit
            Remove the last digit: iNo = iNo / 10
        if iRev is equal iTemp
            Print Number is Palindrome
        otherwise
            Print Number is not Palindrome
        Display result
    STOP
 */

///////////////////////////////////////////////////////////
//
//  Class name    : Logic  
//  Function name : CheckPalindrome
//  Input         : int
//  Output        : int
//  Description   : To check a number is palindrome or not
//  Date          : 08/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Logic
{
    void CheckPalindrome(
                            int iNo      // variable to take input
                        )
    {
        int iTemp = 0;                  // Temperory Variable to store iNo value
        int iRev = 0;                   // Variable to store reverse number
        int iDigit = 0;                 // Variable to perform operation

        iTemp = iNo;

        while(iNo != 0)                 // Logic
        {
            iDigit = iNo % 10;
            iRev = (iRev * 10) + iDigit;
            iNo = iNo / 10;
        }

        if(iRev == iTemp)               // Condition
        {
            System.out.println("Number is Palindrome");
        }
        else
        {
            System.out.println("Number is not Palindrome");
        }
    }
}

///////////////////////////////////////////////////////////
//
//  Application to check a number is palindrome or not 
//
///////////////////////////////////////////////////////////

class A02_Palindrome
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();           // Object of Function Logic
        lObj.CheckPalindrome(121);     // Call
    }
}

///////////////////////////////////////////////////////////
//
//  Input :     121
//  Output :    Number is Palindrome
//
///////////////////////////////////////////////////////////