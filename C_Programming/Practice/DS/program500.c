#include<stdio.h>

void Display()
{
    auto int iCnt = 0;          // Storage class (auto)

    for(iCnt = 1; iCnt <= 4; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

int main()
{
    Display();

    return 0;
}