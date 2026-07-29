#include<stdio.h>
#include<stdlib.h>

// Time complexity : O(N)
int Maximum(int Arr[], int iSize)
{
    int iCnt = 0, iMax = 0;

    iMax = Arr[0];

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iLength);

    Brr = (int *)malloc(iLength * sizeof(int));
    
    printf("Enter elements:\n");

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    iRet = Maximum(Brr, iLength);

    printf("Maximum element is : %d\n", iRet);

    free(Brr);

    return 0;
}