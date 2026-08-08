// Write a program to accept filename from user and open that file and display the contents.

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Import required package
//
////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.File;

////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Application to open a file and display its contents on screen 
//
////////////////////////////////////////////////////////////////////////////////////////////////

class A62_FileIO
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);                  // Scanner object to take input

        String Filename;                                        // Variable to store name of file
        
        System.out.println("Enter Filename to open : ");
        Filename = sobj.nextLine();

        File f = new File(Filename);                            // File object
        Scanner file = new Scanner(f);                          // Opens the file for reading 

        if(!f.exists())
        {
            System.out.println("File not found.");
        }

        while(file.hasNextLine())                               // Continues until the end of file
        {
            System.out.println(file.nextLine());                // Prints each line
        }
        
        file.close();                                           // Closes file after reading
        sobj.close();
        
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input   :   A.txt
//  Output  :   Jay Ganesh...
//
//////////////////////////////////////////////////////////////////////////////////////////////// 