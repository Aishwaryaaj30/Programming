// Write a program to find the smallest digit in a given number

///////////////////////////////////////////////////////////
//
//  Class name    : Logic  
//  Function name : FindSmallestDigit
//  Input         : int
//  Output        : int
//  Description   : To find Smallest digit in a given number
//  Date          : 09/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Logic
{
    void FindSmallestDigit(
                            int iNo             // variable to take input             
                          )   
    {
        int iMin = 0;                           // Variable to store min value 
        int iDigit = 0;                         // Variable to perform operation

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iMin > iDigit)
            {
                iMin = iDigit;
            }

            iNo = iNo / 10;
        }
        System.out.println(iMin);
    }
}

///////////////////////////////////////////////////////////
//
//  Application to find smallest digit in a given number
//
///////////////////////////////////////////////////////////

class A20_SmallDigit
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();                     // Object of Function Logic
        lObj.FindSmallestDigit(45872);           // Call
    }
}

///////////////////////////////////////////////////////////
//
//  Input :     45872
//  Output :    2
//
///////////////////////////////////////////////////////////
