// Write a program to accept directory name from user and create that directory.

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Import required package
//
////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Application to create a directory
//
////////////////////////////////////////////////////////////////////////////////////////////////

class A68_FileIO
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);                  // Scanner object to take input

        String DirectoryName;                                   // Variable to store name of file
        int iCnt = 0;                                           // Loop Counter

        System.out.println("Enter Directory name : ");
        DirectoryName = sobj.nextLine();

        File dir = new File(DirectoryName);                     // File Object
        
        if(!dir.exists())
        {
            dir.mkdir();
            System.out.println("Directory created successfully.");
        }
        else
        {
           System.out.println("Directory already exists or cannot be created."); 
        }

        sobj.close();
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input   :   ABCD
//  Output  :   Directory created successfully.
//
//////////////////////////////////////////////////////////////////////////////////////////////// 