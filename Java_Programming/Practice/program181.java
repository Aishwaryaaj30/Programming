// Input : 7
// Output : A B C D E F G 

import java.util.*;

class program181
{
    static void Display(int iNo)
    {
        int iCnt = 0;
        char ch = '\0';

        for(iCnt = 1, ch = 97; iCnt <= iNo; iCnt++, ch++)
        {
            System.out.print(ch + "\t");
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