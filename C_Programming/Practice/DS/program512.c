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
    Display(7);

    return 0;
}