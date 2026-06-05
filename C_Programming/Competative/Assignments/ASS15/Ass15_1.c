// Accept N numbers from user and return difference between summation of Even and Odd elements.

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
// Description      :   Perform Addition of Even & odd numbers.
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
    int iSumEven = 0;
    int iSumOdd = 0;
    int iDiff = 0;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }
    iDiff = iSumEven - iSumOdd;
    return iDiff;
}

/////////////////////////////////////////////////////////////////
//
// Application to display summation of all even & odd numbers
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
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements :\n", iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("Enter element %d : ", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Result is %d\n", iRet);

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
// Input :  N        : 6
//          Elements : 85 66 3 80 93 88 
// Output : 53  (234 - 181)
//
/////////////////////////////////////////////////////////////////