// Accept N numbers from user and accept one another number as NO,
// return index of last occurrence of that NO

/////////////////////////////////////////////////////////////////////////////
//
// Include required header files
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function name    :   LastOcc
// Input            :   int
// Output           :   int
// Description      :   Return index of last occurrence of that NO
// Date             :   06/06/2026 
// Author           :   Aishwarya Mohan Jadhav       
//
/////////////////////////////////////////////////////////////////////////////

int LastOcc(
                int Arr[],
                int iLength, 
                int iNo
           )
{
    int iCnt = 0;

    for(iCnt = iLength; iCnt > 0 ; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }
    return -1;
}

/////////////////////////////////////////////////////////////////
//
// Application to display index of last occurrence of that NO
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iValue = 0;
    int iRet = 0;
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

    iRet = LastOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("Last occurrence of number is %d\n", iRet);
    }

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
// Input :  N        : 6
//          NO       : 66
//          Elements : 85 66 3 66 93 88 
// Output : 3
//
// Input :  N        : 6
//          NO       : 93
//          Elements : 85 66 3 66 93 88 
// Output : 4
//
// Input :  N        : 6
//          NO       : 12
//          Elements : 85 11 3 15 11 111 
// Output : -1
//
/////////////////////////////////////////////////////////////////