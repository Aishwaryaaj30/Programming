// Write a program to find the maximum of two number

/*
Algorithm
    START
        Accept number iNo1 and iNo2
        if iNo1 is greater than iNo2
            Print iNo1 is Maximum
        otherwise
            Print iNo2 is Maximum 
        Display result
    STOP
 */

///////////////////////////////////////////////////////////
//
//  Class name    : Logic  
//  Function name : FindMax
//  Input         : int
//  Output        : int
//  Description   : To find maximum of two number
//  Date          : 08/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Logic
{
    void FindMax(
                    int iNo1,             // variable to take first input
                    int iNo2              // variable to take second input
                )   
    {

        if(iNo1 > iNo2)               // Condition
        {
            System.out.println(iNo1 + " is Maximum");
        }
        else
        {
            System.out.println(iNo2 + " is Maximum");
        }
    }
}

///////////////////////////////////////////////////////////
//
//  Application to find maximum of two number
//
///////////////////////////////////////////////////////////

class A03_MaximumNum
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();        // Object of Function Logic
        lObj.FindMax(20, 15);            // Call
    }
}

///////////////////////////////////////////////////////////
//
//  Input :     20  15
//  Output :    20 is Maximum
//
///////////////////////////////////////////////////////////
