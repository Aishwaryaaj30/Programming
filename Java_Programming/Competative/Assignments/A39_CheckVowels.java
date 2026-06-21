// Accept string from user and check whether it contains vowels in it or not.


///////////////////////////////////////////////////////////
//
//  Import required package
//
///////////////////////////////////////////////////////////

import java.util.*;;

///////////////////////////////////////////////////////////
//
//  Class name    : StringX  
//  Function name : ChkVowels
//  Input         : String
//  Output        : boolean
//  Description   : To check vowels in string
//  Date          : 21/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class StringX
{
    public boolean ChkVowels(
                                String str      // Variable to accept input
                            )
    {
        int iCnt = 0;                           // Loop counter
        int iCountVow = 0;                      // Variable to store count of vowels
        int iCountnVow = 0;                     // Variable to store count of consonants
        char Arr[] = str.toCharArray();         // Typecast String to char Array

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == 'a' || Arr[iCnt] == 'e' || Arr[iCnt] == 'i' || Arr[iCnt] == 'o' || Arr[iCnt] == 'U' ||
               Arr[iCnt] == 'A' || Arr[iCnt] == 'E' || Arr[iCnt] == 'I' || Arr[iCnt] == 'O' || Arr[iCnt] == 'U'
              ) 
            {
                iCountVow++;
            }
            else
            {
                 iCountnVow++;
            }
        }

        if(iCountVow != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

///////////////////////////////////////////////////////////
//
//  Application to display if string contains vowels or not.
//
///////////////////////////////////////////////////////////

class A39_CheckVowels
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);      // Object of scanner
        String str = null;                          // Variable to accept input
        boolean bRet = false;                       // variable to take return value from function

        System.out.println("Enter String : ");
        str = sobj.nextLine();

        StringX strObj = new StringX();             // Object of StringX class
        bRet = strObj.ChkVowels(str);               // Function call

        if(bRet == true)
        {
            System.out.println("Contains vowel");
        }
        else
        {
            System.out.println("There is no vowel");
        }

        sobj.close();
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    Marvellous
//  Output :    True
//
//  Input  :    xyz
//  Output :    False
//
///////////////////////////////////////////////////////////