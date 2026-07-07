import java.util.Scanner;

class NumberX
{
    public boolean checkPrime(int iNo)
    {
        int iCnt = 0;
        
        for(iCnt = 2 ; iCnt <= (iNo/2) ; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                break;
            }
        }

        if(iCnt < iNo/2)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

class program66
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iValue = sc.nextInt();

        NumberX nobj = new NumberX();

        bRet = nobj.checkPrime(iValue);

        if(bRet == true)
        {
            System.out.println("It is Prime");
        }
        else
        {
            System.out.println("It is not Prime");
        }

        sc.close();
    }
}