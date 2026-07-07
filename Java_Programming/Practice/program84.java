import java.util.Scanner;

class DigitX
{
    public int CountDigits(int iNo)
    {
        int iCount = 0;

        while(iNo != 0)
        {
            iCount = iCount + 1; 
            iNo = iNo / 10;
            
        }
        return iCount;
    }
}

class program84
{
    public static void main(String A[]) 
    {
        Scanner sObj = new Scanner(System.in);
        DigitX dObj = new DigitX();

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iValue = sObj.nextInt();

        iRet = dObj.CountDigits(iValue);

        System.out.println("Number of digits are : " + iRet);

        sObj.close();
    }
}