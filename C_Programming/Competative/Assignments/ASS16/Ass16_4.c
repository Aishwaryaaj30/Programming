// Accept N number from user and display all such numbers which contains 3 digit in it.

/////////////////////////////////////////////////////////////////////////////
//
// Include required header files
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function name    :   Digitd
// Input            :   int
// Output           :   void
// Description      :   Display all such numbers which contains 3 digit in it.
// Date             :   06/06/2026 
// Author           :   Aishwarya Mohan Jadhav       
//
/////////////////////////////////////////////////////////////////////////////

void Digits(
                int Arr[], 
                int iLength
           )
{
    int iCnt = 0;
    int iCount = 0;
    int iNo = 0;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        iNo = Arr[iCnt];
        iCount = 0;

        while(iNo != 0)
        {
            iCount++;
            iNo = iNo / 10;
        }

        if(iCount == 3)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
    printf("\n");
}

/////////////////////////////////////////////////////////////////
//
// Application to display all such numbers which contains 3 digit in it.
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;
    int iCnt = 0;
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

    Digits(p, iSize);

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
// Input :  N        : 6
//          Elements : 8225 665 3 76 953 858  
// Output : 665	953	858
//
/////////////////////////////////////////////////////////////////