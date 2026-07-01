// Write a program which checks whether 15th bit is On or Off

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
//  Description     :   To check 15th bit is on or off
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
        int iMask = 0x1;                    // Create a mask with only 1st bit on
        int iPos = 15;                      // Variable to store bit position
        int iResult = 0;                    // Variable to store result

        iMask = iMask << (iPos - 1);        // Shift mask to the 15th bit position

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
//  Application to display 15th bit is On or Off
//
////////////////////////////////////////////////////////////////////////////////////////////////

class A41_BitOnOff
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
//  Input   :   16387
//  Output  :   ON
//
//  Input   :   8193
//  Output  :   OFF
//
////////////////////////////////////////////////////////////////////////////////////////////////