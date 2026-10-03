#include<stdio.h>

int main()
{
    int iNo = 0;
    int iDigit = 0;
    int iCount = 0;

    printf("Enter first number : ");
    scanf("%d", &iNo);

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        if(iDigit == 1)
        {
            iCount++;
        }
        iNo = iNo / 2;
    }

    printf("Count of 1 is : %d\n", iCount);

    return 0;
}