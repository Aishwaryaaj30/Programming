// Input : 7
// Output : 1 * 2 * 3 * 4  

import java.util.*;

class program177
{
    static void Display(int iNo)
    {
        int iCnt = 0;
        int iCount = 1;

        for(iCnt = 1, iCount = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.print("*\t");
            }
            else
            {
                System.out.print(iCount + "\t");
                iCount++;
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