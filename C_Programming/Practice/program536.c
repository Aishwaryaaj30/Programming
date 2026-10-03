#include<stdio.h>

int Multiply(int iNo)
{
    int iDigit = 0;
    static int iMult = 1;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        Multiply(iNo / 10);
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Multiply(iValue);
    printf("Multiply is : %d\n", iRet);

    return 0;
}