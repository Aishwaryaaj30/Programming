#include<stdio.h>

typedef unsigned int UINT;

// Position 12 & 23
int main()
{
    UINT iMask = 0x00400800;
    UINT iNo = 0;
    UINT iResut = 0;

    printf("Enter number : ");
    scanf("%d", &iNo);

    iResut = iNo ^ iMask;
    
    printf("Updated number : %d\n", iResut);

    return 0;
}