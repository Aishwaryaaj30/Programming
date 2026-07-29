import java.util.*;

class ArrayX
{
    private int Arr[];
    private int iSize;

    // Default Constructor
    ArrayX()
    {
        iSize = 5;
        Arr = new int[iSize];
    }

    // Parameterized Constructor
    ArrayX(int X)
    {
        iSize = X;
        Arr = new int[iSize];
    }

    void Accept()
    {
        Scanner sObj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter the elements :");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sObj.nextInt();
        }
        sObj.close();
    }

    void Display()
    {
        int iCnt = 0;

        System.out.println("Elements of the array are :");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }

    int Summation()
    {
        int iCnt = 0, iSum = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
    }  
}

class program170
{
    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);

        int iLength = 0, iRet = 0;

        System.out.println("Enter the number of elements :");
        iLength = sObj.nextInt();

        ArrayX aObj = new ArrayX(iLength);

        aObj.Accept();
        aObj.Display();

        iRet = aObj.Summation();

        System.out.println("Summation is : " + iRet);

        System.gc();

        sObj.close();
    }

}