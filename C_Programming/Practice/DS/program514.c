#include<stdio.h>

void Display(int iNo)
{
    static int iCount = 1;

    if(iCount <= iNo)
    {
        printf("Jay Ganesh... %d\n", iCount);
        iCount++;
        Display(iNo);
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