#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = 1;

    while(iCnt <= iNo)
    {
        printf("Jay Ganesh...\n");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter frequency : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}