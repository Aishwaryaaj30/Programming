#include<stdio.h>

typedef unsigned int UINT;

// Position 28
int main()
{
   UINT iMask = 0;
   UINT iNo = 0;

   printf("Enter number : ");
   scanf("%d", &iNo);

   iMask = 0x08000000;

   iNo = iNo ^ iMask;

   printf("Updated number : %d\n", iNo);

    return 0;
}