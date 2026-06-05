// Accept N numbers from user and accept one another number as NO,
// return frequency of  NO from it.

/////////////////////////////////////////////////////////////////////////////
//
// Include required header files
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function name    :   Frequency
// Input    :           int
// Output   :           int
// Description  :       Frequency of  NO from it
// Date :               06/06/2026 
// Author   :           Aishwarya Mohan Jadhav
//
/////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iFreq = 0;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFreq++;
        }
    }
    return iFreq;
}

/////////////////////////////////////////////////////////////////
//
// Application to display requency of  NO from it
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    printf("Enter the number : ");
    scanf("%d", &iValue);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter %d elements :\n", iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("Enter elements %d : ", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize, iValue);

    printf("%d\n", iRet);

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
// Input :  N        : 6
//          NO       : 66
//          Elements : 85 66 3 66 93 88 
// Output : 2
//
// Input :  N        : 6
//          NO       : 12
//          Elements : 85 11 3 15 11 111 
// Output : 0
//
/////////////////////////////////////////////////////////////////