// Accept one number from user and check whether 9th or 12th bit is on or off.

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Import required package
//
////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class name      :   Bitwise
//  Function name   :   CheckBit
//  Input           :   int
//  Output          :   boolean
//  Description     :   To check 9th or 12th bit is on or off
//  Date            :   01/07/2026
//  Author          :   Aishwarya Mohan Jadhav
//
////////////////////////////////////////////////////////////////////////////////////////////////

class Bitwise
{
    public boolean BitOnOff(
                            int iNo             // Parameter to accept first input
                           )
    {
        int iMask1 = 0x1;                       // Create a mask with only 1st bit on 
        int iMask2 = 0x1;                       // Create a mask with only 1st bit on 
        int iMask = 0;                          // Variable to store combine mask

        int iResult = 0;                        // Variable to store result
        
        iMask1 = iMask1 << (9 - 1);             // Shift mask to the 9th bit position
        iMask2 = iMask2 << (12 - 1);            // Shift mask to the 12th bit position
        iMask = iMask1 | iMask2;                // Combine all mask

        iResult = iNo & iMask;                  // Perform operation

        if(iResult != 0)                        // check condition
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
//  Application to check and display 9th or 12th bit is on or off
// 
////////////////////////////////////////////////////////////////////////////////////////////////

class A58_BitOnOff
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);  // Scanner object
        
        int iValue1 = 0;                        // Variable to store input 
        boolean bRet = false;                   // Variable to store return value of function

        System.out.println("Enter number : ");
        iValue1 = sobj.nextInt();

        Bitwise bObj = new Bitwise();           // Bitwise class object
        bRet = bObj.BitOnOff(iValue1);          // Function call

        if(bRet == true)
        {
            System.out.println("Bit is On");
        }
        else
        {
            System.out.println("Bit is Off");
        }

        sobj.close();
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input   :   257
//  Output  :   ON
//
//////////////////////////////////////////////////////////////////////////////////////////////// 
