// Accept one number & two positions from user and range of positions.
// Toggle all bits from that range

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Import required package
//
////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class name      :   Bitwise
//  Function name   :   ToggleRange
//  Input           :   int, int, int
//  Output          :   int
//  Description     :   To toggle bits between range
//  Date            :   01/07/2026
//  Author          :   Aishwarya Mohan Jadhav
//
////////////////////////////////////////////////////////////////////////////////////////////////

class Bitwise
{
    public int ToggleRange(
                            int iNo,            // Parameter to accept first input
                            int istart,         // Parameter to accept second input
                            int iEnd            // Parameter to accept third input    
                          ) 
    {
        int iMask = 0;                          // Variable to store combine mask
        int iResult = 0;                        // Variable to store result
        int iCnt = 0;                           // Loop counter

        for(iCnt = istart; iCnt <= iEnd; iCnt++)
        {
            iMask = iMask | (1 << (iCnt - 1));  // Creates mask in range
        }

        iResult = iNo ^ iMask;                  // Perform operation

        return iResult;   
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Application to toggle & display bits between range
//
////////////////////////////////////////////////////////////////////////////////////////////////

class A60_ToggleRange
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);  // Scanner object
        
        int iValue = 0;                         // Variable to store input 
        int iRange1 = 0;                        // Variable to store position         
        int iRange2 = 0;                        // Variable to store position         
        int iRet = 0;                           // Variable to store return value of function

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter start of range : ");
        iRange1 = sobj.nextInt();

        System.out.println("Enter end of range: ");
        iRange2 = sobj.nextInt();

        Bitwise bObj = new Bitwise();           // Bitwise class object
        iRet = bObj.ToggleRange(iValue, iRange1, iRange2); // Function call

        System.out.println("Value after Toggle : " + iRet);

        sobj.close();
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input   :   897
//  Output  :   7297
//
//////////////////////////////////////////////////////////////////////////////////////////////// 