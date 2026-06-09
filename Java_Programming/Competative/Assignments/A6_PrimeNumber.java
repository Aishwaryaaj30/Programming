// Write a program to check whether a number is prime or not.

///////////////////////////////////////////////////////////
//
//  Class name    : Logic  
//  Function name : CheckPrime
//  Input         : int
//  Output        : 
//  Description   : To check whether a number is prime or not.
//  Date          : 08/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Logic
{
    void CheckPrime(
                        int iNo         // variable to take input
                    )
    {
        int iCnt = 0;                   // Counter 
        int iCount = 0;

        for(iCnt = 2; iCnt < (iNo/2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iCount++;
            }
        }
        
        if(iCount == 2)
        {
            System.out.println("Number is a prime number");
        }
        else
        {
            System.out.println("Number is a not prime number");
        }
    }
}

///////////////////////////////////////////////////////////
//
//  Application to check whether a number is prime or not. 
//
///////////////////////////////////////////////////////////

class A6_PrimeNumber
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();           // Object of Function Logic
        lObj.CheckPrime(11);           // Call
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    11
//  Output :    Number is a Prime Number
//
///////////////////////////////////////////////////////////