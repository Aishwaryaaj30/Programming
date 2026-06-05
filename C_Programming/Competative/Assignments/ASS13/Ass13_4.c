// Accept N numbers from user and return frequency of  11 from it.

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
// Description  :       Count frequency of  11 from it.
// Date :               06/06/2026 
// Author   :           Aishwarya Mohan Jadhav
//
/////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, iFreq = 0;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iFreq++;
        }
    }
    return iFreq;
}

/////////////////////////////////////////////////////////////////
//
// Application to Display frequency of  11 from it.
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter %d elements :\n", iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("Enter elements %d : ", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize);

    printf("%d\n", iRet);

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
// Input :  N        : 6
//          Elements : 85 66 3 15 93 88 
// Output : 0
//
// Input :  N        : 6
//          Elements : 85 11 3 15 11 111 
// Output : 2
//
/////////////////////////////////////////////////////////////////