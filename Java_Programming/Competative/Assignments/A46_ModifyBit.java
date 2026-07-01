// Accept one number from user and off 7th bit of that number if it is on.
// Return modified number.

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Import required package
//
////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class name      :   Bitwise
//  Function name   :   ModifyBit
//  Input           :   int
//  Output          :   int
//  Description     :   To off 7th bit & if bit is on modify number
//  Date            :   30/06/2026
//  Author          :   Aishwarya Mohan Jadhav
//
////////////////////////////////////////////////////////////////////////////////////////////////


class Bitwise
{
    public int ModifyBit(
                            int iNo        // Parameter to accept input
                        )
    {
        int iMask = 0x1;                   // Create a mask with only 1st bit on
        int iPos = 7;                      // Variable to store bit position
        int iMod = 0;                      // Variable to store modified value
        int iResult = 0;                   // Variable to store result

        iMask = iMask << (iPos - 1);       // Shift mask to the 7th bit position
        
        iResult = iNo ^ iMask;             // Perform operation
        
        if(iResult != iMask)               // check condition
        {
            iMod = iNo - iMask;
        }
        return iMod;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Application to off 7th bit & if bit is on modify number
//
////////////////////////////////////////////////////////////////////////////////////////////////

class A46_ModifyBit
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);  // Scanner object   

        int iValue = 0;                     // Variable to store input        
        int iRet = 0;                       // Variable to store return value of function

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Bitwise bObj = new Bitwise();       //  Bitwise class object
        iRet = bObj.ModifyBit(iValue);      // Function call

        System.out.println("Modified value is : " + iRet);

        sobj.close();
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input   :   79
//  Output  :   15
//
//////////////////////////////////////////////////////////////////////////////////////////////// {
