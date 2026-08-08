// Write a program to accept two filename from user and check whether that file is regular file or not.

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Import required package
//
////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.File;

////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Application to check whether that file is regular file or not.
//
////////////////////////////////////////////////////////////////////////////////////////////////

class A67_FileIO
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);                  // Scanner object to take input

        String Filename;                                        // Variable to store name of file

        System.out.println("Enter Filename : ");
        Filename = sobj.nextLine();

        File f = new File(Filename);                            // File object

        if(!f.exists())
        {
            System.out.println("File not found.");
            return;
        }

        if(f.isFile())
        {
            System.out.println("It is a regular file.");
        }
        else
        {
            System.out.println("It is not a regular file.");
        }

        sobj.close();
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input   :   A.txt
//  Output  :   Regular file
//
//////////////////////////////////////////////////////////////////////////////////////////////// 