#include<stdio.h>

typedef unsigned int UINT;

// Position 21 & 27
int main()
{
    UINT iMask = 0x04100000;
    UINT iNo = 0;
    UINT iResut = 0;

    printf("Enter number : ");
    scanf("%d", &iNo);

    iResut = iNo ^ iMask;
    
    printf("Updated number : %d\n", iResut);

    return 0;
}