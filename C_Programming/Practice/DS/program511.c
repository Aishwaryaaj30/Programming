#include<stdio.h>

void Display()
{
    static int iCount = 1;

    if(iCount <= 4)
    {
        printf("Jay Ganesh... %d\n", iCount);
        iCount++;
        
        Display();
    }
}

int main()
{
    Display();

    return 0;
}