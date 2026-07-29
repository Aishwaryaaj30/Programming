import java.util.*;

class program142
{
    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);
        
        int iCnt = 0;

        System.out.println("Enter the number of elements : ");
        int iLength = sObj.nextInt();

        int Brr[] = new int[iLength];

        System.out.println("Enter the elements : ");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            Brr[iCnt] = sObj.nextInt();
        }

        System.out.println("Elements of the array are : ");
        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }

        Brr = null;
        System.gc();
        
        sObj.close();
    }
}