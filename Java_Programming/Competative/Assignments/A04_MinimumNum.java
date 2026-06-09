// Write a program to find the minimum of three number

/*
Algorithm
    START
        Accept number iNo1, iNo2 and iNo3
        If iNo1 is less than iNo2 and iNo3
            Print iNo1 is Minimum
        Otherwise if iNo2 is less than iNo3
            Print iNo2 is Minimum 
        Otherwise
            PRintfiNo3 is Minimum
        Display result
    STOP
 */

///////////////////////////////////////////////////////////
//
//  Class name    : Logic  
//  Function name : FindMax
//  Input         : int
//  Output        : int
//  Description   : To find minimum of three number
//  Date          : 08/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Logic
{
    void FindMin(
                    int iNo1,              // variable to take first input
                    int iNo2,              // variable to take second input
                    int iNo3               // variable to take third input
                )   
    {

        if(iNo1 < iNo2 && iNo1 < iNo3)               // Condition
        {
            System.out.println(iNo1 + " is Minimum");
        }
        else if(iNo2 < iNo3) 
        {
            System.out.println(iNo2 + " is Minimum");
        }
        else
        {
            System.out.println(iNo3 + " is Minimum");
        }
    }
}

///////////////////////////////////////////////////////////
//
//  Application to find minimum of three number
//
///////////////////////////////////////////////////////////

class A04_MinimumNum
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();        // Object of Function Logic
        lObj.FindMin(3, 7, 2);           // Call
    }
}

///////////////////////////////////////////////////////////
//
//  Input :     3   7   2
//  Output :    2 is Miniimum
//
///////////////////////////////////////////////////////////
