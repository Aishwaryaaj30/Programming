// Write a program which checks whether 7th, 15th, 21st & 28th bit is On or Off

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Import required package
//
////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class name      :   Bitwise
//  Function name   :   BitOnOff
//  Input           :   int
//  Output          :   boolean
//  Description     :   To check 7th, 15th, 21st & 28th bit is on or off
//  Date            :   30/06/2026
//  Author          :   Aishwarya Mohan Jadhav
//
////////////////////////////////////////////////////////////////////////////////////////////////


class Bitwise
{
    public boolean BitOnOff(
                                int iNo     // Parameter to accept input
                           )
    {
        int iMask1 = 0x1;                   // Create a mask with only 1st bit on
        int iMask2 = 0x1;                   // Create a mask with only 1st bit on
        int iMask3 = 0x1;                   // Create a mask with only 1st bit on
        int iMask4 = 0x1;                   // Create a mask with only 1st bit on
        int iMask = 0;                      // Variable to store the combined mask

        int iPos1 = 7;                      // Variable to store bit position
        int iPos2 = 15;                     // Variable to store bit position
        int iPos3 = 21;                     // Variable to store bit position
        int iPos4 = 28;                     // Variable to store bit position

        int iResult = 0;                    // Variable to store result

        iMask1 = iMask1 << (iPos1 - 1);     // Shift mask to the 7th bit position
        iMask2 = iMask2 << (iPos2 - 1);     // Shift mask to the 15th bit position
        iMask3 = iMask3 << (iPos3 - 1);     // Shift mask to the 21th bit position
        iMask4 = iMask4 << (iPos4 - 1);     // Shift mask to the 28th bit position

        
        iMask = iMask1 | iMask2 | iMask3 | iMask4;  // Combine all mask

        iResult = iNo & iMask;              // Perform operation
        
        if(iResult == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Application to display 7th, 15th, 21st & 28th bit is On or Off
//
////////////////////////////////////////////////////////////////////////////////////////////////

class A43_BitOnOff
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);  // Scanner object   

        int iValue = 0;                     // Variable to store input        
        boolean bRet = false;               // Variable to store return value of function

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Bitwise bObj = new Bitwise();       //  Bitwise class object
        bRet = bObj.BitOnOff(iValue);       // Function call

        if(bRet == true)
        {
            System.out.println("Bit is ON");
        }
        else
        {
            System.out.println("Bit is OFF");
        }

        sobj.close();
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input   :   135282752
//  Output  :   ON
//
//  Input   :   134234176
//  Output  :   OFF
//
////////////////////////////////////////////////////////////////////////////////////////////////