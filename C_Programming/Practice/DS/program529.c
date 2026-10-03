// 4
// 1 * 2 * 3 * 4 = 24

#include<stdio.h>

typedef unsigned long int ULONG;

ULONG Factorial(int iNo)
{
    ULONG iFact = 1;

    while(iNo != 0)
    {
        iFact = iFact * iNo;
        iNo--;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("Factorial is : %lu\n", iRet);
    
    return 0;
}