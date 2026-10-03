#include<stdio.h>

typedef unsigned int UINT;

// Position 3 & 7
int main()
{
    UINT iMask = 0x00000044;
    UINT iNo = 0;
    UINT iResut = 0;

    printf("Enter number : ");
    scanf("%d", &iNo);

    iResut = iNo ^ iMask;
    
    printf("Updated number : %d\n", iResut);

    return 0;
}