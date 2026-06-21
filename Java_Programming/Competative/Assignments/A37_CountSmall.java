// Accept string from user and count number of small characters

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
//  Description   : To count small characters in string 
//  Date          : 21/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class StringX
{
    public int CountSmall(
                                String str      // Variable to accept input
                         )
    {
        int iCnt = 0;                           // Loop counter
        int iCount = 0;                         // Variable to store count

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
                iCount++;
            }
        }
        return iCount;
    }
}

///////////////////////////////////////////////////////////
//
//  Application to display count of small characters
//
///////////////////////////////////////////////////////////

class A37_CountSmall
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);      // Object of scanner
        String str = null;                          // Variable to accept input
        int iRet = 0;                               // variable to take return value from function

        System.out.println("Enter String : ");
        str = sobj.nextLine();

        StringX strObj = new StringX();             // Object of StringX class
        iRet = strObj.CountSmall(str);              // Function call

        System.out.println("Number of capital characters are : " + iRet);

        sobj.close();
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    Marvellous
//  Output :    9
//
///////////////////////////////////////////////////////////