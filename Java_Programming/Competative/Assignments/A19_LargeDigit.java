// Write a program to find the largest digit in a given number

///////////////////////////////////////////////////////////
//
//  Class name    : Logic  
//  Function name : FindLargestDigit
//  Input         : int
//  Output        : int
//  Description   : To find largest digit in a given number
//  Date          : 09/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Logic
{
    void FindLargestDigit(
                            int iNo             // variable to take input             
                         )   
    {
        int iMax = 0;                           // Variable to store max value 
        int iDigit = 0;                         // Variable to perform operation

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            
            if(iMax < iDigit)
            {
                iMax = iDigit;
            }

            iNo = iNo / 10;
        }
        System.out.println(iMax);
    }
}

///////////////////////////////////////////////////////////
//
//  Application to find argest digit in a given number
//
///////////////////////////////////////////////////////////

class A19_LargeDigit
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();                     // Object of Function Logic
        lObj.FindLargestDigit(83429);            // Call
    }
}

///////////////////////////////////////////////////////////
//
//  Input :     83429
//  Output :    9
//
///////////////////////////////////////////////////////////
