// Write a program to display all factors of given number

///////////////////////////////////////////////////////////
//
//  Class name    : Logic  
//  Function name : DisplayFactors
//  Input         : int
//  Output        : int
//  Description   : To display all factors of given number
//  Date          : 09/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Logic
{
    void DisplayFactors(
                            int iNo         // variable to take input
                       )
    {
        int iCnt = 0;                   // Counter 

        for(iCnt = 1; iCnt < iNo; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

///////////////////////////////////////////////////////////
//
//  Application to display all factors of given number
//
///////////////////////////////////////////////////////////

class A23_DisplayFactors
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();               // Object of Function Logic
        lObj.DisplayFactors(12);           // Call
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    12
//  Output :    1 2 3 4 6
//
///////////////////////////////////////////////////////////