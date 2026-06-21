// Accept string from user and display it in reverse order

///////////////////////////////////////////////////////////
//
//  Import required package
//
///////////////////////////////////////////////////////////

import java.util.*;;

///////////////////////////////////////////////////////////
//
//  Class name    : StringX  
//  Function name : RevString
//  Input         : String
//  Output        : boolean
//  Description   : To reverse the string
//  Date          : 21/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class StringX
{
    public void RevString(
                                String str      // Variable to accept input
                         )
    {
        int iCnt = 0;                           // Loop counter
        char Arr[] = str.toCharArray();         // Typecast String to char Array

        for(iCnt = Arr.length - 1 ; iCnt >= 0; iCnt-- )
        {
            System.out.print(Arr[iCnt]);
        }

        System.out.println();
    }
}

///////////////////////////////////////////////////////////
//
//  Application to display reverse string
//
///////////////////////////////////////////////////////////

class A40_ReverseString
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);      // Object of scanner
        String str = null;                          // Variable to accept input

        System.out.println("Enter String : ");
        str = sobj.nextLine();

        StringX strObj = new StringX();             // Object of StringX class
        strObj.RevString(str);                      // Function call

        
        sobj.close();
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    Marvellous
//  Output :    suollevraM
//
///////////////////////////////////////////////////////////