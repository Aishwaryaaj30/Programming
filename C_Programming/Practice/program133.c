#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Time complexity : O(N)
bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iLength = 0, iCnt = 0, iValue = 0;
    bool bRet = false;
    int *Brr = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iLength);

    Brr = (int *)malloc(iLength * sizeof(int));
    
    printf("Enter elements:\n");

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    printf("Enter the element that you want to search : ");
    scanf("%d", &iValue);

    bRet = LinearSearch(Brr, iLength, iValue);

    if(bRet == true)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is absent\n");
    }

    free(Brr);

    return 0;
}