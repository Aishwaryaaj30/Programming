/*
 Accept character from user. If character is capital then display 
 all the characters from the input character till Z.
 If input is small then print all the characters in reverse order 
 till a. In other case return directly.
 
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
//  Function name : Display
//  Input         : char
//  Output        : -
//  Description   : Print character sequence
//  Date          : 21/06/2026
//  Author        : Aishwarya Mohan Jadhav
//
///////////////////////////////////////////////////////////

class Alphabet
{
    void Display(
                    char cValue         // variable to accept input
                )
    {   
        char iCnt = 0;                  // Loop Counter

        if(cValue >= 'A' && cValue <= 'Z')
        {
            for(iCnt = cValue; iCnt <= 'Z'; iCnt++)
            {
                System.out.println(iCnt);
            }
        }
        else if(cValue >= 'a' && cValue <= 'z')
        {
            for(iCnt = cValue; iCnt >= 'a'; iCnt--)
            {
                System.out.println(iCnt);  
            }   
        }
        else
        {
            return;
        }
    }
}

///////////////////////////////////////////////////////////
//
//  Application to print character sequence
//
///////////////////////////////////////////////////////////

class A33_DisplayCharacter
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);          // Object of scanner

        char cValue = '\0';                             // variable to Store input

        System.out.println("Enter the character : ");
        cValue = sobj.nextLine().charAt(0);

        Alphabet aObj = new Alphabet();                 // Object of function
        aObj.Display(cValue);                           // function Call

        sobj.close();
    }
}

///////////////////////////////////////////////////////////
//
//  Input  :    Q
//  Output :    Q R S T U V W X Y Z
//
//  Input  :    m
//  Output :    m l k j i h g f e d c b a
//
//  Input  :    5
//  Output :    -
//
///////////////////////////////////////////////////////////