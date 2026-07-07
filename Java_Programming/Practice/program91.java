import java.util.Scanner;

class DigitX
{
    public int SumDigits(int iNo)
    {
        int iSum = 0;
        

        while(iNo != 0)
        { 
            iSum = iSum + (iNo % 10);
            iNo = iNo / 10;
            
        }
        return iSum;
    }
}

class program91
{
    public static void main(String A[]) 
    {
        Scanner sObj = new Scanner(System.in);
        DigitX dObj = new DigitX();

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iValue = sObj.nextInt();

        iRet = dObj.SumDigits(iValue);

        System.out.println("Summation of digits is : " + iRet);

        sObj.close();
    }
}