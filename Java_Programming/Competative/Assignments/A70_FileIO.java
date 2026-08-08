// Write a program to accept directory name from user and display all names of file from that directory
// and size of each file on screen

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Import required package
//
////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Application to display all names of file and its size from that directory.
//
////////////////////////////////////////////////////////////////////////////////////////////////

class A70_FileIO
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
            File files[] = dir.listFiles();

            System.out.println("File Name\tSize(bytes) :");

            for(iCnt = 0; iCnt < files.length; iCnt++)
            {
                if(files[iCnt].isFile())
                {
                    System.out.println(files[iCnt].getName() + "\t\t" + files[iCnt].length());
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
//  Output  :   A.txt   13
//              B.txt   4
//
//////////////////////////////////////////////////////////////////////////////////////////////// 