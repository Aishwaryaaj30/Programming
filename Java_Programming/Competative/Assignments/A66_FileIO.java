// Write a program to accept two filename from user and open first file and create new file and
// copy the data from first file into newly created file.

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Import required package
//
////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class name      :   FileIOX
//  Function name   :   CopyData
//  Input           :   String, String
//  Output          :   void
//  Description     :   To copy data from one file to another
//  Date            :   07/08/2026
//  Author          :   Aishwarya Mohan Jadhav
//
////////////////////////////////////////////////////////////////////////////////////////////////

class FileIOX
{
    public void CopyData(String Source, String Dest) throws Exception
    {
        FileInputStream fin = new FileInputStream(Source);
        FileOutputStream fout = new FileOutputStream(Dest);

        int ch = 0;

        while((ch = fin.read()) != -1)
        {
            fout.write(ch);
        }

        fin.close();
        fout.close();

        System.out.println("File Copied successfully.");
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Application to copy data from one file to another
//
////////////////////////////////////////////////////////////////////////////////////////////////

class A66_FileIO
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);                  // Scanner object to take input

        String Filename1;                                        // Variable to store name of file
        String Filename2;                                        // Variable to store name of file
        String str;

        System.out.println("Enter first Filename : ");
        Filename1 = sobj.nextLine();

        System.out.println("Enter second Filename : ");
        Filename2 = sobj.nextLine();
        
        FileIOX Fobj = new FileIOX();
        Fobj.CopyData(Filename1, Filename2);

        sobj.close();
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input   :   A.txt
//              B.txt
//  Output  :   File copied successfully. 
//
//////////////////////////////////////////////////////////////////////////////////////////////// 