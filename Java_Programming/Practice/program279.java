import java.util.*;

class StringX
{
    public String Update(String str)
    {
        int iCnt = 0;
        char Arr[] = str.toCharArray();
        
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == 'a'|| Arr[iCnt] == 'A')
            {
                Arr[iCnt] = '_';
            }
        }

        return new String(Arr);
    }
}

class program279
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;
        StringX strObj = new StringX();
        String sRet = null;

        System.out.println("Enter string : ");
        data = sobj.nextLine();

        sRet = strObj.Update(data);

        System.out.println("Updated string is : " + sRet);

        sobj.close();
    }
}