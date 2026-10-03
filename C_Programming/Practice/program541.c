#include<stdio.h>

void Display(int Arr[], int iSize)
{
    static int iCnt = 0;

    if(iCnt < iSize)
    {
        iCnt++;
        Display(Arr, iSize);
        printf("%d\n", Arr[iCnt]);      // Invalid data
    }
}

int main()
{
    int Brr[] = {10,20,30,40,50};

    Display(Brr, 5);

    return 0;
}