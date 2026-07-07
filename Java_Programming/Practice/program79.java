import java.util.Scanner;

class DigitX
{
    public void DisplayDigits(int iNo)
    {
        int iDigit = 0;

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            System.out.println(iDigit);
            iNo = iNo / 10;
        }
    }
}

class program79
{
    public static void main(String A[]) 
    {
        Scanner sObj = new Scanner(System.in);
        DigitX dObj = new DigitX();

        int iValue = 0;

        System.out.println("Enter number : ");
        iValue = sObj.nextInt();

        dObj.DisplayDigits(iValue);

        sObj.close();
    }
}