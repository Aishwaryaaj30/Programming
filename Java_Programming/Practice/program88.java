import java.util.Scanner;

class DigitX
{
    public void CountEvenOddDigits(int iNo)
    {
        int iDigit = 0;
        int iCountEven = 0;
        int iCountOdd = 0;
        
        while(iNo != 0)
        {

            iDigit = iNo % 10; 
            if(iDigit % 2 == 0)
            {
                iCountEven++;
            }
            else
            {
                iCountOdd++;
            }
            iNo = iNo / 10;
        }
        System.out.println("Number of Even digits are : " + iCountEven);
        System.out.println("Number of Odd digits are : " + iCountOdd);
    }
}

class program88
{
    public static void main(String A[]) 
    {
        Scanner sObj = new Scanner(System.in);
        DigitX dObj = new DigitX();

        int iValue = 0;

        System.out.println("Enter number : ");
        iValue = sObj.nextInt();

        dObj.CountEvenOddDigits(iValue);

        sObj.close();
    }
}