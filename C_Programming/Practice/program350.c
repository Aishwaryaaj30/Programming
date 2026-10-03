#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBits(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask = 0;
    UINT iMask1 = 0x1;
    UINT iMask2 = 0x1;
    UINT iResult = 0;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iMask = iMask1 | iMask2;

    iResult = iNo ^ iMask;
    
    return iResult;
}


int main()
{   
    UINT iValue = 0;
    UINT iLocation1 = 0;
    UINT iLocation2 = 0;
    UINT iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    printf("Enter bit position 1 : ");
    scanf("%d", &iLocation1);

    printf("Enter bit position 2 : ");
    scanf("%d", &iLocation2);

    iRet = ToggleBits(iValue, iLocation1, iLocation2);

    printf("Updated number : %d\n", iRet);
    
    return 0;
}