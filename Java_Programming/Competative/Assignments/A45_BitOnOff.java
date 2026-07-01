// Write a program which checks whether 1st & 32th bit is On or Off

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
//  Description     :   To check 1st & 32th bit is on or off
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
        int iMask = 0;                      // Variable to store the combined mask

        int iPos1 = 1;                      // Variable to store bit position
        int iPos2 = 32;                     // Variable to store bit position

        int iResult = 0;                    // Variable to store result

        iMask1 = iMask1 << (iPos1 - 1);     // Shift mask to the 1st bit position
        iMask2 = iMask2 << (iPos2 - 1);     // Shift mask to the 32nd bit position
        
        iMask = iMask1 | iMask2;            // Combine both iMask1 and iMask2

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
//  Application to display 1st & 32thbit is On or Off
//
////////////////////////////////////////////////////////////////////////////////////////////////

class A45_BitOnOff
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
//  Input   :   -2147483647
//  Output  :   ON
//
//  Input   :   1
//  Output  :   OFF
//
////////////////////////////////////////////////////////////////////////////////////////////////