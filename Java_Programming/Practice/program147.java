import java.util.Scanner;

class ArrayX
{
    public void Update(int Arr[])
    {
       int iCnt = 0;

       for(iCnt = 0; iCnt < Arr.length; iCnt++)
       {
        Arr[iCnt]++;
       }
    }
}

class program147
{
    public static void main(String A[])
    {
        int iCnt = 0;

        Scanner sObj = new Scanner(System.in);

        System.out.println("Enter the number of elements : ");
        int iLength = sObj.nextInt();

        int Brr[] = new int[iLength];

        System.out.println("Enter the elements : ");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            Brr[iCnt] = sObj.nextInt();
        }

        System.out.println("Array elements before function call :");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }

        ArrayX aObj = new ArrayX();
        aObj.Update(Brr);

        System.out.println("Array elements after function call :");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }

        sObj.close();
    }
}