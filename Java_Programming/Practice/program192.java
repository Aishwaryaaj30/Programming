// Output : * * * *
//          * * * *  
//          * * * *   

import java.util.*;

class program192
{
    static void Display(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
    }

    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);
        int iValue1 = 0;
        int iValue2 = 0;

        System.out.println("Enter number of rows : ");
        iValue1 = sObj.nextInt();

        System.out.println("Enter number of columns : ");
        iValue2 = sObj.nextInt();

        Display(iValue1, iValue2);

        sObj.close();
    }
}