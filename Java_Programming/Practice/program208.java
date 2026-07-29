/*
    iRow = 4
    iCol = 4

    a b c d
    1 2 3 4
    a b c d
    1 2 3 4
*/

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        int iCount = 0;
        for(i = 1, iCount = iRow; i <= iRow; i++, iCount--)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print(iCount + "\t");
            }
            System.out.println();
        }
    }
}
class program208
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