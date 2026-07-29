// Output : * * * *
//          * * * *  
//          * * * *   

import java.util.*;

class program190
{
    static void Display()
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= 4; iCnt++)
        {
            System.out.print("*\t");
        }

        System.out.println();

        for(iCnt = 1; iCnt <= 4; iCnt++)
        {
            System.out.print("*\t");
        }

        System.out.println();

        for(iCnt = 1; iCnt <= 4; iCnt++)
        {
            System.out.print("*\t");
        }

        System.out.println();
    }

    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);

        //System.out.println("Enter number : ");
        //iValue = sObj.nextInt();

        Display();

        sObj.close();
    }
}