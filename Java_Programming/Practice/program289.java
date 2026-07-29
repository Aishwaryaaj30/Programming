import java.util.*;

class StringX
{
    public String ToUpperX(String str)
    {
        int iCnt = 0;
        char Arr[] = str.toCharArray();
        
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
            {
                Arr[iCnt] = (char)(Arr[iCnt] - 32);  
            }
        }

        return new String(Arr);
    }

    public String ToLowerX(String str)
    {
        int iCnt = 0;
        char Arr[] = str.toCharArray();
        
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32);  
            }
        }

        return new String(Arr);
    }

    public String Toggle(String str)
    {
        int iCnt = 0;
        char Arr[] = str.toCharArray();
        
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32);  
            }
            else if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')                                     
            {
                Arr[iCnt] = (char)(Arr[iCnt] - 32);  
            }
        }

        return new String(Arr);
    }
}

class program289
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
        System.out.println("To Upper string : " + sRet);

        sRet = strObj.ToLowerX(data);
        System.out.println("Lower string : " + sRet);

        sRet = strObj.Toggle(data);
        System.out.println("Toggle string : " + sRet);

        sobj.close();
    }
}