import java.util.Scanner;

class DigitX
{
    public void DisplayDigits(int iNo)
    {
        while(iNo > 0)
        {
            System.out.println(iNo % 10);
            iNo = iNo / 10;
        }
    }
}

class program80
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