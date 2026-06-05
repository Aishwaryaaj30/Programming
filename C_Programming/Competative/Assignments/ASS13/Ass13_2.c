// Accept N number from user and return difference between frequency of even & odd numbers.

/////////////////////////////////////////////////////////////////////////////
//
// Include required header files
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function name    :   CountEvenOdd
// Input            :   int
// Output           :   int
// Description      :   perform difference between frequency of even & odd numbers
// Date             :   06/06/2026 
// Author           :   Aishwarya Mohan Jadhav       
//
/////////////////////////////////////////////////////////////////////////////

int CountEvenOdd(
                    int Arr[],                 // first input
                    int iLength                // Second input
                )
{
    int iFreqEven = 0;                         // Count Frequency of Even numbers
    int iFreqOdd = 0;                          // Count Frequency of Odd numbers
    int iCnt = 0;                              // Initialize counter
    int iDiff = 0;                             // To store difference

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)    // Loop
    {
        if(Arr[iCnt] % 2 == 0)                 // Condition
        {
            iFreqEven++;
        }
        else
        {
            iFreqOdd++;
        }
    }
    iDiff = iFreqEven - iFreqOdd;
    return iDiff;
}

/////////////////////////////////////////////////////////////////
//
// Application to Perform to display given pattern of int value
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;          // To Store size of array 
    int iRet = 0;           // To store return value
    int iCnt = 0;           // Initailze Counter
    int *p = NULL;          // Pointer

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n", iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)           // Initialize counter
    {
        printf("Enter element %d : ", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    iRet = CountEvenOdd(p, iSize);                  // Function call by Address

    printf("Result is %d\n", iRet);

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
// Input :  N        : 7
//          Elements : 85 66 3 80 93 88 90
// Output : 1
//
/////////////////////////////////////////////////////////////////