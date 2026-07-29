// Input : 7
// Output : 1 * 3 * 5 * 7 

import java.util.*;

class program176
{
    static void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.print("*\t");
            }
            else
            {
                System.out.print(iCnt + "\t");
            }
        }
        System.out.print("\n");
    }

    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter number : ");
        iValue = sObj.nextInt();

        Display(iValue);

        sObj.close();
    }
}