// Write a program to display the grade of student based on marks.

///////////////////////////////////////////////////////////
//
//  Class name    : Logic  
//  Function name : DisplayGrade
//  Input         : int
//  Output        : void
//  Description   : To display the grade of student based on marks.
//  Date          : 09/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Logic
{
    void DisplayGrade(
                        int iMarks         // variable to take input
                     )
    {
        if(iMarks >= 75)
        {
            System.out.println("Distinction");
        }
        else if(iMarks >= 65 && iMarks < 75)
        {
            System.out.println("First Class");
        }
        else if(iMarks >= 55 && iMarks < 65)
        {
            System.out.println("Second Class");
        }
        else if(iMarks >= 40 && iMarks < 55)
        {
            System.out.println("Pass Class");
        }
        else if(iMarks < 40)
        {
            System.out.println("Fail");
        }
        else
        {
            System.out.println("Invalid marks");
        }
    }
}

///////////////////////////////////////////////////////////
//
//  Application to display the grade of student based on marks.
//
///////////////////////////////////////////////////////////

class A12_Grade
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();                      // Object of Function Logic
        lObj.DisplayGrade(82);                 // Call
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    82
//  Output :    Distinction
//
///////////////////////////////////////////////////////////