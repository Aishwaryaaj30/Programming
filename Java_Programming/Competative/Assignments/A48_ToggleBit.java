// Accept one number from user and toggle 7th bit of that number if it is on.
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
//  Function name   :   ToggleBit
//  Input           :   int
//  Output          :   int
//  Description     :   To toggle 7th & if bit is on modify number
//  Date            :   30/06/2026
//  Author          :   Aishwarya Mohan Jadhav
//
////////////////////////////////////////////////////////////////////////////////////////////////


class Bitwise
{
    public int ToggleBit(
                            int iNo        // Parameter to accept input
                        )
    {
        int iMask = 0x1;                   // Create a mask with only 1st bit on        
        int iPos = 7;                      // Variable to store bit position
        int iResult = 0;                   // Variable to store result

        iMask = iMask << (iPos - 1);       // Shift mask to the 7th bit position
        
        iResult = iNo ^ iMask;             // Perform operation to toggle
        
        return iResult;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Application to toggle 7th bit & if bit is on modify number
//
////////////////////////////////////////////////////////////////////////////////////////////////

class A48_ToggleBit
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);  // Scanner object   

        int iValue = 0;                     // Variable to store input        
        int iRet = 0;                       // Variable to store return value of function

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Bitwise bObj = new Bitwise();       //  Bitwise class object
        iRet = bObj.ToggleBit(iValue);      // Function call

        System.out.println("Modified value is : " + iRet);

        sobj.close();
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input   :   137
//  Output  :   201
//
//  Input   :   713
//  Output  :   649
//
//////////////////////////////////////////////////////////////////////////////////////////////// {
