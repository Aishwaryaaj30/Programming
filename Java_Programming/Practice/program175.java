// Input : 5
// Output : *1* *2* *3* *4* *5* 

import java.util.*;

class program175
{
    static void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.print("*" + iCnt+ "*\t");
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