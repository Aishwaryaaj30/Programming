import java.util.*;
import Marvellous.StringX;

class program277
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;
        StringX strObj = new StringX();         
        int iRet = 0;

        System.out.println("Enter string : ");
        data = sobj.nextLine();

        iRet = strObj.CountCapital(data);
        System.out.println("Number of capital characters : " + iRet);

        iRet = strObj.CountSmall(data);
        System.out.println("Number of small characters : " + iRet);

        iRet = strObj.CountDigits(data);
        System.out.println("Number of digits are : " + iRet);

        iRet = strObj.CountSpace(data);
        System.out.println("Number of white spaces are : " + iRet);

        iRet = strObj.CountSpecial(data);
        System.out.println("Number of special symbols are : " + iRet);

        sobj.close();
    }
}