/*
Write a program which displays ASCII table.Table contains symbol, 
Hexadecimal and octal representation of every member from 0 to 255
*/

/////////////////////////////////////////////////////////////////////////////
//
//  Class name    : ASCII  
//  Function name : Display
//  Input         : -
//  Output        : -
//  Description   : To Display ASCII Table
//  Date          : 20/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
/////////////////////////////////////////////////////////////////////////////

class ASCII
{
    void Display()                
    {   
        int i = 0;          // Loop counter

        System.out.println("---------------------------------------------");
        System.out.print("Dec\tHex\tOctal\tSym\n");
        System.out.println("---------------------------------------------");

        for(i = 0; i <= 225; i++)
        {
            System.out.println(i + "\t" + Integer.toHexString(i) + "\t" + 
                               Integer.toOctalString(i) + "\t" + (char)i);
        }

        System.out.println("--------------------------------------------");
    }
}

/////////////////////////////////////////////////////////////////////////////
//
//  Application to Display ACSII Table
//
/////////////////////////////////////////////////////////////////////////////
class A31_ASCIITable
{
    public static void main(String A[])
    {
        ASCII aObj = new ASCII();                 // Object of function
        aObj.Display();
    }
}

/////////////////////////////////////////////////////////////////////////////
//
//  Input  :    -
//  Output :    -
//
/////////////////////////////////////////////////////////////////////////////