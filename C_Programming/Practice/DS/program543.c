#include<stdio.h>

int Summation(int Arr[], int iSize)
{
    static int iCnt = 0;
    static int iSum = 0;

    if(iCnt < iSize)
    {
        iSum = iSum + Arr[iCnt];
        iCnt++;
        Summation(Arr, iSize);
    }
    return iSum;
}

int main()
{
    int Brr[] = {10,20,30,40,50};
    int iRet = 0;

    iRet = Summation(Brr, 5);
    printf("Summation is : %d\n", iRet);

    return 0;
}