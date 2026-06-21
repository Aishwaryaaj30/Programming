// Accept string from user and return difference between frequency 
// of small character and capital character.

///////////////////////////////////////////////////////////
//
//  Import required package
//
///////////////////////////////////////////////////////////

import java.util.*;;

///////////////////////////////////////////////////////////
//
//  Class name    : StringX  
//  Function name : CountSmall
//  Input         : String
//  Output        : int
//  Description   : To perform difference between small & capital character
//  Date          : 21/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class StringX
{
    public int Difference(
                                String str      // Variable to accept input
                         )
    {
        int iCnt = 0;                           // Loop counter
        int iCountCap = 0;                      // Variable to store count of capital character
        int iCountSmall = 0;                    // Variable to store count of small character
        int iDiff = 0;                          // Variable to store difference

        // Filter
        if(str.length() == 0)
        {
            System.out.println("Invalid input");
            return 0;
        }
        
        char Arr[] = str.toCharArray();         // Typecast String to char Array

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
            {
                iCountSmall++;
            }
            else if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                iCountCap++;
            }
        }
        iDiff = iCountSmall - iCountCap;
        return iDiff;
    }
}

///////////////////////////////////////////////////////////
//
//  Application to display count of small characters
//
///////////////////////////////////////////////////////////

class A38_Difference
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);      // Object of scanner
        String str = null;                          // Variable to accept input
        int iRet = 0;                               // variable to take return value from function

        System.out.println("Enter String : ");
        str = sobj.nextLine();

        StringX strObj = new StringX();             // Object of StringX class
        iRet = strObj.Difference(str);              // Function call

        System.out.println("Difference in character are : " + iRet);

        sobj.close();
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    MarvellouS
//  Output :    6 (8 - 2)
//
///////////////////////////////////////////////////////////