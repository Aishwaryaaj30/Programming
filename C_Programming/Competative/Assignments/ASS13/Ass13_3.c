// Accept N numbers from user and check whether that numbers contains 11 in it or not.

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
// Function name    :   Check
// Input            :   int
// Output           :   Boolean
// Description      :   To check whether that numbers contains 11 in it or not.
// Date             :   06/06/2026 
// Author           :   Aishwarya Mohan Jadhav
//
/////////////////////////////////////////////////////////////////////////////

BOOL Check(
            int Arr[],                  // first input
            int iLength                 // Second input
           )
{
    int iCnt = 0;                       // Initialize counter          
    BOOL bFlag = FALSE;                 

    for(iCnt = 0; iCnt < iLength ; iCnt++)      // Loop
    {
        if(Arr[iCnt] == 11)                     // Condition
        {
            bFlag = TRUE;
        }
    }
    return bFlag;
}

/////////////////////////////////////////////////////////////////
//
// Application to display that numbers contains 11 in it or not.
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;
    int iCnt = 0;
    BOOL bRet = FALSE;
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

    bRet = Check(p, iSize);

    if(bRet == TRUE)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is absent\n");
    }

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
// Input :  N        : 6
//          Elements : 85 66 11 80 93 88 
// Output : 11 is present
//
// Input :  N        : 6
//          Elements : 85 66 3 80 93 88 
// Output : 11 is absent
//
/////////////////////////////////////////////////////////////////