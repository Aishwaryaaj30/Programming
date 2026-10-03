#include<stdio.h>

typedef unsigned int UINT;

// Position 23
int main()
{
    UINT iMask = 0xFFFFFFBF;
   
    printf("Before : %X\n", iMask);

    iMask = ~iMask;

    printf("After : %X\n", iMask);

    return 0;
}