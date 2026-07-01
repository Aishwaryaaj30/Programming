// Accept one number and position from user and toggle that bit, return modified number.

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Import required package
//
////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class name      :   Bitwise
//  Function name   :   ToggleBit
//  Input           :   int, int
//  Output          :   boolean
//  Description     :   To toggle bit
//  Date            :   30/06/2026
//  Author          :   Aishwarya Mohan Jadhav
//
////////////////////////////////////////////////////////////////////////////////////////////////

class Bitwise
{
    public int ToggleBit(
                            int iNo,            // Parameter to accept first input
                            int iPos            // Parameter to accept second input
                        )
    {
        int iMask = 0x1;                        // Variable to store a mask
        int iResult = 0;                        // Variable to store result

        iMask = iMask << (iPos - 1);            // Create a mask

        iResult = iNo ^ iMask;                  // Perform operation

        return iResult;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Application to toggle bit
//
////////////////////////////////////////////////////////////////////////////////////////////////

class A54_ToggleBit
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);  // Scanner object 
        
        int iValue = 0;                         // Variable to store input  
        int iLocation = 0;                      // Variable to store input
        int iRet = 0;                           // Variable to store return value of function

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter position of bit : ");
        iLocation = sobj.nextInt();

        Bitwise bObj = new Bitwise();           // Bitwise class object
        iRet = bObj.ToggleBit(iValue, iLocation);  // Function call

        System.out.println("Modified value is : " + iRet);

        sobj.close();
    }
    
}
////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input   :   10
//              3
//  Output  :   14
//
//////////////////////////////////////////////////////////////////////////////////////////////// 