import java.util.*;

class StringX
{
    public String ToUpperX(String str)
    {
        int iCnt = 0;
        char Arr[] = str.toCharArray();
        
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = Arr[iCnt] - 32;         // Error
        }

        return new String(Arr);
    }
}

class program281
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;
        StringX strObj = new StringX();
        String sRet = null;

        System.out.println("Enter string : ");
        data = sobj.nextLine();

        sRet = strObj.ToUpperX(data);

        System.out.println("Updated string is : " + sRet);

        sobj.close();
    }
}