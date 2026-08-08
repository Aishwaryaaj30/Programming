// Write a program to accept directory name from user and display all names of file from that directory
// which are regular file

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Import required package
//
////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Application to display all names of file from that directory which are regular files.
//
////////////////////////////////////////////////////////////////////////////////////////////////

class A71_FileIO
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);                  // Scanner object to take input

        String DirectoryName;                                   // Variable to store name of file
        int iCnt = 0;                                           // Loop Counter

        System.out.println("Enter Directory name : ");
        DirectoryName = sobj.nextLine();

        File dir = new File(DirectoryName);                     // File Object
        
        if(dir.exists() && dir.isDirectory())                                   // Checks if it is Directory
        {
            File files[] = dir.listFiles();

            System.out.println("Regular File");

            for(File file : files)
            {
                if(file.isFile())
                {
                    System.out.println(file.getName());
                }
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
//  Input   :   ABCD
//  Output  :   A.txt  
//              B.txt   
//
//////////////////////////////////////////////////////////////////////////////////////////////// 