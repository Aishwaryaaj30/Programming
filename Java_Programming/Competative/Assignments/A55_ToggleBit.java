// Accept one number from user and toggle contents of first and last nibble of the number.
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
//  Description     :   To toggle first & last nibble & modify number
//  Date            :   30/06/2026
//  Author          :   Aishwarya Mohan Jadhav
//
////////////////////////////////////////////////////////////////////////////////////////////////

class Bitwise
{
    public int ToggleBit(
                            int iNo            // Parameter to accept input
                        )
    {
        int iMask = 0xF000000F;                // Create a mask        
        int iResult = 0;                       // Variable to store result

        iResult = iNo ^ iMask;                 // Perform operation 
        
        return iResult;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Application to toggle first & last nibble & modify number
//
////////////////////////////////////////////////////////////////////////////////////////////////

class A55_ToggleBit
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);  // Scanner object   

        int iValue = 0;                         // Variable to store input        
        int iRet = 0;                           // Variable to store return value of function

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Bitwise bObj = new Bitwise();           // Bitwise class object
        iRet = bObj.ToggleBit(iValue);          // Function call

        System.out.println("Modified value is : " + iRet);

        sobj.close();
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input   :   -268435441
//  Output  :   0
//
//////////////////////////////////////////////////////////////////////////////////////////////// 
