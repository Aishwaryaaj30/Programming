#include<stdio.h>

typedef unsigned int UINT;

// Position 4
int main()
{
   UINT iMask = 0xFFFFFFF7;
   UINT iNo = 0;

   printf("Enter number : ");
   scanf("%d", &iNo);

   iNo = iNo & iMask;

   printf("Updated number : %d\n", iNo);

    return 0;
}