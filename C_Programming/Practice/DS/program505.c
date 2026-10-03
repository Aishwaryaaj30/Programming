#include<stdio.h>

void Display()
{
    auto int iCount = 1;

    printf("Jay Ganesh... %d\n", iCount);
    iCount++;

    Display();
}

int main()
{
    Display();

    return 0;
}