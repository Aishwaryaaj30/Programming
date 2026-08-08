// Write a program to accept filename from user and create new file of that name if it is not existing.

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Import required package
//
////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Application to create a new file if not exiting
//
////////////////////////////////////////////////////////////////////////////////////////////////

class A64_FileIO
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);                  // Scanner object to take input

        String Filename;                                        // Variable to store name of file
        String str;

        System.out.println("Enter Filename to open : ");
        Filename = sobj.nextLine();

        File f = new File(Filename);
        
        if(!f.exists())
        {
            f.createNewFile();
            System.out.println("File created successfully.");
        }
        else
        {
            System.out.println("File already exists.");
        }

        sobj.close();

    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input   :   B.txt
//  Output  :   File created successfully. 
//
//  Input   :   A.txt
//  Output  :   File already exists. 
//
//////////////////////////////////////////////////////////////////////////////////////////////// 