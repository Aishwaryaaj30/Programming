// Write a program to accept filename from user and open that file.

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Import required package
//
////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.File;

////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Application to open a file
//
////////////////////////////////////////////////////////////////////////////////////////////////

class A61_FileIO
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);                  // Scanner object to take input

        String Filename;                                        // Variable to store name of file

        System.out.println("Enter Filename to open : ");
        Filename = sobj.nextLine();

        File f = new File(Filename);                            // File object

        if(f.exists())
        {
            System.out.println("File opened Successfully.");
        }
        else
        {
            System.out.println("File not found.");
        }

        sobj.close();
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input   :   A.txt
//  Output  :   File opened Successfully.
//
//////////////////////////////////////////////////////////////////////////////////////////////// 