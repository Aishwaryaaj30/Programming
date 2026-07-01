// Accept one number from user and off 7th & 10th bit of that number if it is on.
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
//  Description     :   To off 7th & 10th bit & if bit is on modify number
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
        int iMask1 = 0x1;                  // Create a mask with only 1st bit on
        int iMask2 = 0x1;                  // Create a mask with only 1st bit on
        int iMask = 0;                     // Variable to store the combined mask
        
        int iPos1 = 7;                     // Variable to store bit position
        int iPos2 = 10;                    // Variable to store bit position
        
        int iMod = 0;                      // Variable to store modified value
        int iResult = 0;                   // Variable to store result

        iMask1 = iMask1 << (iPos1 - 1);    // Shift mask to the 7th bit position
        iMask2 = iMask2 << (iPos2 - 1);    // Shift mask to the 7th bit position
        
        iMask = iMask1 | iMask2;           // Combine both iMask1 and iMask2

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
//  Application to off 7th & 10th bit & if bit is on modify number
//
////////////////////////////////////////////////////////////////////////////////////////////////

class A47_ModifyBit
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
//  Input   :   577
//  Output  :   1
//
//////////////////////////////////////////////////////////////////////////////////////////////// {
