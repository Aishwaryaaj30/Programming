// Accept one number & two positions from user and 
// check whether bit at first or bit at second position is On & Off

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
//  Input           :   int, int, int
//  Output          :   boolean
//  Description     :   To check 1st or 2nd bit position is ON or OFF
//  Date            :   01/07/2026
//  Author          :   Aishwarya Mohan Jadhav
//
////////////////////////////////////////////////////////////////////////////////////////////////

class Bitwise
{
    public boolean CheckBit(
                            int iNo,            // Parameter to accept first input
                            int ipos1,          // Parameter to accept second input
                            int ipos2           // Parameter to accept third input    
                           ) 
    {
        int iMask1 = 0x1;                       // Create a mask with only 1st bit on 
        int iMask2 = 0x1;                       // Create a mask with only 1st bit on 
        int iMask = 0;                          // Variable to store combine mask
        
        int iResult = 0;                        // Variable to store result

        iMask1 = iMask1 << (ipos1 - 1);         // Shift mask to the bit position
        iMask2 = iMask2 << (ipos2 - 1);         // Shift mask to the bit position
        iMask = iMask1 | iMask2;                // Combine all mask

        iResult = iNo & iMask;                  // Perform operation

        if(iResult != 0)
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
//  Application to check & display 1st or 2nd bit position is ON or OFF
//
////////////////////////////////////////////////////////////////////////////////////////////////

class A59_CheckBit
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);  // Scanner object
        
        int iValue1 = 0;                        // Variable to store input 
        int iLocation1 = 0;                     // Variable to store position         
        int iLocation2 = 0;                     // Variable to store position         
        boolean bRet = false;                   // Variable to store return value of function

        System.out.println("Enter first number : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter bit position 1 : ");
        iLocation1 = sobj.nextInt();

        System.out.println("Enter bit position 2 : ");
        iLocation2 = sobj.nextInt();

        Bitwise bObj = new Bitwise();           // Bitwise class object
        bRet = bObj.CheckBit(iValue1, iLocation1, iLocation2); // Function call

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
//  Input   :   10  3   7
//  Output  :   Off
//
//  Input   :   10  2   7
//  Output  :   On
//
//////////////////////////////////////////////////////////////////////////////////////////////// 