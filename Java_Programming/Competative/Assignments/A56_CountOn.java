// Accept one number from user and count number of ON (1) bits in it without using % & /.

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Import required package
//
////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class name      :   Bitwise
//  Function name   :   CountBit
//  Input           :   int
//  Output          :   int
//  Description     :   To count ON bits
//  Date            :   30/06/2026
//  Author          :   Aishwarya Mohan Jadhav
//
////////////////////////////////////////////////////////////////////////////////////////////////

class Bitwise
{
    public int CountBit(
                            int iNo             // Parameter to accept input
                       )
    {
        int iCount = 0;                         // Variable to store count
        
        while(iNo != 0)                         // Check condition
        {
            if((iNo & 1) == 1)
            {
                iCount++;
            }
            iNo = iNo >> 1;                     // Shift by 1 
        }
        return iCount;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Application to display count of On bits
//
////////////////////////////////////////////////////////////////////////////////////////////////

class A56_CountOn
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);  // Scanner object
        
        int iValue1 = 0;                        // Variable to store input 
        int iRet = 0;                           // Variable to store return value of function

        System.out.println("Enter number : ");
        iValue1 = sobj.nextInt();

        Bitwise bObj = new Bitwise();           // Bitwise class object
        iRet = bObj.CountBit(iValue1);          // Function call

        System.out.println("Count of 1 is : " + iRet);

        sobj.close();
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input   :   11
//  Output  :   3
//
//////////////////////////////////////////////////////////////////////////////////////////////// 
