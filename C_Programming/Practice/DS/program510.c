#include<stdio.h>

void Display()
{
    static int iCnt = 1;

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