// Input : 7
// Output : A b C d E f G 

import java.util.*;

class program187
{
    static void Display(int iNo)
    {
        int iCnt = 0;
        char ch1 = '\0';
        char ch2 = '\0';

        for(iCnt = 1, ch1 = 'A', ch2 = 'a'; iCnt <= iNo; iCnt++, ch1++, ch2++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.print(ch2 + "\t");
            }
            else
            {
                System.out.print(ch1 + "\t");
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