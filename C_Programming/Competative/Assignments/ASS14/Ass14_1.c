// Accept N numbers from user and accept one another number as NO,
// check whether NO is present or not.

/////////////////////////////////////////////////////////////////////////////
//
// Include required header files
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////
//
// Function name    :   Frequency
// Input            :   int
// Output           :   Boolean
// Description      :   To check whether NO is present or not.
// Date             :   06/06/2026 
// Author           :   Aishwarya Mohan Jadhav       
//
/////////////////////////////////////////////////////////////////////////////

BOOL Frequency(
                int Arr[],
                int iLength,
                int iNo
              )
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = TRUE;
        }
    }
    return bFlag;
}

/////////////////////////////////////////////////////////////////
//
// Application to display whether NO is present or not.
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iValue = 0;
    BOOL bRet = FALSE;
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

    bRet = Frequency(p, iSize, iValue);

    if(bRet == TRUE)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
// Input :  N        : 6
//          NO       : 66
//          Elements : 85 66 3 66 93 88 
// Output : TRUE
//
// Input :  N        : 6
//          NO       : 12
//          Elements : 85 11 3 15 11 111 
// Output : FALSE
//
/////////////////////////////////////////////////////////////////