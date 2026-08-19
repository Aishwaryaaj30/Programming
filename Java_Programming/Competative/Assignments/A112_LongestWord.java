/////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Import required libraries
/// 
/////////////////////////////////////////////////////////////////////////////////////////////////
 
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function name   :   longestWord
/// Description     :   Identify the word having maximum length.
/// Input           :   String
/// Output          :   String
/// Author          :   Aishwarya Mohan Jadhav
/// Date            :   19/08/2026
/// 
/////////////////////////////////////////////////////////////////////////////////////////////////

class StringX
{
    public String longestWord(String str)
    {
        int i = 0;
        String iMax = "";

        str = str.trim();
        str = str.replaceAll("\\s+"," ");
        String Tokens[] = str.split(" ");

        iMax = Tokens[0];

        for(i = 0; i < Tokens.length; i++)
        {
            if(Tokens[i].length() > iMax.length())
            {
                iMax = Tokens[i];
            }
        }
        return iMax;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function to identify the word having maximum length.
//
//////////////////////////////////////////////////////////////////////////////////////////////////

class  A112_LongestWord
{
    public static void main(String A[])   
    {
        Scanner sObj = new Scanner(System.in);
        StringX strObj = new StringX();
        String strRet = "";

        System.out.println("Enter string : ");
        String str = sObj.nextLine();

        strRet = strObj.longestWord(str);

        System.out.println("Longest word is : " + strRet);

        sObj.close();
    } 
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input   :   India is my country
//  Output  :   country
//
//////////////////////////////////////////////////////////////////////////////////////////////////