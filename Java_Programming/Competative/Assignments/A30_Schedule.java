/*
Accept division of student from user and depends on division display exam timing.
There are 44 divisions in school as A,B,C,D.
Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM, D at 10.30 AM.
(Application should be case insensitive)   
*/

///////////////////////////////////////////////////////////
//
//  Import required package
//
///////////////////////////////////////////////////////////

import java.util.*;

///////////////////////////////////////////////////////////
//
//  Class name    : Alphabet  
//  Function name : Displayschedule
//  Input         : char
//  Output        : boolean
//  Description   : To Display exam timing as per division
//  Date          : 20/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Alphabet
{
    void Displayschedule(
                            char cValue        // variable to accept input
                        )
    {   
        if(cValue == 'a' || cValue == 'A')
        {
            System.out.println("Your exam at 7.00 AM");
        }
        else if(cValue == 'b' || cValue == 'B')
        {
            System.out.println("Your exam at 8.30 AM");
        }
        else if(cValue == 'c' || cValue == 'C')
        {
            System.out.println("Your exam at 9.20 AM");
        }
        else if(cValue == 'd' || cValue == 'D')
        {
            System.out.println("Your exam at 10.30 AM");
        }
        else
        {
            System.out.println("Invalid Division");
        }
    }
}

///////////////////////////////////////////////////////////
//
//  Application to Display exam timing of students as per division
//
///////////////////////////////////////////////////////////

class A30_Schedule
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);          // Object of scanner

        char cValue = '\0';                             // variable to Store input

        System.out.println("Enter the character : ");
        cValue = sobj.nextLine().charAt(0);

        Alphabet aObj = new Alphabet();                 // Object of function
        aObj.Displayschedule(cValue);

        sobj.close();
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    A
//  Output :    Your exam at 7.00 AM
//
//  Input  :    d
//  Output :    Your exam at 10.30 AM
//
///////////////////////////////////////////////////////////