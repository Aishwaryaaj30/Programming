#include<stdio.h>

void Display()
{
    auto int iCnt = 0;

    iCnt = 1;

    if(iCnt <= 4)
    {
        printf("Jay Ganesh...\n");
        iCnt++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}