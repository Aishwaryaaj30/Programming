// Accept one number and position from user and check whether bit is ON or OFF.

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Import required package
//
////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class name      :   Bitwise
//  Function name   :   ChkBit
//  Input           :   int, int
//  Output          :   boolean
//  Description     :   To check bit is On or Off
//  Date            :   30/06/2026
//  Author          :   Aishwarya Mohan Jadhav
//
////////////////////////////////////////////////////////////////////////////////////////////////

class Bitwise
{
    public Boolean ChkBit(
                            int iNo,            // Parameter to accept first input
                            int iPos            // Parameter to accept second input
                        )
    {
        int iMask = 0;                          // Variable to store a mask
        int iResult = 0;                        // Variable to store result

        iMask = iMask << (iPos - 1);            // Create a mask

        iResult = iNo & iMask;                  // Perform operation

        if(iResult == iMask)                    // Check condition
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
//  Application to check bit is On or Off
//
////////////////////////////////////////////////////////////////////////////////////////////////

class A51_CheckBit 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);  // Scanner object 
        
        int iValue = 0;                         // Variable to store input  
        int iLocation = 0;                      // Variable to store input
        boolean bRet = false;                   // Variable to store return value of function

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter position of bit : ");
        iLocation = sobj.nextInt();

        Bitwise bObj = new Bitwise();           // Bitwise class object
        bRet = bObj.ChkBit(iValue, iLocation);  // Function call

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
//  Input   :   10
//              2
//  Output  :   ON
//
//////////////////////////////////////////////////////////////////////////////////////////////// 