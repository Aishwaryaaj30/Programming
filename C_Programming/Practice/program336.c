#include<stdio.h>

typedef unsigned int UINT;

// Position 4
UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0;
    UINT iResult = 0;

    if(iPos < 1 || iPos > 32)
    {
        printf("Invalid bit position\n");
        return iNo;
    }
    
    iMask = 0xFFFFFFF7;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
   UINT iValue = 0;
   UINT iLocation = 0;
   UINT iRet = 0;

   printf("Enter number : ");
   scanf("%d", &iValue);

   printf("Enter bit position : ");
   scanf("%d", &iLocation);

   iRet = OffBit(iValue, iLocation);

   printf("Updated number : %d\n", iRet);

    return 0;
}