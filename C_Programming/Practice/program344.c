#include<stdio.h>

typedef unsigned int UINT;

// Position 9 & 17
int main()
{
    UINT iMask = 0x00010100;
    UINT iNo = 0;
    UINT iResut = 0;

    printf("Enter number : ");
    scanf("%d", &iNo);

    iResut = iNo ^ iMask;
    
    printf("Updated number : %d\n", iResut);

    return 0;
}