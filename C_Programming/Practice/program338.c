#include<stdio.h>

typedef unsigned int UINT;

// Position 13
int main()
{
   UINT iMask = 0xFFFFEFFF;
   UINT iNo = 0;

   printf("Enter number : ");
   scanf("%d", &iNo);

   iNo = iNo & iMask;

   printf("Updated number : %d\n", iNo);

    return 0;
}