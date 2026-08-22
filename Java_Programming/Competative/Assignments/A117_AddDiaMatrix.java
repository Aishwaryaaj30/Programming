// Accept matrix from user and return addition of diagonal elements.

/////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Import required libraries
/// 
/////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name      :   Matrix 
// Description     :   To perform operations on Matrix
//
// Function name   :   Matrix()
// Description     :   To initialize rows, columns and create a 2D array/ matrix
// Input           :   int, int
// Output          :   none
//
// Function name   :   AcceptMatrix()
// Description     :   To accept elements of the matrix
// Input           :   none
// Output          :   none
//
// Function name   :   DisplayMatrix()
// Description     :   To display elements of the matrix
// Input           :   none
// Output          :   none
//
// Function name   :   AddDiagonals()
// Description     :   To perform addition of diagonal elements of matrix 
// Input           :   none
// Output          :   int
//
// Author          :   Aishwarya Mohan Jadhav
// Date            :   19/08/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////

class Matrix
{
    private int iRow = 0;                                 // Variable to store number of rows
    private int iCol = 0;                                 // Variable to store number of columns
    private int Arr[][];                                  // Array variable to store 2D Matrix

    public Matrix(int iRow, int iCol)                     // Parameterized constructor
    {
        this.iRow = iRow;
        this.iCol = iCol;
        this.Arr = new int[iRow][iCol];
    }

    public void AcceptMatrix()
    {
        Scanner sobj = new Scanner(System.in);            // Object of Scanner

        int i = 0;                                        // Outer Loop Counter
        int j = 0;                                        // Inner Loop Counter

        System.out.println("\nEnter elements : ");

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
               Arr[i][j] = sobj.nextInt(); 
            }
        }

        sobj.close();
    }

    public int AddDiagonals()
    {
        int iSum = 0;                                     // Variable to store sum of diagonal elements
        int i = 0;                                        // Outer Loop Counter
        int j = 0;                                        // Inner Loop Counter

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(Arr[i] == Arr[j])
                {
                    iSum = iSum + Arr[i][j];
                }
            }
        }

        return iSum;
    }

    public void DisplayMatrix()
    {
        int i = 0;                                        // Outer Loop Counter
        int j = 0;                                        // Inner Loop Counter

        System.out.println("\nMatrix is : ");
        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
               System.out.print(Arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application to display addition of diagonal elemets.
//
//////////////////////////////////////////////////////////////////////////////////////////////////

class A117_AddDiaMatrix 
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);            // Object of Scanner
        
        int iRow = 0;                                     // Variable to store number of rows
        int iCol = 0;                                     // Variable to store number of columns
        int iRet = 0;                                     // Variable to store return value of function

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);             // Object of class Matrix

        mobj.AcceptMatrix();                              // Function call
        mobj.DisplayMatrix();                             // Function call

        iRet = mobj.AddDiagonals();                       // Function call
        System.out.println("\nAddition of diagonal elements is : " + iRet);

        sobj.close();
    }    
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input   :   3 2 5 9
//              4 3 2 2
//              8 4 1 5
//              3 9 7 5
//
//  Output  :   12
//
//////////////////////////////////////////////////////////////////////////////////////////////////