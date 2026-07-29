#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int iCnt = 0, iLength = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements : ", iLength);

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        printf("Enter element %d : \n", iCnt+1);
        scanf("%d", &Brr[iCnt]);
    }

    iRet = Summation(Brr, iLength);

    printf("Summation is %d\n", iRet);

    free(Brr);

    return 0;
}