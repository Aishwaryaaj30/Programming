// Accept matrix from user and display transpose of the matrix

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
// Function name   :   Frequency()
// Description     :   To return frequency of given number. 
// Input           :   int
// Output          :   int
//
// Function name   :   MaxDiagonal()
// Description     :   To return largest number from both diagonals
// Input           :   none
// Output          :   int
//
// Function name   :   AddColumn()
// Description     :   To perform addition of elements from each column
// Input           :   none
// Output          :   int
//
// Function name   :   SwapRows()
// Description     :   To swap the contents of consecutive rows.
// Input           :   none
// Output          :   int
//
// Function name   :   TransposeMatrix()
// Description     :   To transpose the matrix
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

    public int Frequency(int iFreq)
    {
        int iCount = 0;                                   // Variable to store frequency of number
        int i = 0;                                        // Outer Loop Counter
        int j = 0;                                        // Inner Loop Counter

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(Arr[i][j] == iFreq)
                {
                    iCount++;
                }
            }
        }

        return iCount;
    }

    public int MaxDiagonal()
    {
        int i = 0;                                        // Outer Loop Counter
        int j = 0;                                        // Inner Loop Counter
        int iMax = Arr[0][0];                             // Variable to store maximum diagonal

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(Arr[i] == Arr[j] && Arr[i][j] > iMax)  // Left to right diagonal
                {
                    iMax = Arr[i][j];
                }

                if(Arr[i][iCol - i - 1] > iMax)           // Right to left diagonal
                {
                    iMax = Arr[i][iCol - i - 1];
                }
            }
        }

        return iMax;
    }

    public int[] AddColumn()
    {
        int i = 0;                                        // Outer Loop Counter
        int j = 0;                                        // Inner Loop Counter
        int iSum[];                                       // Variable to store sum of all columns

        iSum = new int[iCol];

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                iSum[j] = iSum[j] + Arr[i][j];
            }
        }

        return iSum;
    }

    public void SwapRows()
    {
        int i = 0;                                        // Outer Loop Counter
        int j = 0;                                        // Inner Loop Counter
        int iTemp = 0;

        for(i = 0; i < iRow-1; i = i+2)
        {
            for(j = 0; j < iCol; j++)
            {
                iTemp = Arr[i][j];
                Arr[i][j] = Arr[i+1][j];
                Arr[i+1][j] = iTemp;
            }
        }
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

    public void TransposeMatrix()
    {
        int i = 0;
        int j = 0;

        int Transpose[][] = new int[iCol][iRow];

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                Transpose[j][i] = Arr[i][j];
            }
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application to display transpose of matrix
//
//////////////////////////////////////////////////////////////////////////////////////////////////

class A122_TransposeMatrix
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);            // Object of Scanner
        
        int iRow = 0;                                     // Variable to store number of rows
        int iCol = 0;                                     // Variable to store number of columns
        int iRet[];                                     // Variable to store return value of function

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);             // Object of class Matrix

        mobj.AcceptMatrix();                              // Function call
        mobj.DisplayMatrix();                             // Function call

        System.out.println("\nTranspose of matrix is : ");

        mobj.TransposeMatrix();
        mobj.DisplayMatrix();

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
//  Output  :   3 4 8 3
//              2 3 4 9
//              5 2 1 7
//              9 2 9 5
//
//////////////////////////////////////////////////////////////////////////////////////////////////