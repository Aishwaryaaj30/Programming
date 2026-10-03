#include<stdio.h>

typedef unsigned int UINT;

// Position 23
int main()
{
   UINT iMask = 0xFFBFFFFF;
   UINT iNo = 0;

   printf("Enter number : ");
   scanf("%d", &iNo);

   iNo = iNo & iMask;

   printf("Updated number : %d\n", iNo);

    return 0;
}