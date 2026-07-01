// Accept two number from user and display position of common ON bits.

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Import required package
//
////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class name      :   Bitwise
//  Function name   :   CommonBit
//  Input           :   int, int
//  Output          :   void
//  Description     :   To display position of common ON bits.
//  Date            :   01/07/2026
//  Author          :   Aishwarya Mohan Jadhav
//
////////////////////////////////////////////////////////////////////////////////////////////////

class Bitwise
{
    public void CommonBit(
                            int iNo1,           // Parameter to accept first input
                            int iNo2            // Parameter to accept second input
                        ) 
    {
        int iPos = 1;                           // Variable to store position
        int iResult = 0;                        // Variable to store result

        iResult = iNo1 & iNo2;                  // Perform operation

        while(iResult != 0)
        {
            if((iResult & 1) == 1)
            {
                System.out.print(iPos + "\t");
            }
            iResult = iResult >> 1;
            iPos++;
        }
        System.out.println();
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Application to display position of common ON bits.
//
////////////////////////////////////////////////////////////////////////////////////////////////

class A57_CommonBit
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);  // Scanner object
        
        int iValue1 = 0;                        // Variable to store input 
        int iValue2 = 0;                        // Variable to store input         

        System.out.println("Enter first number : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        iValue2 = sobj.nextInt();

        Bitwise bObj = new Bitwise();           // Bitwise class object
        bObj.CommonBit(iValue1, iValue2);       // Function call

        sobj.close();
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input   :   10  15
//  Output  :   2   4
//
//////////////////////////////////////////////////////////////////////////////////////////////// 