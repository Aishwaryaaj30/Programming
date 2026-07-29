/*
    iRow = 4
    iCol = 4

    a
    a b
    a b c
    a b c d
*/

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        char ch = '\0'; 

        // filter for diagonal pattern
        if(iRow != iCol)
        {
            System.out.println("Invalid parameters");
            System.out.println("Number of rows and columns should be same");
            return;
        }

        for(i = 1; i <= iRow; i++)          
        {
            for(j = 1, ch = 'a'; j <= i; j++, ch++)
            {
                 System.out.print(ch + "\t");
            }
            System.out.println();
        }
    }
}
class program225
{
    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);
        int iValue1 = 0;
        int iValue2 = 0;

        System.out.println("Enter number of rows : ");
        iValue1 = sObj.nextInt();

        System.out.println("Enter number of rows : ");
        iValue2 = sObj.nextInt();

        Pattern pObj = new Pattern();
        pObj.Display(iValue1, iValue2);

        sObj.close();
    }
}

// Complexity : < O(n2/2)