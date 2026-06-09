// Write a program to calculate product of digit of a number

///////////////////////////////////////////////////////////
//
//  Class name    : Logic  
//  Function name : ProductOfDigits
//  Input         : int
//  Output        : int
//  Description   : To calculate product of digit of a number
//  Date          : 09/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Logic
{
    void ProductOfDigits(
                            int iNo             // variable to take input             
                        )   
    {
        int iMult = 1;                          // Variable to store product 
        int iDigit = 0;                         // Variable to perform operation

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iMult = iMult * iDigit;
            iNo = iNo / 10;
        }
        System.out.println(iMult);
    }
}

///////////////////////////////////////////////////////////
//
//  Application to calculate product of digit of a number
//
///////////////////////////////////////////////////////////

class A21_CalculateProduct
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();                   // Object of Function Logic
        lObj.ProductOfDigits(234);             // Call
    }
}

///////////////////////////////////////////////////////////
//
//  Input :     234
//  Output :    24
//
///////////////////////////////////////////////////////////
