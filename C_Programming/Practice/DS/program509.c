#include<stdio.h>

void Display()
{
    static int iCnt = 0;

    iCnt = 1;   // ISSUE

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