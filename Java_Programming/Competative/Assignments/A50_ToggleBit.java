// Accept one number from user and on its first 4 bits, return modified number.

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Import required package
//
////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class name      :   Bitwise
//  Function name   :   OnBit
//  Input           :   int
//  Output          :   int
//  Description     :   To on first 4 bits & modify number
//  Date            :   30/06/2026
//  Author          :   Aishwarya Mohan Jadhav
//
////////////////////////////////////////////////////////////////////////////////////////////////


class Bitwise
{
    public int OnBit(
                        int iNo            // Parameter to accept input
                    )
    {
        int iMask = 0x0000000F;            // Create a mask        
        int iResult = 0;                   // Variable to store result

        iResult = iNo | iMask;             // Perform operation 
        
        return iResult;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Application to on first 4 bits & modify number
//
////////////////////////////////////////////////////////////////////////////////////////////////

class A50_ToggleBit
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);  // Scanner object   

        int iValue = 0;                     // Variable to store input        
        int iRet = 0;                       // Variable to store return value of function

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Bitwise bObj = new Bitwise();       // Bitwise class object
        iRet = bObj.OnBit(iValue);          // Function call

        System.out.println("Modified value is : " + iRet);

        sobj.close();
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input   :   73
//  Output  :   79
//
//////////////////////////////////////////////////////////////////////////////////////////////// 
