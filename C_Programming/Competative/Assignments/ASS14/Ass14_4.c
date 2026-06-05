// Accept N numbers from user and accept one range, display all elements from that range.

/////////////////////////////////////////////////////////////////////////////
//
// Include required header files
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function name    :   Range
// Input            :   int
// Output           :   void
// Description      :   Display all elements from that range.
// Date             :   06/06/2026 
// Author           :   Aishwarya Mohan Jadhav       
//
/////////////////////////////////////////////////////////////////////////////

void Range(
            int Arr[],
            int iLength,
            int iStart, 
            int iEnd
          )
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] > iStart && Arr[iCnt] < iEnd)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
    printf("\n");
}

/////////////////////////////////////////////////////////////////
//
// Application to display all elements from that range.
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    printf("Enter the starting point : ");
    scanf("%d", &iValue1);

    printf("Enter the ending point : ");
    scanf("%d", &iValue2);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter %d elements :\n", iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("Enter elements %d : ", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
// Input :  N        : 6
//          Start    : 66
//          End      : 90
//          Elements : 85 66 3 76 93 88 
// Output : 85	66	76	88
//
// Input :  N        : 6
//          Start    : 30
//          End      : 50
//          Elements : 85 66 3 76 93 88 
// Output : 
//
/////////////////////////////////////////////////////////////////