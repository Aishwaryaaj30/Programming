// Write a program to accept filename from user and open that file in write mode and
// write some data at the end of file

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Import required package
//
////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Application to open a file and write data
//
////////////////////////////////////////////////////////////////////////////////////////////////

class A63_FileIO
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);                  // Scanner object to take input

        String Filename;                                        // Variable to store name of file
        String str;

        System.out.println("Enter Filename to open : ");
        Filename = sobj.nextLine();

        FileOutputStream fout = new FileOutputStream(Filename, true);   // Open file in append mode

        System.out.println("Enter text : ");
        str = sobj.nextLine();

        byte buffer[] = str.getBytes();

        fout.write(buffer, 0, str.length()); 
        
        fout.close();                                           // Closes file after reading
        sobj.close();

        System.out.println("Data Added successfully.");
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input   :   A.txt
//  Output  :   Data Added successfully. 
//
//////////////////////////////////////////////////////////////////////////////////////////////// 