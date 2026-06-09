// Write a program to print the multiplication table of a number

/*
Algorithm
    START
        Accept number iNo1
        Initialize iCnt = 0
        Loop iCnt till 10
            Print table
        Display result
    STOP
 */

///////////////////////////////////////////////////////////
//
//  Class name    : Logic  
//  Function name : PrintTable
//  Input         : int
//  Output        : int
//  Description   : To print the multiplication table of a number
//  Date          : 08/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Logic
{
    void PrintTable(
                        int iNo         // variable to take input
                    )
    {
        int iCnt = 0;                   // Counter 

        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            System.out.println(iCnt * iNo);
        }
    }
}

///////////////////////////////////////////////////////////
//
//  Application to print the multiplication table of a number 
//
///////////////////////////////////////////////////////////

class A05_PrintTable
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();           // Object of Function Logic
        lObj.PrintTable(5);            // Call
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    5
//  Output :    5 10 15 20 25 30 35 40 45 50
//
///////////////////////////////////////////////////////////