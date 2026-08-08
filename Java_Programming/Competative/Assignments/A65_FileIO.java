// Write a program to accept directory name from user and display aa names of files.

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Import required package
//
////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Application to display all names of file from that directory.
//
////////////////////////////////////////////////////////////////////////////////////////////////

class A65_FileIO
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);                  // Scanner object to take input

        String DirectoryName;                                   // Variable to store name of file
        int iCnt = 0;                                           // Loop Counter

        System.out.println("Enter Directory name : ");
        DirectoryName = sobj.nextLine();

        File dir = new File(DirectoryName);                     // File Object
        
        if(dir.isDirectory())                                   // Checks if it is Directory
        {
            String files[] = dir.list();

            System.out.println("Files in directory are :");

            for(iCnt = 0; iCnt < files.length; iCnt++)
            {
                System.out.println(files[iCnt]);
            }
        }
        else
        {
            System.out.println("Directory does not exists.");
        }

        sobj.close();
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input   :   ABC
//  Output  :   A.txt
//              B.txt
//
//  Input   :   ABCD
//  Output  :   Directory does not exists. 
//
//////////////////////////////////////////////////////////////////////////////////////////////// 