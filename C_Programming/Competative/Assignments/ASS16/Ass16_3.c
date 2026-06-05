// Accept N number from user and return difference between largest & smallest number.

/////////////////////////////////////////////////////////////////////////////
//
// Include required header files
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function name    :   Difference
// Input            :   int
// Output           :   int
// Description      :   perform difference between largest & smallest number.
// Date             :   06/06/2026 
// Author           :   Aishwarya Mohan Jadhav       
//
/////////////////////////////////////////////////////////////////////////////

int Difference(
                    int Arr[],
                    int iLength
              )
{
    int iCnt = 0;
    int iMin = 0;
    int iMax = 0;
    int iDiff = 0;

    iMin = Arr[0];
    iMax = Arr[0];

    for(iCnt = 1 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        else if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    iDiff = iMax - iMin;
    return iDiff;
}

/////////////////////////////////////////////////////////////////
//
// Application to display difference between largest & smallest number.
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

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements :\n", iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("Enter element %d : ", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Difference number is %d\n", iRet);

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
// Input :  N        : 6
//          Elements : 85 66 3 66 93 88 
// Output : 90  (93 - 3)
//
/////////////////////////////////////////////////////////////////