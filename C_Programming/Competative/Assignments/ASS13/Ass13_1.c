// Accept N number from user and return frequency of even numbers.

/////////////////////////////////////////////////////////////////////////////
//
// Include required header files
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function name    :   Counteven
// Input    :           int
// Output   :           int
// Description  :       Count frequency of Even numbers
// Date :               06/06/2026 
// Author   :           Aishwarya Mohan Jadhav
//
/////////////////////////////////////////////////////////////////////////////

int CountEven( 
                int Arr[],              // first input
                int iLength             // Second input
             )
{
    int iFreq = 0;                      // To store Frequency
    int iCnt = 0;                       // Initialize counter 

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)     // Loop
    {
        if(Arr[iCnt] % 2 == 0)                  // Condition
        {
            iFreq++;
        }
    }
    return iFreq;
}

/////////////////////////////////////////////////////////////////
//
// Application to display frequency of Even numbers
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

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("Enter element %d : ", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    iRet = CountEven(p, iSize);

    printf("Result is %d\n", iRet);

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
// Input :  N        : 6
//          Elements : 85 66 3 80 93 88
// Output : 3
//
/////////////////////////////////////////////////////////////////